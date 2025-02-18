#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

namespace CafeStock {

	public ref class InventoryMenu : public System::Windows::Forms::UserControl
	{
	public:
		InventoryMenu(void)
		{
			InitializeComponent();
			LoadDataFromDatabase();
		}

	protected:
		~InventoryMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ InventExit;
	private: DataTable^ dataTable;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InventoryMenu::typeid));
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->InventExit = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(23)));
			   this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			   this->button2->Location = System::Drawing::Point(848, 96);
			   this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(55, 44);
			   this->button2->TabIndex = 7;
			   this->button2->UseVisualStyleBackColor = false;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(23)));
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			   this->button1->Location = System::Drawing::Point(753, 96);
			   this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(61, 44);
			   this->button1->TabIndex = 6;
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &InventoryMenu::button1_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(91, 107);
			   this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(631, 22);
			   this->textBox1->TabIndex = 5;
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &InventoryMenu::textBox1_TextChanged);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToAddRows = false;
			   this->dataGridView1->AllowUserToDeleteRows = false;
			   this->dataGridView1->AllowUserToResizeColumns = false;
			   this->dataGridView1->AllowUserToResizeRows = false;
			   this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(91, 166);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersVisible = false;
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			   this->dataGridView1->Size = System::Drawing::Size(812, 480);
			   this->dataGridView1->TabIndex = 4;
			   this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InventoryMenu::dataGridView1_CellContentClick);
			   // 
			   // InventExit
			   // 
			   this->InventExit->BackColor = System::Drawing::Color::Transparent;
			   this->InventExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"InventExit.BackgroundImage")));
			   this->InventExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->InventExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->InventExit->Location = System::Drawing::Point(913, 20);
			   this->InventExit->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->InventExit->Name = L"InventExit";
			   this->InventExit->Size = System::Drawing::Size(61, 59);
			   this->InventExit->TabIndex = 8;
			   this->InventExit->UseVisualStyleBackColor = false;
			   this->InventExit->Click += gcnew System::EventHandler(this, &InventoryMenu::InventExit_Click);
			   // 
			   // InventoryMenu
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Controls->Add(this->InventExit);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->dataGridView1);
			   this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			   this->Name = L"InventoryMenu";
			   this->Size = System::Drawing::Size(993, 670);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void InventExit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("Are you sure you want to exit?", "Exit Application", System::Windows::Forms::MessageBoxButtons::YesNo, System::Windows::Forms::MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			System::Windows::Forms::Application::Exit();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = textBox1->Text;
		for each (DataGridViewRow ^ row in dataGridView1->Rows) {
			if (!row->IsNewRow) {
				if (row->Cells["Item_Name"]->Value != nullptr && row->Cells["Item_Name"]->Value->ToString()->IndexOf(searchText, StringComparison::InvariantCultureIgnoreCase) >= 0) {
					row->Visible = true;
				}
				else {
					row->Visible = false;
				}
			}
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = textBox1->Text;
		if (dataTable == nullptr) return;
		if (String::IsNullOrEmpty(searchText)) {
			dataTable->DefaultView->RowFilter = "";
		}
		else {
			dataTable->DefaultView->RowFilter = String::Format("Item_Name LIKE '%{0}%'", searchText->Replace("'", "''"));
		}
	}
	private:
		void LoadDataFromDatabase() {
			String^ connectionString = "Data Source=AlainsComputer\\SQLEXPRESS;Initial Catalog=dboInventory;User ID=sa;Password=alain121004;Integrated Security=False";
			String^ query = "SELECT * FROM tblItems";
			try {
				SqlConnection^ con = gcnew SqlConnection(connectionString);
				con->Open();
				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, con);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				dataTable = dt;
				dataGridView1->DataSource = dataTable->DefaultView;
				con->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading data: " + ex->Message);
			}
		};
	};
}