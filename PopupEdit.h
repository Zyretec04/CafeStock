#pragma once

namespace CafeStock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PopupEdit
	/// </summary>
	public ref class PopupEdit : public System::Windows::Forms::Form
	{
	public:
		PopupEdit(void)
		{
			InitializeComponent();

			// Populate the ComboBox with predefined values
			this->editCombo->Items->Add("Utensils");
			this->editCombo->Items->Add("Meat");
			this->editCombo->Items->Add("Drink");

			// Set default selection (optional)
			this->editCombo->SelectedIndex = 0;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PopupEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ PopupBack;
	private: System::Windows::Forms::Button^ bttnMinimize;
	private: System::Windows::Forms::Button^ bttnExit;
	private: System::Windows::Forms::Label^ label1;

	protected:
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Void PopupBack_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void editCombo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	protected:
	private: System::Windows::Forms::TextBox^ txtQuant;
	private: System::Windows::Forms::Label^ lblQuant;
	private: System::Windows::Forms::TextBox^ txtItemName;
	private: System::Windows::Forms::ComboBox^ editCombo;
	private: System::Windows::Forms::Label^ lblType;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Button^ btnAdd;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PopupEdit::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtQuant = (gcnew System::Windows::Forms::TextBox());
			this->lblQuant = (gcnew System::Windows::Forms::Label());
			this->txtItemName = (gcnew System::Windows::Forms::TextBox());
			this->editCombo = (gcnew System::Windows::Forms::ComboBox());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->PopupBack = (gcnew System::Windows::Forms::Button());
			this->bttnMinimize = (gcnew System::Windows::Forms::Button());
			this->bttnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(157, 82);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 40);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Add Item";
			// 
			// txtQuant
			// 
			this->txtQuant->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtQuant->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txtQuant->Location = System::Drawing::Point(91, 334);
			this->txtQuant->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtQuant->Name = L"txtQuant";
			this->txtQuant->Size = System::Drawing::Size(119, 29);
			this->txtQuant->TabIndex = 14;
			// 
			// lblQuant
			// 
			this->lblQuant->AutoSize = true;
			this->lblQuant->BackColor = System::Drawing::Color::Transparent;
			this->lblQuant->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuant->Location = System::Drawing::Point(85, 305);
			this->lblQuant->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblQuant->Name = L"lblQuant";
			this->lblQuant->Size = System::Drawing::Size(72, 42);
			this->lblQuant->TabIndex = 13;
			this->lblQuant->Text = L"Quantity\r\n\r\n";
			// 
			// txtItemName
			// 
			this->txtItemName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtItemName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txtItemName->Location = System::Drawing::Point(91, 182);
			this->txtItemName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtItemName->Name = L"txtItemName";
			this->txtItemName->Size = System::Drawing::Size(285, 29);
			this->txtItemName->TabIndex = 12;
			// 
			// editCombo
			// 
			this->editCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->editCombo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->editCombo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->editCombo->FormattingEnabled = true;
			this->editCombo->Location = System::Drawing::Point(91, 261);
			this->editCombo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->editCombo->Name = L"editCombo";
			this->editCombo->Size = System::Drawing::Size(285, 24);
			this->editCombo->TabIndex = 11;
			// 
			// lblType
			// 
			this->lblType->AutoSize = true;
			this->lblType->BackColor = System::Drawing::Color::Transparent;
			this->lblType->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblType->Location = System::Drawing::Point(87, 231);
			this->lblType->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblType->Name = L"lblType";
			this->lblType->Size = System::Drawing::Size(85, 42);
			this->lblType->TabIndex = 10;
			this->lblType->Text = L"Item Type\r\n\r\n";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->BackColor = System::Drawing::Color::Transparent;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(85, 153);
			this->lblName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(93, 21);
			this->lblName->TabIndex = 9;
			this->lblName->Text = L"Item Name";
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnAdd->Location = System::Drawing::Point(177, 404);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(107, 43);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"ADD";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &PopupEdit::btnAdd_Click);
			// 
			// PopupBack
			// 
			this->PopupBack->BackColor = System::Drawing::Color::Transparent;
			this->PopupBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PopupBack.BackgroundImage")));
			this->PopupBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PopupBack->FlatAppearance->BorderSize = 0;
			this->PopupBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PopupBack->ForeColor = System::Drawing::Color::Black;
			this->PopupBack->Location = System::Drawing::Point(16, 15);
			this->PopupBack->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->PopupBack->Name = L"PopupBack";
			this->PopupBack->Size = System::Drawing::Size(40, 40);
			this->PopupBack->TabIndex = 11;
			this->PopupBack->UseVisualStyleBackColor = false;
			this->PopupBack->Click += gcnew System::EventHandler(this, &PopupEdit::PopupBack_Click);
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
			this->bttnMinimize->Location = System::Drawing::Point(1181, 0);
			this->bttnMinimize->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bttnMinimize->Name = L"bttnMinimize";
			this->bttnMinimize->Size = System::Drawing::Size(47, 43);
			this->bttnMinimize->TabIndex = 17;
			this->bttnMinimize->Text = L"—";
			this->bttnMinimize->UseVisualStyleBackColor = false;
			this->bttnMinimize->Click += gcnew System::EventHandler(this, &PopupEdit::bttnMinimize_Click);
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
			this->bttnExit->Location = System::Drawing::Point(1236, 0);
			this->bttnExit->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bttnExit->Name = L"bttnExit";
			this->bttnExit->Size = System::Drawing::Size(47, 43);
			this->bttnExit->TabIndex = 16;
			this->bttnExit->Text = L"X";
			this->bttnExit->UseVisualStyleBackColor = false;
			this->bttnExit->Click += gcnew System::EventHandler(this, &PopupEdit::bttnExit_Click);
			// 
			// PopupEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(461, 532);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtQuant);
			this->Controls->Add(this->bttnMinimize);
			this->Controls->Add(this->lblQuant);
			this->Controls->Add(this->bttnExit);
			this->Controls->Add(this->txtItemName);
			this->Controls->Add(this->editCombo);
			this->Controls->Add(this->PopupBack);
			this->Controls->Add(this->lblType);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->lblName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"PopupEdit";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PopupEdit";
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
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
};
}
