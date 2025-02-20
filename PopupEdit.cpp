#include "PopupEdit.h"
#include "InventoryMenu.h"
#include "Menumain.h"

using namespace System::Data::SqlClient;
System::Void CafeStock::PopupEdit::PopupBack_Click(System::Object^ sender, System::EventArgs^ e) {
    Form^ mainForm = Application::OpenForms["Menumain"];  // Get the existing form
    if (mainForm != nullptr) {
        mainForm->Show();  // Show it again
    }

    this->Close();  // Close EditPopup1
}
System::Void CafeStock::PopupEdit::editCombo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    // Implementation for when the combo box selection changes
    String^ selectedType = editCombo->SelectedItem->ToString();
    // You can add logic here if needed
}
System::Void CafeStock::PopupEdit::btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
// Get values from input fields
String^ itemName = txtItemName->Text;
String^ itemType = editCombo->SelectedItem->ToString();
String^ quantityText = txtQuant->Text;

// Validate input
if (String::IsNullOrWhiteSpace(itemName) || String::IsNullOrWhiteSpace(quantityText)) {
    MessageBox::Show("Please fill in all fields.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    return;
}

// Ensure quantity is a number
int quantity;
if (!Int32::TryParse(quantityText, quantity) || quantity <= 0) {
    MessageBox::Show("Please enter a valid quantity.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    return;
}

// Database Connection String
String^ connectionString = "Data Source=DESKTOP-7R4GRV2\\SQLEXPRESS;Initial Catalog=dboInventory;User ID=sa;Password=12345;Integrated Security=False";

try {
    SqlConnection^ con = gcnew SqlConnection(connectionString);
    con->Open();

    // SQL Query to insert data
    String^ query = "INSERT INTO tblItems (Item_Name, Item_Category, Item_Quantity) VALUES (@name, @type, @quantity)";
    SqlCommand^ cmd = gcnew SqlCommand(query, con);

    // Assign values to parameters
    cmd->Parameters->AddWithValue("@name", itemName);
    cmd->Parameters->AddWithValue("@type", itemType);
    cmd->Parameters->AddWithValue("@quantity", quantity);

    // Execute Query
    int rowsAffected = cmd->ExecuteNonQuery();
    con->Close();

    if (rowsAffected > 0) {
        MessageBox::Show("Item added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Find Menumain
        Form^ mainForm = Application::OpenForms["Menumain"];
        if (mainForm != nullptr) {
            Menumain^ menu = dynamic_cast<Menumain^>(mainForm);
            if (menu != nullptr) {
                // Find InventoryMenu inside Menumain
                for each (Control ^ ctrl in menu->Controls) {
                    InventoryMenu^ inventory = dynamic_cast<InventoryMenu^>(ctrl);
                    if (inventory != nullptr) {
                        inventory->LoadDataFromDatabase();  // Refresh DataGridView
                        menu->BringToFront();  // Ensure Menumain stays visible
                        break;
                    }
                }
            }
        }

        this->Close();  // Close EditPopup1 after adding item
    }
    else {
        MessageBox::Show("Failed to add item.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
catch (Exception^ ex) {
    MessageBox::Show("Database Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
}