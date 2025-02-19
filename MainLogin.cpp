#include "MainLogin.h"
#include "Menumain.h"
#include "Register.h"
#include "DatabaseHandler.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;

[STAThread]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew CafeStock::MainLogin());
    return 0;
}

System::Void CafeStock::MainLogin::bttnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get input from textboxes
    System::String^ username = this->txtUsername->Text;
    System::String^ password = this->txtPassword->Text;

    // Input validation
    if (System::String::IsNullOrWhiteSpace(username)) {
        MessageBox::Show("Username cannot be empty.", "Validation Error",
            MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    if (System::String::IsNullOrWhiteSpace(password)) {
        MessageBox::Show("Password cannot be empty.", "Validation Error",
            MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Create database handler
    DatabaseHandler^ db = gcnew DatabaseHandler();

    if (!db->connect()) {
        MessageBox::Show("Database connection failed. Check your Supabase credentials.",
            "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Parameterized Query
    System::String^ query = "SELECT COUNT(*) FROM public.users WHERE username = @username AND password = @password;";

    // Execute Query
    DataTable^ result = db->executeQuery(query, username, password);

    if (result == nullptr) {
        MessageBox::Show("Database query execution failed.", "Database Error",
            MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Check Query Result
    if (result != nullptr && result->Rows->Count > 0) {
        int userCount = System::Convert::ToInt32(result->Rows[0]->ItemArray[0]);  // ✅ Correct way to get COUNT(*)

        if (userCount > 0) {
            MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
    
            // Hide current form and show main menu
            this->Hide();
            Menumain^ newForm = gcnew Menumain();
            newForm->ShowDialog();
            this->Close();
        }
        else {
            MessageBox::Show("Invalid username or password.", "Login Failed",
                MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    else {
        MessageBox::Show("User not found.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

System::Void CafeStock::MainLogin::label7_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    Register^ regForm = gcnew Register();
    regForm->ShowDialog();
    this->Close();
}
