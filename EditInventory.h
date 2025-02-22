#pragma once
#include "InventoryMenu.h"
namespace CafeStock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditInventory
	/// </summary>
	public ref class EditInventory : public System::Windows::Forms::Form
	{
	private:
		int itemID;
		int GetItemID(String^ itemName);
		void LoadItemDetails();

	public:
		EditInventory(int passedItemID)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//cmbType->Items->AddRange(gcnew cli::array<String^> { "Utensils", "Meat", "Drink", "Food"});
			//this->itemID = passedItemID;

			//// Store Item_ID for update query
			//// his->itemID = itemID;
			////this->itemID = itemID;
			//txtItemName->Text = itemName;
			//cmbType->Text = itemType;
			//txtQuantity->Text = itemQuantity;

			//LoadItemDetails();
			cmbType->Items->AddRange(gcnew cli::array<String^> { "Utensils", "Meat", "Drink", "Food" });
			this->itemID = passedItemID;
			LoadItemDetails();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditInventory()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtQuantity;

	private: System::Windows::Forms::Label^ lblQuant;
	private: System::Windows::Forms::TextBox^ txtItemName;
	private: System::Windows::Forms::ComboBox^ cmbType;

	private: System::Windows::Forms::Label^ lblType;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnBack;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditInventory::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtQuantity = (gcnew System::Windows::Forms::TextBox());
			this->lblQuant = (gcnew System::Windows::Forms::Label());
			this->txtItemName = (gcnew System::Windows::Forms::TextBox());
			this->cmbType = (gcnew System::Windows::Forms::ComboBox());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
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
			this->label1->Size = System::Drawing::Size(147, 40);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Edit Item";
			// 
			// txtQuantity
			// 
			this->txtQuantity->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtQuantity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txtQuantity->Location = System::Drawing::Point(91, 334);
			this->txtQuantity->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtQuantity->Name = L"txtQuantity";
			this->txtQuantity->Size = System::Drawing::Size(119, 29);
			this->txtQuantity->TabIndex = 14;
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
			// cmbType
			// 
			this->cmbType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbType->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmbType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->cmbType->FormattingEnabled = true;
			this->cmbType->Location = System::Drawing::Point(91, 261);
			this->cmbType->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cmbType->Name = L"cmbType";
			this->cmbType->Size = System::Drawing::Size(285, 24);
			this->cmbType->TabIndex = 11;
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
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSave->Location = System::Drawing::Point(177, 404);
			this->btnSave->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(107, 43);
			this->btnSave->TabIndex = 8;
			this->btnSave->Text = L"SAVE";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &EditInventory::btnSave_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Transparent;
			this->btnBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.BackgroundImage")));
			this->btnBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->ForeColor = System::Drawing::Color::Transparent;
			this->btnBack->Location = System::Drawing::Point(16, 15);
			this->btnBack->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(40, 40);
			this->btnBack->TabIndex = 16;
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &EditInventory::btnBack_Click);
			// 
			// EditInventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(461, 532);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtQuantity);
			this->Controls->Add(this->lblQuant);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->txtItemName);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->cmbType);
			this->Controls->Add(this->lblType);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"EditInventory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditInventory";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e);
};
}
