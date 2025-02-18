#pragma once
#include "MainLogin.h"

namespace CafeStock {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;	

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
	private: System::Void lblRegis_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ picBoxConfirmPass;

	private: System::Windows::Forms::TextBox^ txtConfirmPass;
	private: System::Windows::Forms::Label^ lblConfirmPass;


	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::PictureBox^ picBoxPassword;
	private: System::Windows::Forms::PictureBox^ picBoxUsername;



	private: System::Windows::Forms::Button^ bttnRegister;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtUsername;




	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::Label^ lblUsername;


	private: System::Windows::Forms::Label^ lblRegister;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ chkboxShowPass;
	private: System::Windows::Forms::CheckBox^ chkboxShowConPass;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



	private: System::Windows::Forms::PictureBox^ picBoxMCM;
	private: System::Windows::Forms::Button^ bttnMinimize;


	private: System::Windows::Forms::Button^ bttnExit;

	private: System::Windows::Forms::PictureBox^ picBoxLogo;
	private: System::Windows::Forms::Label^ lblTitle2;
	private: System::Windows::Forms::Label^ lblTitle1;










































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->picBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->lblTitle2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());

			this->chkboxShowConPass = (gcnew System::Windows::Forms::CheckBox());
			this->chkboxShowPass = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblRegis = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->passTxt = (gcnew System::Windows::Forms::TextBox());
			this->uNameTxt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());

			this->bttnMinimize = (gcnew System::Windows::Forms::Button());
			this->bttnExit = (gcnew System::Windows::Forms::Button());
			this->picBoxConfirmPass = (gcnew System::Windows::Forms::PictureBox());
			this->txtConfirmPass = (gcnew System::Windows::Forms::TextBox());
			this->lblConfirmPass = (gcnew System::Windows::Forms::Label());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->picBoxPassword = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxUsername = (gcnew System::Windows::Forms::PictureBox());
			this->bttnRegister = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblRegister = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->picBoxMCM = (gcnew System::Windows::Forms::PictureBox());
			this->lblTitle1 = (gcnew System::Windows::Forms::Label());

			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxLogo))->BeginInit();
			this->panel2->SuspendLayout();

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxConfirmPass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPassword))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxUsername))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMCM))->BeginInit();

			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->picBoxLogo);
			this->panel1->Controls->Add(this->lblTitle2);
			this->panel1->Controls->Add(this->panel2);


			this->panel1->Controls->Add(this->lblTitle1);

			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(975, 582);
			this->panel1->TabIndex = 2;
			// 
			// picBoxLogo
			// 
			this->picBoxLogo->BackColor = System::Drawing::Color::Transparent;
			this->picBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxLogo.Image")));
			this->picBoxLogo->Location = System::Drawing::Point(107, 134);
			this->picBoxLogo->Name = L"picBoxLogo";
			this->picBoxLogo->Size = System::Drawing::Size(231, 167);
			this->picBoxLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxLogo->TabIndex = 7;
			this->picBoxLogo->TabStop = false;
			// 
			// lblTitle2
			// 
			this->lblTitle2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle2->BackColor = System::Drawing::Color::Transparent;
			this->lblTitle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle2->ForeColor = System::Drawing::SystemColors::Control;
			this->lblTitle2->Location = System::Drawing::Point(0, 344);
			this->lblTitle2->Name = L"lblTitle2";
			this->lblTitle2->Size = System::Drawing::Size(448, 25);
			this->lblTitle2->TabIndex = 6;
			this->lblTitle2->Text = L"Inventory System";
			this->lblTitle2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

			this->panel2->Controls->Add(this->chkboxShowConPass);
			this->panel2->Controls->Add(this->chkboxShowPass);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->lblRegis);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->passTxt);
			this->panel2->Controls->Add(this->uNameTxt);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);

			this->panel2->Controls->Add(this->bttnMinimize);
			this->panel2->Controls->Add(this->bttnExit);
			this->panel2->Controls->Add(this->picBoxConfirmPass);
			this->panel2->Controls->Add(this->txtConfirmPass);
			this->panel2->Controls->Add(this->lblConfirmPass);
			this->panel2->Controls->Add(this->lblLogin);
			this->panel2->Controls->Add(this->picBoxPassword);
			this->panel2->Controls->Add(this->picBoxUsername);
			this->panel2->Controls->Add(this->bttnRegister);
			this->panel2->Controls->Add(this->txtPassword);
			this->panel2->Controls->Add(this->txtUsername);
			this->panel2->Controls->Add(this->lblPassword);
			this->panel2->Controls->Add(this->lblUsername);
			this->panel2->Controls->Add(this->lblRegister);

			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->picBoxMCM);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(451, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(524, 582);
			this->panel2->TabIndex = 3;
			// 

			// chkboxShowConPass
			// 
			this->chkboxShowConPass->AutoSize = true;
			this->chkboxShowConPass->BackColor = System::Drawing::Color::Transparent;
			this->chkboxShowConPass->Location = System::Drawing::Point(310, 439);
			this->chkboxShowConPass->Name = L"chkboxShowConPass";
			this->chkboxShowConPass->Size = System::Drawing::Size(101, 17);
			this->chkboxShowConPass->TabIndex = 15;
			this->chkboxShowConPass->Text = L"Show password";
			this->chkboxShowConPass->UseVisualStyleBackColor = false;
			this->chkboxShowConPass->CheckedChanged += gcnew System::EventHandler(this, &Register::chkboxShowConPass_CheckedChanged);
			// 
			// chkboxShowPass
			// 
			this->chkboxShowPass->AutoSize = true;
			this->chkboxShowPass->BackColor = System::Drawing::Color::Transparent;
			this->chkboxShowPass->Location = System::Drawing::Point(310, 364);
			this->chkboxShowPass->Name = L"chkboxShowPass";
			this->chkboxShowPass->Size = System::Drawing::Size(101, 17);
			this->chkboxShowPass->TabIndex = 14;
			this->chkboxShowPass->Text = L"Show password";
			this->chkboxShowPass->UseVisualStyleBackColor = false;
			this->chkboxShowPass->CheckedChanged += gcnew System::EventHandler(this, &Register::chkboxShowPass_CheckedChanged);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(61, 397);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(38, 39);
			this->pictureBox5->TabIndex = 13;
			this->pictureBox5->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(117, 407);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(294, 29);
			this->textBox1->TabIndex = 12;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(116, 378);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 21);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Confirm Password";
			// 
			// lblRegis
			// 
			this->lblRegis->AutoSize = true;
			this->lblRegis->BackColor = System::Drawing::Color::Transparent;
			this->lblRegis->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.5F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRegis->ForeColor = System::Drawing::Color::Firebrick;
			this->lblRegis->Location = System::Drawing::Point(176, 526);
			this->lblRegis->Name = L"lblRegis";
			this->lblRegis->Size = System::Drawing::Size(172, 19);
			this->lblRegis->TabIndex = 10;
			this->lblRegis->Text = L"Already Have an Account\?";
			this->lblRegis->Click += gcnew System::EventHandler(this, &Register::lblRegis_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(61, 322);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(38, 39);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(61, 247);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(38, 39);
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(465, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(46, 48);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Register::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),

			// bttnMinimize
			// 
			this->bttnMinimize->BackColor = System::Drawing::Color::Transparent;
			this->bttnMinimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bttnMinimize->FlatAppearance->BorderSize = 0;
			this->bttnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttnMinimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnMinimize->ForeColor = System::Drawing::Color::Red;
			this->bttnMinimize->Location = System::Drawing::Point(448, 0);
			this->bttnMinimize->Name = L"bttnMinimize";
			this->bttnMinimize->Size = System::Drawing::Size(35, 35);
			this->bttnMinimize->TabIndex = 15;
			this->bttnMinimize->Text = L"";
			this->bttnMinimize->UseVisualStyleBackColor = false;
			this->bttnMinimize->Click += gcnew System::EventHandler(this, &Register::bttnMinimize_Click);
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
			this->bttnExit->Location = System::Drawing::Point(489, 0);
			this->bttnExit->Name = L"bttnExit";
			this->bttnExit->Size = System::Drawing::Size(35, 35);
			this->bttnExit->TabIndex = 14;
			this->bttnExit->Text = L"X";
			this->bttnExit->UseVisualStyleBackColor = false;
			this->bttnExit->Click += gcnew System::EventHandler(this, &Register::bttnExit_Click);
			// 
			// picBoxConfirmPass
			// 
			this->picBoxConfirmPass->BackColor = System::Drawing::Color::Transparent;
			this->picBoxConfirmPass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxConfirmPass.Image")));
			this->picBoxConfirmPass->Location = System::Drawing::Point(59, 402);
			this->picBoxConfirmPass->Name = L"picBoxConfirmPass";
			this->picBoxConfirmPass->Size = System::Drawing::Size(39, 39);
			this->picBoxConfirmPass->TabIndex = 13;
			this->picBoxConfirmPass->TabStop = false;
			// 
			// txtConfirmPass
			// 
			this->txtConfirmPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtConfirmPass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConfirmPass->Location = System::Drawing::Point(111, 409);
			this->txtConfirmPass->Multiline = true;
			this->txtConfirmPass->Name = L"txtConfirmPass";
			this->txtConfirmPass->PasswordChar = '*';
			this->txtConfirmPass->Size = System::Drawing::Size(294, 32);
			this->txtConfirmPass->TabIndex = 12;
			// 
			// lblConfirmPass
			// 
			this->lblConfirmPass->AutoSize = true;
			this->lblConfirmPass->BackColor = System::Drawing::Color::Transparent;
			this->lblConfirmPass->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblConfirmPass->Location = System::Drawing::Point(110, 380);
			this->lblConfirmPass->Name = L"lblConfirmPass";
			this->lblConfirmPass->Size = System::Drawing::Size(152, 21);
			this->lblConfirmPass->TabIndex = 11;
			this->lblConfirmPass->Text = L"Confirm Password";
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->BackColor = System::Drawing::Color::Transparent;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblLogin->ForeColor = System::Drawing::Color::Firebrick;
			this->lblLogin->Location = System::Drawing::Point(159, 528);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(191, 20);
			this->lblLogin->TabIndex = 10;
			this->lblLogin->Text = L"Already Have an Account\?";
			this->lblLogin->Click += gcnew System::EventHandler(this, &Register::lblRegis_Click);
			// 
			// picBoxPassword
			// 
			this->picBoxPassword->BackColor = System::Drawing::Color::Transparent;
			this->picBoxPassword->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxPassword.Image")));
			this->picBoxPassword->Location = System::Drawing::Point(59, 327);
			this->picBoxPassword->Name = L"picBoxPassword";
			this->picBoxPassword->Size = System::Drawing::Size(39, 39);
			this->picBoxPassword->TabIndex = 9;
			this->picBoxPassword->TabStop = false;
			// 
			// picBoxUsername
			// 
			this->picBoxUsername->BackColor = System::Drawing::Color::Transparent;
			this->picBoxUsername->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxUsername.Image")));
			this->picBoxUsername->Location = System::Drawing::Point(59, 252);
			this->picBoxUsername->Name = L"picBoxUsername";
			this->picBoxUsername->Size = System::Drawing::Size(39, 39);
			this->picBoxUsername->TabIndex = 8;
			this->picBoxUsername->TabStop = false;
			// 
			// bttnRegister
			// 
			this->bttnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),

				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bttnRegister->FlatAppearance->BorderSize = 0;
			this->bttnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttnRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(162, 462);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 45);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// passTxt
			// 
			this->passTxt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->passTxt->Location = System::Drawing::Point(117, 332);
			this->passTxt->Name = L"passTxt";
			this->passTxt->Size = System::Drawing::Size(294, 29);
			this->passTxt->TabIndex = 5;
			this->passTxt->UseSystemPasswordChar = true;
			// 
			// uNameTxt
			// 
			this->uNameTxt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->uNameTxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->uNameTxt->Location = System::Drawing::Point(117, 257);
			this->uNameTxt->Name = L"uNameTxt";
			this->uNameTxt->Size = System::Drawing::Size(294, 29);
			this->uNameTxt->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(116, 307);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 21);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(114, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 21);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Username";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(107, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 21);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Register";

			this->bttnRegister->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bttnRegister->Location = System::Drawing::Point(152, 468);
			this->bttnRegister->Name = L"bttnRegister";
			this->bttnRegister->Size = System::Drawing::Size(207, 48);
			this->bttnRegister->TabIndex = 6;
			this->bttnRegister->Text = L"Register";
			this->bttnRegister->UseVisualStyleBackColor = false;
			this->bttnRegister->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(111, 334);
			this->txtPassword->Multiline = true;
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(294, 32);
			this->txtPassword->TabIndex = 5;
			// 
			// txtUsername
			// 
			this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(111, 259);
			this->txtUsername->Multiline = true;
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(294, 32);
			this->txtUsername->TabIndex = 4;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->BackColor = System::Drawing::Color::Transparent;
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPassword->Location = System::Drawing::Point(110, 305);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(85, 21);
			this->lblPassword->TabIndex = 3;
			this->lblPassword->Text = L"Password";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->BackColor = System::Drawing::Color::Transparent;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->Location = System::Drawing::Point(108, 231);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(87, 21);
			this->lblUsername->TabIndex = 2;
			this->lblUsername->Text = L"Username";
			// 
			// lblRegister
			// 
			this->lblRegister->AutoSize = true;
			this->lblRegister->BackColor = System::Drawing::Color::Transparent;
			this->lblRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRegister->Location = System::Drawing::Point(107, 196);
			this->lblRegister->Name = L"lblRegister";
			this->lblRegister->Size = System::Drawing::Size(69, 21);
			this->lblRegister->TabIndex = 1;
			this->lblRegister->Text = L"Register";

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
			// 
			// picBoxMCM
			// 
			this->picBoxMCM->BackColor = System::Drawing::Color::Transparent;
			this->picBoxMCM->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picBoxMCM->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picBoxMCM.Image")));
			this->picBoxMCM->Location = System::Drawing::Point(183, 39);
			this->picBoxMCM->Name = L"picBoxMCM";
			this->picBoxMCM->Size = System::Drawing::Size(150, 137);
			this->picBoxMCM->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxMCM->TabIndex = 0;
			this->picBoxMCM->TabStop = false;
			// 

			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(187, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 137);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;

			// lblTitle1
			// 
			this->lblTitle1->BackColor = System::Drawing::Color::Transparent;
			this->lblTitle1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle1->ForeColor = System::Drawing::SystemColors::Control;
			this->lblTitle1->Location = System::Drawing::Point(0, 305);
			this->lblTitle1->Name = L"lblTitle1";
			this->lblTitle1->Size = System::Drawing::Size(448, 31);
			this->lblTitle1->TabIndex = 5;
			this->lblTitle1->Text = L"CafeStock";
			this->lblTitle1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Location = System::Drawing::Point(60, 69);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(330, 422);
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 582);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->panel1->ResumeLayout(false);

			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxLogo))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxConfirmPass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPassword))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxUsername))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMCM))->EndInit();

			this->ResumeLayout(false);

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

private: System::Void chkboxShowPass_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chkboxShowPass->Checked) {
		passTxt->UseSystemPasswordChar = false;
	}
	else {
		passTxt->UseSystemPasswordChar = true;
	}
}
private: System::Void chkboxShowConPass_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chkboxShowConPass->Checked) {
		textBox1->UseSystemPasswordChar = false;
	}
	else {
		textBox1->UseSystemPasswordChar = true;
	}

private: System::Void bttnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;

}
};
}
