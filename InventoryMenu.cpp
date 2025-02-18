#include "InventoryMenu.h"
#include "EditPopup1.h"

System::Void CafeStock::InventoryMenu::btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();  // Hide the current menu form
        
    // Create an instance of EditPopup and show it modally
    EditPopup1^ editPopup = gcnew EditPopup1();
    editPopup->ShowDialog();

    // Optionally show the menu again after closing EditPopup
    this->Show();
}
