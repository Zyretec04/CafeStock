#include "Register.h"
#include "MainLogin.h"
#include "DatabaseHandler.h"

using namespace System;
using namespace System::Data;
using namespace System::Windows::Forms;

System::Void CafeStock::Register::lblRegis_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    MainLogin^ loginForm = gcnew MainLogin();
    loginForm->ShowDialog();
    this->Close();
}

// Registration Button Click Event
System::Void CafeStock::Register::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get user input from form fields
    System::String^ username = txtUsername->Text;
    System::String^ password = txtPassword->Text;
    System::String^ confirmPassword = txtConfirmPass->Text;

    // Validate inputs
    if (System::String::IsNullOrWhiteSpace(username) ||
        System::String::IsNullOrWhiteSpace(password) ||
        System::String::IsNullOrWhiteSpace(confirmPassword))
    {
        MessageBox::Show("All fields are required!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Check if passwords match
    if (password != confirmPassword) {
        MessageBox::Show("Passwords do not match!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Hash password (Replace with SHA-256 or bcrypt in production)
    System::String^ hashedPassword = password; // Placeholder: Replace with actual hashing

    // Create Database Handler
    DatabaseHandler^ db = gcnew DatabaseHandler();

    // Connect to Supabase
    if (!db->connect()) {
        MessageBox::Show("Failed to connect to database.", "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    try {
        // Check if the username already exists
        System::String^ checkQuery = "SELECT COUNT(*) FROM public.users WHERE username = @username;";
        DataTable^ result = db->executeQuery(checkQuery, username, "");

        if (result != nullptr && result->Rows->Count > 0) {
            int userCount = System::Convert::ToInt32(result->Rows[0]->ItemArray[0]);

            if (userCount > 0) {
                MessageBox::Show("Username already exists. Choose another.", "Registration Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
        }

        // Insert new user into Supabase (No DataTable needed, as INSERT returns no rows)
        System::String^ insertQuery = "INSERT INTO public.users (username, password) VALUES (@username, @password);";
        db->executeQuery(insertQuery, username, hashedPassword);  // No need to check for result since it's INSERT

        // Show success message
        MessageBox::Show("Registration successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Redirect to Login Form
        this->Hide();
        MainLogin^ loginForm = gcnew MainLogin();
        loginForm->ShowDialog();
        this->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
