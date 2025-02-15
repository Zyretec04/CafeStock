#include "MainLogin.h"
#include "Menumain.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread] 
int main(array<String^>^ args) { 
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    
    Application::Run(gcnew CafeStock::MainLogin());

    return 0;  
}
System::Void CafeStock::MainLogin::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get the input values from the textboxes
    System::String^ username = this->uNameTxt->Text;
    System::String^ password = this->passTxt->Text;

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

    // Define hardcoded credentials for simplicity (replace with database query in production)
    System::String^ adminUsername = "admin";
    System::String^ adminPassword = "12345";

    // Authentication logic
    if (username == adminUsername && password == adminPassword) {
        // Display success message and proceed
        System::Windows::Forms::MessageBox::Show("Login successful!", "Success",
            System::Windows::Forms::MessageBoxButtons::OK,
            System::Windows::Forms::MessageBoxIcon::Information);

        // Hide current form
        this->Hide();

        // Create an instance of Menumain and show it
        Menumain^ newForm = gcnew Menumain();
        newForm->ShowDialog();

        this->Close();
    }
    else {
        // Invalid credentials
        System::Windows::Forms::MessageBox::Show("Invalid username or password.", "Login Failed",
            System::Windows::Forms::MessageBoxButtons::OK,
            System::Windows::Forms::MessageBoxIcon::Error);
    }
}