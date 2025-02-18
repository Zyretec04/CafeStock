#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

namespace CafeStock {

	/// <summary>
	/// Summary for HistoryControll
	/// </summary>
	public ref class HistoryControll : public System::Windows::Forms::UserControl
	{
	public:
		HistoryControll(void)
		{
			InitializeComponent();
			LoadDataFromDatabase();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HistoryControll()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ HistoryExit;
	private: DataTable^ dataTable;		
	private: System::Windows::Forms::TextBox^ txtSearch;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	protected:

	protected:





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HistoryControll::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->HistoryExit = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(90, 130);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(812, 480);
			this->dataGridView1->TabIndex = 5;
			// 
			// HistoryExit
			// 
			this->HistoryExit->BackColor = System::Drawing::Color::Transparent;
			this->HistoryExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HistoryExit.BackgroundImage")));
			this->HistoryExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HistoryExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HistoryExit->Location = System::Drawing::Point(928, 4);
			this->HistoryExit->Margin = System::Windows::Forms::Padding(4);
			this->HistoryExit->Name = L"HistoryExit";
			this->HistoryExit->Size = System::Drawing::Size(61, 59);
			this->HistoryExit->TabIndex = 8;
			this->HistoryExit->UseVisualStyleBackColor = false;
			this->HistoryExit->Click += gcnew System::EventHandler(this, &HistoryControll::HistoryExit_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(151, 71);
			this->txtSearch->Margin = System::Windows::Forms::Padding(4);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(751, 22);
			this->txtSearch->TabIndex = 9;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &HistoryControll::txtSearch_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(90, 61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(54, 44);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// HistoryControll
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->HistoryExit);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"HistoryControll";
			this->Size = System::Drawing::Size(993, 670);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HistoryExit_Click(System::Object^ sender, System::EventArgs^ e) {
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

	private:
		void LoadDataFromDatabase() {
			String^ connectionString = "Data Source=DESKTOP-7R4GRV2\\SQLEXPRESS;Initial Catalog=dboInventory;User ID=sa;Password=12345";
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
private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ searchText = txtSearch->Text;
	if (dataTable == nullptr) return;
	if (String::IsNullOrEmpty(searchText)) {
		dataTable->DefaultView->RowFilter = "";
	}
	else {
		dataTable->DefaultView->RowFilter = String::Format("Item_Name LIKE '%{0}%'", searchText->Replace("'", "''"));
	}
}
};
}
