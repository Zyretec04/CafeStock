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
			this->label2->BackColor = System::Drawing::Color::Transparent;
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


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ DashExit;










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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DashExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Unispace", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Firebrick;
			this->label3->Location = System::Drawing::Point(245, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(249, 35);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Welcome User!";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Romantic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->label2->ForeColor = System::Drawing::Color::Firebrick;
			this->label2->Location = System::Drawing::Point(83, 252);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(579, 156);
			this->label2->TabIndex = 4;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->Click += gcnew System::EventHandler(this, &Dashboard::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Unispace", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Firebrick;
			this->label1->Location = System::Drawing::Point(82, 198);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"About";
			// 
			// DashExit
			// 
			this->DashExit->BackColor = System::Drawing::Color::Transparent;
			this->DashExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DashExit.BackgroundImage")));
			this->DashExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DashExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DashExit->Location = System::Drawing::Point(671, 27);
			this->DashExit->Name = L"DashExit";
			this->DashExit->Size = System::Drawing::Size(46, 48);
			this->DashExit->TabIndex = 8;
			this->DashExit->UseVisualStyleBackColor = false;
			this->DashExit->Click += gcnew System::EventHandler(this, &Dashboard::DashExit_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->DashExit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Dashboard";
			this->Size = System::Drawing::Size(745, 544);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void DashExit_Click(System::Object^ sender, System::EventArgs^ e) {
	// Show a confirmation dialog
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
};
}
