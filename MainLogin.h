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
	/// Summary for MainLogin
	/// </summary>
	public ref class MainLogin : public System::Windows::Forms::Form
	{
	public:
		MainLogin(void)
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
		~MainLogin()
		{
			if (components)
			{
				if (components) delete components;
			}
		}

	protected:
	private: System::Void bttnLogin_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e);



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ bttnLogin;


	private: System::Windows::Forms::TextBox^ passTxt;
	private: System::Windows::Forms::TextBox^ uNameTxt;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ BttnMinimize;
	private: System::Windows::Forms::Button^ BttnExit;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::CheckBox^ chkboxShowPass;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainLogin::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->chkboxShowPass = (gcnew System::Windows::Forms::CheckBox());
			this->BttnMinimize = (gcnew System::Windows::Forms::Button());
			this->BttnExit = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->bttnLogin = (gcnew System::Windows::Forms::Button());
			this->passTxt = (gcnew System::Windows::Forms::TextBox());
			this->uNameTxt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(975, 582);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox5->Location = System::Drawing::Point(60, 69);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(330, 422);
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->chkboxShowPass);
			this->panel2->Controls->Add(this->BttnMinimize);
			this->panel2->Controls->Add(this->BttnExit);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->bttnLogin);
			this->panel2->Controls->Add(this->passTxt);
			this->panel2->Controls->Add(this->uNameTxt);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(451, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(524, 582);
			this->panel2->TabIndex = 3;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainLogin::panel2_Paint_1);
			// 
			// chkboxShowPass
			// 
			this->chkboxShowPass->AutoSize = true;
			this->chkboxShowPass->BackColor = System::Drawing::Color::Transparent;
			this->chkboxShowPass->Location = System::Drawing::Point(310, 387);
			this->chkboxShowPass->Name = L"chkboxShowPass";
			this->chkboxShowPass->Size = System::Drawing::Size(101, 17);
			this->chkboxShowPass->TabIndex = 13;
			this->chkboxShowPass->Text = L"Show password";
			this->chkboxShowPass->UseVisualStyleBackColor = false;
			this->chkboxShowPass->CheckedChanged += gcnew System::EventHandler(this, &MainLogin::chkboxShowPass_CheckedChanged);
			// 
			// BttnMinimize
			// 
			this->BttnMinimize->BackColor = System::Drawing::Color::Transparent;
			this->BttnMinimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BttnMinimize->FlatAppearance->BorderSize = 0;
			this->BttnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BttnMinimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BttnMinimize->ForeColor = System::Drawing::Color::Red;
			this->BttnMinimize->Location = System::Drawing::Point(448, 0);
			this->BttnMinimize->Name = L"BttnMinimize";
			this->BttnMinimize->Size = System::Drawing::Size(35, 35);
			this->BttnMinimize->TabIndex = 12;
			this->BttnMinimize->Text = L"—";
			this->BttnMinimize->UseVisualStyleBackColor = false;
			this->BttnMinimize->Click += gcnew System::EventHandler(this, &MainLogin::BttnMinimize_Click);
			// 
			// BttnExit
			// 
			this->BttnExit->BackColor = System::Drawing::Color::Transparent;
			this->BttnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BttnExit->FlatAppearance->BorderSize = 0;
			this->BttnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BttnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BttnExit->ForeColor = System::Drawing::Color::Red;
			this->BttnExit->Location = System::Drawing::Point(489, 0);
			this->BttnExit->Name = L"BttnExit";
			this->BttnExit->Size = System::Drawing::Size(35, 35);
			this->BttnExit->TabIndex = 11;
			this->BttnExit->Text = L"X";
			this->BttnExit->UseVisualStyleBackColor = false;
			this->BttnExit->Click += gcnew System::EventHandler(this, &MainLogin::BttnExit_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.5F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Firebrick;
			this->label7->Location = System::Drawing::Point(186, 501);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 19);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Dont have an account\?";
			this->label7->Click += gcnew System::EventHandler(this, &MainLogin::label7_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(61, 345);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(38, 39);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(61, 266);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(38, 39);
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// bttnLogin
			// 
			this->bttnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bttnLogin->FlatAppearance->BorderSize = 0;
			this->bttnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttnLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnLogin->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bttnLogin->Location = System::Drawing::Point(162, 435);
			this->bttnLogin->Name = L"bttnLogin";
			this->bttnLogin->Size = System::Drawing::Size(200, 45);
			this->bttnLogin->TabIndex = 6;
			this->bttnLogin->Text = L"Login";
			this->bttnLogin->UseVisualStyleBackColor = false;
			this->bttnLogin->Click += gcnew System::EventHandler(this, &MainLogin::bttnLogin_Click);
			// 
			// passTxt
			// 
			this->passTxt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->passTxt->Location = System::Drawing::Point(117, 355);
			this->passTxt->Name = L"passTxt";
			this->passTxt->Size = System::Drawing::Size(294, 29);
			this->passTxt->TabIndex = 5;
			this->passTxt->UseSystemPasswordChar = true;
			this->passTxt->TextChanged += gcnew System::EventHandler(this, &MainLogin::passTxt_TextChanged);
			// 
			// uNameTxt
			// 
			this->uNameTxt->AccessibleName = L"";
			this->uNameTxt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uNameTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->uNameTxt->Location = System::Drawing::Point(117, 276);
			this->uNameTxt->Name = L"uNameTxt";
			this->uNameTxt->Size = System::Drawing::Size(294, 29);
			this->uNameTxt->TabIndex = 4;
			this->uNameTxt->TextChanged += gcnew System::EventHandler(this, &MainLogin::uNameTxt_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(116, 330);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 21);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Password";
			this->label6->Click += gcnew System::EventHandler(this, &MainLogin::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(114, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 21);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Username";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(69, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 24);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Administrator";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-390, 227);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(362, 39);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Login";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MainLogin::label3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(187, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 137);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MainLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 582);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"MainLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainLogin";
			this->Load += gcnew System::EventHandler(this, &MainLogin::MainLogin_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainLogin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void uNameTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void passTxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BttnExit_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void BttnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void chkboxShowPass_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chkboxShowPass->Checked) {
		passTxt->UseSystemPasswordChar = false; 
	}
	else {
		passTxt->UseSystemPasswordChar = true;  
	}
}
};
}
