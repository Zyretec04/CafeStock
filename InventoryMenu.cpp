#include "InventoryMenu.h"
#include "PopupEdit.h"

System::Void CafeStock::InventoryMenu::btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();  // Hide the current InventoryMenu

    // Open PopupEdit
    PopupEdit^ editPopup = gcnew PopupEdit();
    editPopup->ShowDialog();

    // Show InventoryMenu again after PopupEdit is closed
    this->Show();

    // Refresh DataGridView after editing
    LoadDataFromDatabase();
}
