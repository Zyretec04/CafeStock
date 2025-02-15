#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(65, 109);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(609, 390);
			this->dataGridView1->TabIndex = 5;
			// 
			// HistoryExit
			// 
			this->HistoryExit->BackColor = System::Drawing::Color::Transparent;
			this->HistoryExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HistoryExit.BackgroundImage")));
			this->HistoryExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HistoryExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HistoryExit->Location = System::Drawing::Point(676, 22);
			this->HistoryExit->Name = L"HistoryExit";
			this->HistoryExit->Size = System::Drawing::Size(46, 48);
			this->HistoryExit->TabIndex = 8;
			this->HistoryExit->UseVisualStyleBackColor = false;
			this->HistoryExit->Click += gcnew System::EventHandler(this, &HistoryControll::HistoryExit_Click);
			// 
			// HistoryControll
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->HistoryExit);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"HistoryControll";
			this->Size = System::Drawing::Size(745, 544);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

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
};
}
