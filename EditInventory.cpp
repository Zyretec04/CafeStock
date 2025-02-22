#include "EditInventory.h"
#include "InventoryMenu.h"
#include "Menumain.h"

using namespace System::Data::SqlClient;

int CafeStock::EditInventory::GetItemID(String^ itemName) {
	int itemID = -1; // Default value if not found
	String^ connectionString = "Data Source=LAPTOP-JM0T2KKH\\SQLEXPRESS;Initial Catalog=dboInventory;User ID=sa;Password=123";
	String^ query = "SELECT Item_ID FROM tblItems WHERE Item_Name = @ItemName";

	try {
		// Open connection
		SqlConnection^ conn = gcnew SqlConnection(connectionString);
		conn->Open();

		// Prepare SQL command
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@ItemName", itemName);

		// Execute and read results
		SqlDataReader^ reader = cmd->ExecuteReader();
		if (reader->Read()) {
			itemID = reader->GetInt32(0); // Get the first column value (Item_ID)
		}

		// Close connection
		reader->Close();
		conn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error retrieving item ID: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	return itemID;
}

System::Void CafeStock::EditInventory::btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	// Show a confirmation dialog
	System::Windows::Forms::DialogResult result =
		System::Windows::Forms::MessageBox::Show(
			"Close without saving changes?", // Message
			"Save Changes",              // Title
			System::Windows::Forms::MessageBoxButtons::YesNo,
			System::Windows::Forms::MessageBoxIcon::Question
		);
	// Check if the user clicked "Yes"
	if (result == System::Windows::Forms::DialogResult::Yes) {
		this->Close(); // Close EditInventory
	}
}

System::Void CafeStock::EditInventory::btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ itemName = txtItemName->Text;
	String^ itemType = cmbType->SelectedItem->ToString();
	String^ itemQuantity = txtQuantity->Text;

	if (String::IsNullOrEmpty(itemName) || String::IsNullOrEmpty(itemQuantity)) {
		MessageBox::Show("Please fill in all fields.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	int quantity;
	if (!Int32::TryParse(itemQuantity, quantity) || quantity <= 0) {
		MessageBox::Show("Please enter a valid quantity.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Database connection string
	String^ connectionString = "Data Source=LAPTOP-JM0T2KKH\\SQLEXPRESS;Initial Catalog=dboInventory;User ID=sa;Password=123";

	try {

		// Open connection
		SqlConnection^ conn = gcnew SqlConnection(connectionString);
		conn->Open();

		// SQL update query
		String^ query = "UPDATE tblItems SET Item_Name = @ItemName, Item_Category = @ItemType, Item_Quantity = @ItemQuantity WHERE Item_ID = @ItemID";

		// Prepare SQL command
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@ItemName", itemName);
		cmd->Parameters->AddWithValue("@ItemType", itemType);
		cmd->Parameters->AddWithValue("@ItemQuantity", itemQuantity);
		cmd->Parameters->AddWithValue("@ItemID", this->itemID);

		// Execute query
		cmd->ExecuteNonQuery();
		conn->Close();

		// Show success message
		MessageBox::Show("Item updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Close the form
		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error updating item: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}



