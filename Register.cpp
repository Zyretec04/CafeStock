#include "Register.h"
#include "MainLogin.h"
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;

System::Void CafeStock::Register::lblRegis_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    MainLogin^ loginForm = gcnew MainLogin();
    loginForm->ShowDialog();
    this->Close();
}


// Database Connection String

System::Void CafeStock::Register::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    System::String^ connString = "Data Source=DESKTOP-7R4GRV2\\SQLEXPRESS;Initial Catalog=dboInventory;User ID=sa;Password=12345";
    // Get user input from form fields
    System::String^ username = txtUsername->Text;
    System::String^ password = txtPassword->Text;
    System::String^ confirmPassword = txtConfirmPass->Text;

    // Check if fields are empty
    if (username->Trim() == "" || password->Trim() == "" || confirmPassword->Trim() == "") {
        MessageBox::Show("All fields are required!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }
    if (username->Trim() == "admin") {
        MessageBox::Show("Please choose a different username!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;

    }

    // Check if passwords match
    if (password != confirmPassword) {
        MessageBox::Show("Passwords do not match!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Hash the password using a simple hashing method (MD5 or SHA-256 recommended)
    System::String^ hashedPassword = password; // Ideally, you should use a proper hashing function

    try {
        // Establish database connection
        SqlConnection^ connection = gcnew SqlConnection(connString);
        connection->Open();

        // Check if the username already exists
        SqlCommand^ checkUserCmd = gcnew SqlCommand("SELECT COUNT(*) FROM Users WHERE Username = @username", connection);
        checkUserCmd->Parameters->AddWithValue("@username", username);
        int userCount = safe_cast<int>(checkUserCmd->ExecuteScalar());

        if (userCount > 0) {
            MessageBox::Show("Username already exists. Choose another.", "Registration Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
            connection->Close();
            return;
        }

        // Insert new user into database
        SqlCommand^ command = gcnew SqlCommand("INSERT INTO Users (Username, Password) VALUES (@username, @password)", connection);
        command->Parameters->AddWithValue("@username", username);
        command->Parameters->AddWithValue("@password", hashedPassword);
        command->ExecuteNonQuery();

        MessageBox::Show("Registration successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        connection->Close();

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
