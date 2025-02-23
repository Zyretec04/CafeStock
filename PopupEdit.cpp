#include "PopupEdit.h"
#include "InventoryMenu.h"
#include "Menumain.h"

using namespace System::Data::SqlClient;
void CafeStock::PopupEdit::UpdateInventoryCapacity() {
    Form^ mainForm = Application::OpenForms["Menumain"];
    if (mainForm != nullptr) {
        Menumain^ menu = dynamic_cast<Menumain^>(mainForm);
        if (menu != nullptr) {
            for each (Control ^ ctrl in menu->Controls) {
                InventoryMenu^ inventory = dynamic_cast<InventoryMenu^>(ctrl);
                if (inventory != nullptr) {
                    inventory->UpdateInventoryCapacity();  // ✅ Call InventoryMenu's method
                    break;
                }
            }
        }
    }
}
System::Void CafeStock::PopupEdit::PopupBack_Click(System::Object^ sender, System::EventArgs^ e) {
    Form^ mainForm = Application::OpenForms["Menumain"];  // Get the existing form
    if (mainForm != nullptr) {
        mainForm->Show();  // Show it again
    }

    this->Close();  // Close EditPopup1
}
System::Void CafeStock::PopupEdit::editCombo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    // Implementation for when the combo box selection changes
    String^ selectedType = cmbItemType->SelectedItem->ToString();
    // You can add logic here if needed
}
System::Void CafeStock::PopupEdit::btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get values from input fields
    String^ itemName = txtItemName->Text;
    String^ itemType = editCombo->SelectedItem->ToString();
    String^ quantityText = txtQuant->Text;

    if (String::IsNullOrWhiteSpace(itemName) || String::IsNullOrWhiteSpace(quantityText)) {
        MessageBox::Show("Please fill in all fields.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    int quantity;
    if (!Int32::TryParse(quantityText, quantity) || quantity <= 0) {
        MessageBox::Show("Please enter a valid quantity.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    String^ connectionString = "Data Source=cafestock.c5cmiu400v99.ap-northeast-2.rds.amazonaws.com;Initial Catalog=dboInventory;User ID=sa;Password=CafeStock1234";

    try {
        SqlConnection^ con = gcnew SqlConnection(connectionString);
        con->Open();

        // ✅ Check total inventory capacity
        String^ capacityQuery = "SELECT SUM(Item_Quantity) FROM tblItems";
        SqlCommand^ capacityCmd = gcnew SqlCommand(capacityQuery, con);
        Object^ result = capacityCmd->ExecuteScalar();
        int currentTotal = (result != nullptr && result != DBNull::Value) ? Convert::ToInt32(result) : 0;
        int maxCapacity = 10000;

        // ✅ Prevent adding items if capacity is exceeded
        if (currentTotal + quantity > maxCapacity) {
            MessageBox::Show("Inventory is full. Cannot add more items.", "Capacity Exceeded", MessageBoxButtons::OK, MessageBoxIcon::Error);
            con->Close();
            return;
        }

        // ✅ Proceed with insertion if capacity is not exceeded
        String^ query = "INSERT INTO tblItems (Item_Name, Item_Category, Item_Quantity) VALUES (@name, @type, @quantity)";
        SqlCommand^ cmd = gcnew SqlCommand(query, con);

        cmd->Parameters->AddWithValue("@name", itemName);
        cmd->Parameters->AddWithValue("@type", itemType);
        cmd->Parameters->AddWithValue("@quantity", quantity);

        int rowsAffected = cmd->ExecuteNonQuery();
        con->Close();

        if (rowsAffected > 0) {
            MessageBox::Show("Item added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

            Form^ mainForm = Application::OpenForms["Menumain"];
            if (mainForm != nullptr) {
                Menumain^ menu = dynamic_cast<Menumain^>(mainForm);
                if (menu != nullptr) {
                    for each (Control ^ ctrl in menu->Controls) {
                        InventoryMenu^ inventory = dynamic_cast<InventoryMenu^>(ctrl);
                        if (inventory != nullptr) {
                            inventory->LoadDataFromDatabase();
                            inventory->UpdateInventoryCapacity();  // <-- Update capacity
                            menu->BringToFront();
                            break;
                        }
                    }
                }
            }

            this->Close();
        }
        else {
            MessageBox::Show("Failed to add item.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    catch (SqlException^ ex) {
        if (ex->Number == 2627) {
            MessageBox::Show("This item name already exists. Please enter a different name.", "Duplicate Item", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }
        else {
            MessageBox::Show("Database Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
