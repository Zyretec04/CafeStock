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

System::Void CafeStock::Register::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    System::String^ connString = "Data Source=cafestock.c5cmiu400v99.ap-northeast-2.rds.amazonaws.com;Initial Catalog=dboInventory;User ID=sa;Password=CafeStock1234";
    System::String^ username = txtUsername->Text;
    System::String^ password = txtPassword->Text;
    System::String^ confirmPassword = txtConfirmPass->Text;

  
    if (username->Trim() == "" || password->Trim() == "" || confirmPassword->Trim() == "") {
        MessageBox::Show("All fields are required!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    if (username->Trim() == "admin") {
        MessageBox::Show("Please choose a different username!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }
    if (password->Length < 8) {
        MessageBox::Show("Password must be at least 8 characters long!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }
    if (password != confirmPassword) {
        MessageBox::Show("Passwords do not match!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    System::String^ hashedPassword = password;

    try {
        SqlConnection^ connection = gcnew SqlConnection(connString);
        connection->Open();

        SqlCommand^ checkUserCmd = gcnew SqlCommand("SELECT COUNT(*) FROM Users WHERE username = @username", connection);
        checkUserCmd->Parameters->AddWithValue("@username", username);
        int userCount = safe_cast<int>(checkUserCmd->ExecuteScalar());

        if (userCount > 0) {
            MessageBox::Show("Username already exists. Choose another.", "Registration Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
            connection->Close();
            return;
        }

        SqlCommand^ command = gcnew SqlCommand("INSERT INTO Users (username, password) VALUES (@username, @password)", connection);
        command->Parameters->AddWithValue("@username", username);
        command->Parameters->AddWithValue("@password", hashedPassword);
        command->ExecuteNonQuery();

        MessageBox::Show("Registration successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        connection->Close();

        this->Hide();
        MainLogin^ loginForm = gcnew MainLogin();
        loginForm->ShowDialog();
        this->Close();
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}