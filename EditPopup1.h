#pragma once
ref class Menumain;
namespace CafeStock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditPopup1
	/// </summary>
	public ref class EditPopup1 : public System::Windows::Forms::Form
	{
	public:
		EditPopup1(void)
		{
			InitializeComponent();
			// Populate the ComboBox with predefined item types
			editCombo->Items->Add("Utensils");
			editCombo->Items->Add("Meat");
			editCombo->Items->Add("Drink");

			// Set default selection (optional)
			editCombo->SelectedIndex = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditPopup1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e);


	protected:
	private: System::Windows::Forms::TextBox^ txtQuant;
	private: DataTable^ dataTable;
	private: System::Windows::Forms::Label^ lblQuant;
	private: System::Windows::Forms::TextBox^ txtItemName;
	private: System::Windows::Forms::ComboBox^ editCombo;
	private: System::Windows::Forms::Label^ lblType;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void editCombo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditPopup1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtQuant = (gcnew System::Windows::Forms::TextBox());
			this->lblQuant = (gcnew System::Windows::Forms::Label());
			this->txtItemName = (gcnew System::Windows::Forms::TextBox());
			this->editCombo = (gcnew System::Windows::Forms::ComboBox());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->txtQuant);
			this->panel1->Controls->Add(this->lblQuant);
			this->panel1->Controls->Add(this->txtItemName);
			this->panel1->Controls->Add(this->editCombo);
			this->panel1->Controls->Add(this->lblType);
			this->panel1->Controls->Add(this->lblName);
			this->panel1->Controls->Add(this->btnAdd);
			this->panel1->Location = System::Drawing::Point(175, 97);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(613, 418);
			this->panel1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(233, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 31);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Add Item";
			// 
			// txtQuant
			// 
			this->txtQuant->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtQuant->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtQuant->Location = System::Drawing::Point(167, 223);
			this->txtQuant->Multiline = true;
			this->txtQuant->Name = L"txtQuant";
			this->txtQuant->Size = System::Drawing::Size(294, 32);
			this->txtQuant->TabIndex = 14;
			// 
			// lblQuant
			// 
			this->lblQuant->AutoSize = true;
			this->lblQuant->BackColor = System::Drawing::Color::Transparent;
			this->lblQuant->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuant->Location = System::Drawing::Point(63, 223);
			this->lblQuant->Name = L"lblQuant";
			this->lblQuant->Size = System::Drawing::Size(77, 21);
			this->lblQuant->TabIndex = 13;
			this->lblQuant->Text = L"Quantity:";
			// 
			// txtItemName
			// 
			this->txtItemName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtItemName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtItemName->Location = System::Drawing::Point(167, 126);
			this->txtItemName->Multiline = true;
			this->txtItemName->Name = L"txtItemName";
			this->txtItemName->Size = System::Drawing::Size(294, 32);
			this->txtItemName->TabIndex = 12;
			// 
			// editCombo
			// 
			this->editCombo->FormattingEnabled = true;
			this->editCombo->Location = System::Drawing::Point(167, 188);
			this->editCombo->Name = L"editCombo";
			this->editCombo->Size = System::Drawing::Size(294, 21);
			this->editCombo->TabIndex = 11;
			this->editCombo->SelectedIndexChanged += gcnew System::EventHandler(this, &EditPopup1::editCombo_SelectedIndexChanged);
			// 
			// lblType
			// 
			this->lblType->AutoSize = true;
			this->lblType->BackColor = System::Drawing::Color::Transparent;
			this->lblType->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblType->Location = System::Drawing::Point(63, 181);
			this->lblType->Name = L"lblType";
			this->lblType->Size = System::Drawing::Size(90, 21);
			this->lblType->TabIndex = 10;
			this->lblType->Text = L"Item Type:";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->BackColor = System::Drawing::Color::Transparent;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(63, 126);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(98, 21);
			this->lblName->TabIndex = 9;
			this->lblName->Text = L"Item Name:";
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnAdd->Location = System::Drawing::Point(239, 300);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(110, 47);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &EditPopup1::btnAdd_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Transparent;
			this->btnBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.BackgroundImage")));
			this->btnBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->ForeColor = System::Drawing::Color::Transparent;
			this->btnBack->Location = System::Drawing::Point(904, 12);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(46, 48);
			this->btnBack->TabIndex = 11;
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &EditPopup1::btnBack_Click);
			// 
			// EditPopup1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(962, 544);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnBack);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EditPopup1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditPopup1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion-
};
}
