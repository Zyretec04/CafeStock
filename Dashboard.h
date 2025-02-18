#pragma once
#include "Dashboard.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace CafeStock {

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::UserControl
	{
	public:
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->lblText->BackColor = System::Drawing::Color::Transparent;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblText;
	protected:
	protected:
	private: System::Windows::Forms::Label^ lblHeader;
	private: System::Windows::Forms::Button^ bttnExit;

	private: System::Windows::Forms::Button^ bttnMinimize;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblText = (gcnew System::Windows::Forms::Label());
			this->lblHeader = (gcnew System::Windows::Forms::Label());
			this->bttnExit = (gcnew System::Windows::Forms::Button());
			this->bttnMinimize = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->BackColor = System::Drawing::Color::Transparent;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::Firebrick;
			this->lblTitle->Location = System::Drawing::Point(245, 124);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(228, 33);
			this->lblTitle->TabIndex = 5;
			this->lblTitle->Text = L"Welcome User!";
			// 
			// lblText
			// 
			this->lblText->BackColor = System::Drawing::Color::Transparent;
			this->lblText->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->lblText->ForeColor = System::Drawing::Color::Firebrick;
			this->lblText->Location = System::Drawing::Point(83, 252);
			this->lblText->Name = L"lblText";
			this->lblText->Size = System::Drawing::Size(579, 156);
			this->lblText->TabIndex = 4;
			this->lblText->Text = resources->GetString(L"lblText.Text");
			// 
			// lblHeader
			// 
			this->lblHeader->AutoSize = true;
			this->lblHeader->BackColor = System::Drawing::Color::Transparent;
			this->lblHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHeader->ForeColor = System::Drawing::Color::Firebrick;
			this->lblHeader->Location = System::Drawing::Point(82, 198);
			this->lblHeader->Name = L"lblHeader";
			this->lblHeader->Size = System::Drawing::Size(80, 29);
			this->lblHeader->TabIndex = 3;
			this->lblHeader->Text = L"About";
			// 
			// bttnExit
			// 
			this->bttnExit->BackColor = System::Drawing::Color::Transparent;
			this->bttnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bttnExit->FlatAppearance->BorderSize = 0;
			this->bttnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnExit->ForeColor = System::Drawing::Color::Red;
			this->bttnExit->Location = System::Drawing::Point(710, 0);
			this->bttnExit->Name = L"bttnExit";
			this->bttnExit->Size = System::Drawing::Size(35, 35);
			this->bttnExit->TabIndex = 8;
			this->bttnExit->Text = L"X";
			this->bttnExit->UseVisualStyleBackColor = false;
			this->bttnExit->Click += gcnew System::EventHandler(this, &Dashboard::bttnExit_Click);
			// 
			// bttnMinimize
			// 
			this->bttnMinimize->BackColor = System::Drawing::Color::Transparent;
			this->bttnMinimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bttnMinimize->FlatAppearance->BorderSize = 0;
			this->bttnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttnMinimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnMinimize->ForeColor = System::Drawing::Color::Red;
			this->bttnMinimize->Location = System::Drawing::Point(669, 0);
			this->bttnMinimize->Name = L"bttnMinimize";
			this->bttnMinimize->Size = System::Drawing::Size(35, 35);
			this->bttnMinimize->TabIndex = 9;
			this->bttnMinimize->Text = L"—";
			this->bttnMinimize->UseVisualStyleBackColor = false;
			this->bttnMinimize->Click += gcnew System::EventHandler(this, &Dashboard::bttnMinimize_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->bttnMinimize);
			this->Controls->Add(this->bttnExit);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->lblText);
			this->Controls->Add(this->lblHeader);
			this->Name = L"Dashboard";
			this->Size = System::Drawing::Size(745, 544);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void bttnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result =
		System::Windows::Forms::MessageBox::Show(
			"Are you sure you want to exit?", // Message
			"Exit Application",              // Title
			System::Windows::Forms::MessageBoxButtons::YesNo,
			System::Windows::Forms::MessageBoxIcon::Question
		);

	// Check if the user clicked "Yes"
	if (result == System::Windows::Forms::DialogResult::Yes) {
		System::Windows::Forms::Application::Exit(); // Exit the application
	}
}
private: System::Void bttnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Form^ parentForm = this->FindForm(); // Get the parent form
	if (parentForm != nullptr) {
		parentForm->WindowState = System::Windows::Forms::FormWindowState::Minimized;
	}
}
};
}
