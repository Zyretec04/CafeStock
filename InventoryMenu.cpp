#include "InventoryMenu.h"
#include "PopupEdit.h"
#include "EditInventory.h"

using namespace System::Data::SqlClient;

System::Void CafeStock::InventoryMenu::btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
    //this->Hide();  // Hide the current InventoryMenu

    // Open PopupEdit
    PopupEdit^ editPopup = gcnew PopupEdit();
    editPopup->ShowDialog();

    // Show InventoryMenu again after PopupEdit is closed
    this->Show();

    // Refresh DataGridView after editing
    LoadDataFromDatabase();
}

System::Void CafeStock::InventoryMenu::button2_Click(System::Object^ sender, System::EventArgs^ e) {
    // Ensure that a row is selected before proceeding
    if (dataGridView1->SelectedRows->Count > 0)
    {
        // Get selected row data
        int selectedIndex = dataGridView1->SelectedRows[0]->Index;
        //int itemID = Convert::ToInt32(dataGridView1->Rows[selectedIndex]->Cells["Item_ID"]->Value);
        String^ itemName = dataGridView1->Rows[selectedIndex]->Cells["Item_Name"]->Value->ToString();
        String^ itemType = dataGridView1->Rows[selectedIndex]->Cells["Item_Category"]->Value->ToString();
        String^ itemQuantity = dataGridView1->Rows[selectedIndex]->Cells["Item_Quantity"]->Value->ToString();

        //this->Hide();

        EditInventory^ editInventory = gcnew EditInventory(itemName, itemType, itemQuantity);
        editInventory->ShowDialog();

        this->Show();

        // Refresh DGV
        LoadDataFromDatabase();
    }
    else
    {
        // Show a message if no row is selected
        MessageBox::Show("Please select a row to edit.", "No Selection", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
}


