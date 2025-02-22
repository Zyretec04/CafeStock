#include "MainLogin.h"
#include "Menumain.h"
#include "AdminMenu.h"
#include "Register.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;

[STAThread] 
int main(array<String^>^ args) { 
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    Application::Run(gcnew CafeStock::MainLogin());

    return 0;  
}

System::Void CafeStock::MainLogin::bttnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get the input values from the textboxes
    System::String^ username = this->txtUsername->Text;
    System::String^ password = this->txtPassword->Text;

    
    // 🔹 Input validation: Check if username or password is empty
    if (System::String::IsNullOrWhiteSpace(username)) {
        System::Windows::Forms::MessageBox::Show("Username cannot be empty.", "Validation Error",
            System::Windows::Forms::MessageBoxButtons::OK,
            System::Windows::Forms::MessageBoxIcon::Warning);
        return; // Exit the function
    }

    if (System::String::IsNullOrWhiteSpace(password)) {
        System::Windows::Forms::MessageBox::Show("Password cannot be empty.", "Validation Error",
            System::Windows::Forms::MessageBoxButtons::OK,
            System::Windows::Forms::MessageBoxIcon::Warning);
        return; // Exit the function
    }
    if (username->Trim() == "admin" && password->Trim() == "alain121004") {
        MessageBox::Show("Welcome Admin!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        this->Hide();
        AdminMenu^ newForm = gcnew AdminMenu();
        newForm->ShowDialog();
        this->Close();
        return;
    }

    System::String^ connString = "Data Source=cafestock.c5cmiu400v99.ap-northeast-2.rds.amazonaws.com;Initial Catalog=dboInventory;User ID=sa;Password=CafeStock1234";

    // // Define hardcoded credentials for simplicity (replace with database query in production)
    // System::String^ adminUsername = "admin";
    // System::String^ adminPassword = "12345";

    try {
        SqlConnection^ connection = gcnew SqlConnection(connString);
        connection->Open();

        SqlCommand^ command = gcnew SqlCommand("SELECT COUNT(*) FROM Users WHERE username = @username AND password = @password", connection);
        command->Parameters->AddWithValue("@username", username);
        command->Parameters->AddWithValue("@password", password);
        int userCount = safe_cast<int>(command->ExecuteScalar());
        if (userCount > 0) {
            MessageBox::Show("Login successful!", "Success",
                MessageBoxButtons::OK, MessageBoxIcon::Information);

            this->Hide();
            Menumain^ newForm = gcnew Menumain();
            newForm->ShowDialog();
            this->Close();
        }
        else {
            MessageBox::Show("Invalid username or password.", "Login Failed",
                MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        connection->Close();
    }
    catch (Exception^ ex) {
        // Handle any errors that may have occurred
        MessageBox::Show(ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

System::Void CafeStock::MainLogin::label7_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    Register^ regForm = gcnew Register();
    regForm->ShowDialog();
    this->Close();
}

//     // Authentication logic
//     if (username == adminUsername && password == adminPassword) {
//         // Display success message and proceed
//         System::Windows::Forms::MessageBox::Show("Login successful!", "Success",
//             System::Windows::Forms::MessageBoxButtons::OK,
//             System::Windows::Forms::MessageBoxIcon::Information);

//         // Hide current form
//         this->Hide();

//         // Create an instance of Menumain and show it
//         Menumain^ newForm = gcnew Menumain();
//         newForm->ShowDialog();

//         this->Close();
//     }
//     else {
//         // Invalid credentials
//         System::Windows::Forms::MessageBox::Show("Invalid username or password.", "Login Failed",
//             System::Windows::Forms::MessageBoxButtons::OK,
//             System::Windows::Forms::MessageBoxIcon::Error);
//     }
// }