#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		// Clock Code
			DateTime time = DateTime::Now;
			this->Time1->Text = time.TimeOfDay.ToString();
			this->Time2->Text = time.TimeOfDay.ToString();
			this->Time3->Text = time.TimeOfDay.ToString();
			this->Time4->Text = time.TimeOfDay.ToString();
			this->Time5->Text = time.TimeOfDay.ToString();
			this->Time6->Text = time.TimeOfDay.ToString();
			this->Time8->Text = time.TimeOfDay.ToString();
			this->Time9->Text = time.TimeOfDay.ToString();
			this->Time10->Text = time.TimeOfDay.ToString();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  Main;













	private: System::Windows::Forms::Label^  Time1;

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Panel^  AccountCreation;
	private: System::Windows::Forms::Label^  Time2;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  EmergancyContact;



	private: System::Windows::Forms::Label^  Time3;

	private: System::Windows::Forms::PictureBox^  pictureBox2;



	private: System::Windows::Forms::TextBox^  PhoneInput;

	private: System::Windows::Forms::TextBox^  EmailInput;

	private: System::Windows::Forms::Label^  comfpasswordlabel;
	private: System::Windows::Forms::Label^  passwordlabel;
	private: System::Windows::Forms::Label^  homelabel;
	private: System::Windows::Forms::Label^  phonelabel;
	private: System::Windows::Forms::Label^  emaillabel;
	private: System::Windows::Forms::Label^  namelabel;
	private: System::Windows::Forms::TextBox^  NameInput;
	private: System::Windows::Forms::Label^  accounttitle;
	private: System::Windows::Forms::RichTextBox^  AddressInput;
	private: System::Windows::Forms::TextBox^  ComPasswordInput;


	private: System::Windows::Forms::TextBox^  PasswordInput;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  EmergancyTitle;
	private: System::Windows::Forms::Label^  conactphonelabel;

	private: System::Windows::Forms::Label^  contactnamelabel;
	private: System::Windows::Forms::TextBox^  ContactPhoneInput;


	private: System::Windows::Forms::TextBox^  ContactNameInput;
	private: System::Windows::Forms::Button^  button5;







	private: System::Windows::Forms::Panel^  Login;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  Time4;

	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  loginpasswordlabel;

private: System::Windows::Forms::TextBox^  LoginEmail;
private: System::Windows::Forms::TextBox^  LoginPass;
private: System::Windows::Forms::Label^  loginemaillabel;












private: System::Windows::Forms::Panel^  MainScreen;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;

private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  Time5;

private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Panel^  Party;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Label^  Time6;

private: System::Windows::Forms::PictureBox^  pictureBox3;






private: System::Windows::Forms::Panel^  LogicTest;
private: System::Windows::Forms::Label^  Time8;



private: System::Windows::Forms::PictureBox^  pictureBox8;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Panel^  Test1;

private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Panel^  Test2;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Panel^  Test3;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Panel^  YouDrunkSon;
private: System::Windows::Forms::Label^  Time10;

private: System::Windows::Forms::PictureBox^  pictureBox9;
private: System::Windows::Forms::Panel^  YouSoberSon;
private: System::Windows::Forms::Label^  Time9;

private: System::Windows::Forms::PictureBox^  pictureBox10;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Main = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Time1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->AccountCreation = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->accounttitle = (gcnew System::Windows::Forms::Label());
			this->AddressInput = (gcnew System::Windows::Forms::RichTextBox());
			this->ComPasswordInput = (gcnew System::Windows::Forms::TextBox());
			this->PasswordInput = (gcnew System::Windows::Forms::TextBox());
			this->PhoneInput = (gcnew System::Windows::Forms::TextBox());
			this->EmailInput = (gcnew System::Windows::Forms::TextBox());
			this->comfpasswordlabel = (gcnew System::Windows::Forms::Label());
			this->passwordlabel = (gcnew System::Windows::Forms::Label());
			this->homelabel = (gcnew System::Windows::Forms::Label());
			this->phonelabel = (gcnew System::Windows::Forms::Label());
			this->emaillabel = (gcnew System::Windows::Forms::Label());
			this->namelabel = (gcnew System::Windows::Forms::Label());
			this->NameInput = (gcnew System::Windows::Forms::TextBox());
			this->Time2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->EmergancyContact = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->conactphonelabel = (gcnew System::Windows::Forms::Label());
			this->contactnamelabel = (gcnew System::Windows::Forms::Label());
			this->ContactPhoneInput = (gcnew System::Windows::Forms::TextBox());
			this->ContactNameInput = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->EmergancyTitle = (gcnew System::Windows::Forms::Label());
			this->Time3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Login = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->loginpasswordlabel = (gcnew System::Windows::Forms::Label());
			this->LoginEmail = (gcnew System::Windows::Forms::TextBox());
			this->LoginPass = (gcnew System::Windows::Forms::TextBox());
			this->loginemaillabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Time4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->MainScreen = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->Time5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->Party = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Time6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->LogicTest = (gcnew System::Windows::Forms::Panel());
			this->Test3 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->Test2 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Test1 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Time8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->YouDrunkSon = (gcnew System::Windows::Forms::Panel());
			this->Time10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->YouSoberSon = (gcnew System::Windows::Forms::Panel());
			this->Time9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Main->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->AccountCreation->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->EmergancyContact->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->Login->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->MainScreen->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->Party->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->LogicTest->SuspendLayout();
			this->Test3->SuspendLayout();
			this->Test2->SuspendLayout();
			this->Test1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->YouDrunkSon->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->YouSoberSon->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LemonChiffon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(168, 542);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(252, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create an Account";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Main
			// 
			this->Main->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Main->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Main.BackgroundImage")));
			this->Main->Controls->Add(this->button5);
			this->Main->Controls->Add(this->Time1);
			this->Main->Controls->Add(this->pictureBox4);
			this->Main->Controls->Add(this->button1);
			this->Main->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Main->Location = System::Drawing::Point(0, 0);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(584, 761);
			this->Main->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LemonChiffon;
			this->button5->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(259, 615);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 37);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Login";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// Time1
			// 
			this->Time1->AutoSize = true;
			this->Time1->BackColor = System::Drawing::Color::Black;
			this->Time1->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time1->ForeColor = System::Drawing::SystemColors::Control;
			this->Time1->Location = System::Drawing::Point(507, 9);
			this->Time1->Name = L"Time1";
			this->Time1->Size = System::Drawing::Size(73, 36);
			this->Time1->TabIndex = 4;
			this->Time1->Text = L"Time";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(600, 51);
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// AccountCreation
			// 
			this->AccountCreation->BackColor = System::Drawing::SystemColors::HighlightText;
			this->AccountCreation->Controls->Add(this->button12);
			this->AccountCreation->Controls->Add(this->accounttitle);
			this->AccountCreation->Controls->Add(this->AddressInput);
			this->AccountCreation->Controls->Add(this->ComPasswordInput);
			this->AccountCreation->Controls->Add(this->PasswordInput);
			this->AccountCreation->Controls->Add(this->PhoneInput);
			this->AccountCreation->Controls->Add(this->EmailInput);
			this->AccountCreation->Controls->Add(this->comfpasswordlabel);
			this->AccountCreation->Controls->Add(this->passwordlabel);
			this->AccountCreation->Controls->Add(this->homelabel);
			this->AccountCreation->Controls->Add(this->phonelabel);
			this->AccountCreation->Controls->Add(this->emaillabel);
			this->AccountCreation->Controls->Add(this->namelabel);
			this->AccountCreation->Controls->Add(this->NameInput);
			this->AccountCreation->Controls->Add(this->Time2);
			this->AccountCreation->Controls->Add(this->pictureBox1);
			this->AccountCreation->Controls->Add(this->button2);
			this->AccountCreation->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AccountCreation->Location = System::Drawing::Point(0, 0);
			this->AccountCreation->Name = L"AccountCreation";
			this->AccountCreation->Size = System::Drawing::Size(584, 761);
			this->AccountCreation->TabIndex = 6;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(12, 729);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 19;
			this->button12->Text = L"Back";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// accounttitle
			// 
			this->accounttitle->AutoSize = true;
			this->accounttitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accounttitle->Location = System::Drawing::Point(41, 75);
			this->accounttitle->Name = L"accounttitle";
			this->accounttitle->Size = System::Drawing::Size(502, 42);
			this->accounttitle->TabIndex = 18;
			this->accounttitle->Text = L"Enter Your Information Below";
			// 
			// AddressInput
			// 
			this->AddressInput->Location = System::Drawing::Point(212, 346);
			this->AddressInput->Name = L"AddressInput";
			this->AddressInput->Size = System::Drawing::Size(355, 96);
			this->AddressInput->TabIndex = 17;
			this->AddressInput->Text = L"";
			// 
			// ComPasswordInput
			// 
			this->ComPasswordInput->Font = (gcnew System::Drawing::Font(L"Lucida Console", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComPasswordInput->Location = System::Drawing::Point(263, 522);
			this->ComPasswordInput->Name = L"ComPasswordInput";
			this->ComPasswordInput->Size = System::Drawing::Size(304, 36);
			this->ComPasswordInput->TabIndex = 16;
			// 
			// PasswordInput
			// 
			this->PasswordInput->Font = (gcnew System::Drawing::Font(L"Lucida Console", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordInput->Location = System::Drawing::Point(263, 461);
			this->PasswordInput->Name = L"PasswordInput";
			this->PasswordInput->Size = System::Drawing::Size(304, 36);
			this->PasswordInput->TabIndex = 15;
			// 
			// PhoneInput
			// 
			this->PhoneInput->Font = (gcnew System::Drawing::Font(L"Lucida Console", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PhoneInput->Location = System::Drawing::Point(212, 290);
			this->PhoneInput->Name = L"PhoneInput";
			this->PhoneInput->Size = System::Drawing::Size(360, 36);
			this->PhoneInput->TabIndex = 14;
			// 
			// EmailInput
			// 
			this->EmailInput->Font = (gcnew System::Drawing::Font(L"Lucida Console", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmailInput->Location = System::Drawing::Point(212, 217);
			this->EmailInput->Name = L"EmailInput";
			this->EmailInput->Size = System::Drawing::Size(360, 36);
			this->EmailInput->TabIndex = 13;
			// 
			// comfpasswordlabel
			// 
			this->comfpasswordlabel->AutoSize = true;
			this->comfpasswordlabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comfpasswordlabel->Location = System::Drawing::Point(19, 522);
			this->comfpasswordlabel->Name = L"comfpasswordlabel";
			this->comfpasswordlabel->Size = System::Drawing::Size(225, 33);
			this->comfpasswordlabel->TabIndex = 12;
			this->comfpasswordlabel->Text = L"Confirm Password:";
			// 
			// passwordlabel
			// 
			this->passwordlabel->AllowDrop = true;
			this->passwordlabel->AutoSize = true;
			this->passwordlabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordlabel->Location = System::Drawing::Point(115, 461);
			this->passwordlabel->Name = L"passwordlabel";
			this->passwordlabel->Size = System::Drawing::Size(129, 33);
			this->passwordlabel->TabIndex = 11;
			this->passwordlabel->Text = L"Password:";
			// 
			// homelabel
			// 
			this->homelabel->AutoSize = true;
			this->homelabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homelabel->Location = System::Drawing::Point(26, 359);
			this->homelabel->Name = L"homelabel";
			this->homelabel->Size = System::Drawing::Size(186, 33);
			this->homelabel->TabIndex = 10;
			this->homelabel->Text = L"Home Address:";
			// 
			// phonelabel
			// 
			this->phonelabel->AutoSize = true;
			this->phonelabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phonelabel->Location = System::Drawing::Point(26, 290);
			this->phonelabel->Name = L"phonelabel";
			this->phonelabel->Size = System::Drawing::Size(191, 33);
			this->phonelabel->TabIndex = 9;
			this->phonelabel->Text = L"Phone Number:";
			// 
			// emaillabel
			// 
			this->emaillabel->AutoSize = true;
			this->emaillabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emaillabel->Location = System::Drawing::Point(26, 217);
			this->emaillabel->Name = L"emaillabel";
			this->emaillabel->Size = System::Drawing::Size(180, 33);
			this->emaillabel->TabIndex = 8;
			this->emaillabel->Text = L"Email Address:";
			// 
			// namelabel
			// 
			this->namelabel->AutoSize = true;
			this->namelabel->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->namelabel->Location = System::Drawing::Point(26, 145);
			this->namelabel->Name = L"namelabel";
			this->namelabel->Size = System::Drawing::Size(89, 33);
			this->namelabel->TabIndex = 7;
			this->namelabel->Text = L"Name:";
			// 
			// NameInput
			// 
			this->NameInput->Font = (gcnew System::Drawing::Font(L"Lucida Console", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameInput->Location = System::Drawing::Point(121, 145);
			this->NameInput->Name = L"NameInput";
			this->NameInput->Size = System::Drawing::Size(451, 36);
			this->NameInput->TabIndex = 6;
			// 
			// Time2
			// 
			this->Time2->AutoSize = true;
			this->Time2->BackColor = System::Drawing::Color::Black;
			this->Time2->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time2->ForeColor = System::Drawing::SystemColors::Control;
			this->Time2->Location = System::Drawing::Point(507, 9);
			this->Time2->Name = L"Time2";
			this->Time2->Size = System::Drawing::Size(73, 36);
			this->Time2->TabIndex = 4;
			this->Time2->Text = L"Time";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 51);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(194, 584);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 51);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// EmergancyContact
			// 
			this->EmergancyContact->BackColor = System::Drawing::SystemColors::HighlightText;
			this->EmergancyContact->Controls->Add(this->button8);
			this->EmergancyContact->Controls->Add(this->conactphonelabel);
			this->EmergancyContact->Controls->Add(this->contactnamelabel);
			this->EmergancyContact->Controls->Add(this->ContactPhoneInput);
			this->EmergancyContact->Controls->Add(this->ContactNameInput);
			this->EmergancyContact->Controls->Add(this->label3);
			this->EmergancyContact->Controls->Add(this->EmergancyTitle);
			this->EmergancyContact->Controls->Add(this->Time3);
			this->EmergancyContact->Controls->Add(this->pictureBox2);
			this->EmergancyContact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->EmergancyContact->Location = System::Drawing::Point(0, 0);
			this->EmergancyContact->Name = L"EmergancyContact";
			this->EmergancyContact->Size = System::Drawing::Size(584, 761);
			this->EmergancyContact->TabIndex = 7;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(241, 586);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 26;
			this->button8->Text = L"Submit";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// conactphonelabel
			// 
			this->conactphonelabel->AutoSize = true;
			this->conactphonelabel->Location = System::Drawing::Point(89, 407);
			this->conactphonelabel->Name = L"conactphonelabel";
			this->conactphonelabel->Size = System::Drawing::Size(128, 13);
			this->conactphonelabel->TabIndex = 25;
			this->conactphonelabel->Text = L"Contact\'s Phone Number:";
			// 
			// contactnamelabel
			// 
			this->contactnamelabel->AutoSize = true;
			this->contactnamelabel->Location = System::Drawing::Point(105, 283);
			this->contactnamelabel->Name = L"contactnamelabel";
			this->contactnamelabel->Size = System::Drawing::Size(85, 13);
			this->contactnamelabel->TabIndex = 24;
			this->contactnamelabel->Text = L"Contact\'s Name:";
			// 
			// ContactPhoneInput
			// 
			this->ContactPhoneInput->Location = System::Drawing::Point(234, 407);
			this->ContactPhoneInput->Name = L"ContactPhoneInput";
			this->ContactPhoneInput->Size = System::Drawing::Size(100, 20);
			this->ContactPhoneInput->TabIndex = 23;
			// 
			// ContactNameInput
			// 
			this->ContactNameInput->Location = System::Drawing::Point(234, 280);
			this->ContactNameInput->Name = L"ContactNameInput";
			this->ContactNameInput->Size = System::Drawing::Size(100, 20);
			this->ContactNameInput->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(105, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(363, 16);
			this->label3->TabIndex = 21;
			this->label3->Text = L"(For the sake of this demo, put your real phone number here)";
			// 
			// EmergancyTitle
			// 
			this->EmergancyTitle->AutoSize = true;
			this->EmergancyTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmergancyTitle->Location = System::Drawing::Point(42, 75);
			this->EmergancyTitle->Name = L"EmergancyTitle";
			this->EmergancyTitle->Size = System::Drawing::Size(501, 42);
			this->EmergancyTitle->TabIndex = 19;
			this->EmergancyTitle->Text = L"Enter An Emergancy Contact";
			// 
			// Time3
			// 
			this->Time3->AutoSize = true;
			this->Time3->BackColor = System::Drawing::Color::Black;
			this->Time3->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time3->ForeColor = System::Drawing::SystemColors::Control;
			this->Time3->Location = System::Drawing::Point(507, 9);
			this->Time3->Name = L"Time3";
			this->Time3->Size = System::Drawing::Size(73, 36);
			this->Time3->TabIndex = 4;
			this->Time3->Text = L"Time";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(600, 51);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// Login
			// 
			this->Login->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Login->Controls->Add(this->button13);
			this->Login->Controls->Add(this->label5);
			this->Login->Controls->Add(this->label4);
			this->Login->Controls->Add(this->loginpasswordlabel);
			this->Login->Controls->Add(this->LoginEmail);
			this->Login->Controls->Add(this->LoginPass);
			this->Login->Controls->Add(this->loginemaillabel);
			this->Login->Controls->Add(this->label1);
			this->Login->Controls->Add(this->label2);
			this->Login->Controls->Add(this->Time4);
			this->Login->Controls->Add(this->pictureBox5);
			this->Login->Controls->Add(this->button6);
			this->Login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Login->Location = System::Drawing::Point(0, 0);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(584, 761);
			this->Login->TabIndex = 9;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(25, 719);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 32;
			this->button13->Text = L"Back";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 16);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Password: password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 16);
			this->label4->TabIndex = 30;
			this->label4->Text = L"User: skip@null.com";
			// 
			// loginpasswordlabel
			// 
			this->loginpasswordlabel->AutoSize = true;
			this->loginpasswordlabel->Location = System::Drawing::Point(84, 359);
			this->loginpasswordlabel->Name = L"loginpasswordlabel";
			this->loginpasswordlabel->Size = System::Drawing::Size(53, 13);
			this->loginpasswordlabel->TabIndex = 29;
			this->loginpasswordlabel->Text = L"Password";
			// 
			// LoginEmail
			// 
			this->LoginEmail->Location = System::Drawing::Point(183, 302);
			this->LoginEmail->Name = L"LoginEmail";
			this->LoginEmail->Size = System::Drawing::Size(338, 20);
			this->LoginEmail->TabIndex = 27;
			// 
			// LoginPass
			// 
			this->LoginPass->Location = System::Drawing::Point(183, 356);
			this->LoginPass->Name = L"LoginPass";
			this->LoginPass->Size = System::Drawing::Size(338, 20);
			this->LoginPass->TabIndex = 28;
			// 
			// loginemaillabel
			// 
			this->loginemaillabel->AutoSize = true;
			this->loginemaillabel->Location = System::Drawing::Point(84, 305);
			this->loginemaillabel->Name = L"loginemaillabel";
			this->loginemaillabel->Size = System::Drawing::Size(32, 13);
			this->loginemaillabel->TabIndex = 26;
			this->loginemaillabel->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 145);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(539, 16);
			this->label1->TabIndex = 21;
			this->label1->Text = L"(This was made incase you wanted to run the code multiple times and skip the regi"
				L"stration)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(227, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 42);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Login";
			// 
			// Time4
			// 
			this->Time4->AutoSize = true;
			this->Time4->BackColor = System::Drawing::Color::Black;
			this->Time4->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time4->ForeColor = System::Drawing::SystemColors::Control;
			this->Time4->Location = System::Drawing::Point(507, 9);
			this->Time4->Name = L"Time4";
			this->Time4->Size = System::Drawing::Size(73, 36);
			this->Time4->TabIndex = 4;
			this->Time4->Text = L"Time";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(0, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(600, 51);
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(194, 507);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(166, 51);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Login";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MainScreen
			// 
			this->MainScreen->BackColor = System::Drawing::Color::MidnightBlue;
			this->MainScreen->Controls->Add(this->button7);
			this->MainScreen->Controls->Add(this->label37);
			this->MainScreen->Controls->Add(this->label36);
			this->MainScreen->Controls->Add(this->label35);
			this->MainScreen->Controls->Add(this->label20);
			this->MainScreen->Controls->Add(this->label21);
			this->MainScreen->Controls->Add(this->label22);
			this->MainScreen->Controls->Add(this->label23);
			this->MainScreen->Controls->Add(this->label25);
			this->MainScreen->Controls->Add(this->label26);
			this->MainScreen->Controls->Add(this->label27);
			this->MainScreen->Controls->Add(this->label28);
			this->MainScreen->Controls->Add(this->label29);
			this->MainScreen->Controls->Add(this->label30);
			this->MainScreen->Controls->Add(this->label31);
			this->MainScreen->Controls->Add(this->label32);
			this->MainScreen->Controls->Add(this->label33);
			this->MainScreen->Controls->Add(this->Time5);
			this->MainScreen->Controls->Add(this->pictureBox6);
			this->MainScreen->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainScreen->Location = System::Drawing::Point(0, 0);
			this->MainScreen->Name = L"MainScreen";
			this->MainScreen->Size = System::Drawing::Size(584, 761);
			this->MainScreen->TabIndex = 10;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Navy;
			this->button7->Font = (gcnew System::Drawing::Font(L"Lucida Console", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Lime;
			this->button7->Location = System::Drawing::Point(113, 256);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(360, 203);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Let\'s PARTY";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(477, 736);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(104, 16);
			this->label37->TabIndex = 36;
			this->label37->Text = L"Happy Drinking!";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(158, 695);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(262, 16);
			this->label36->TabIndex = 35;
			this->label36->Text = L"Call an Uber to your location on your behalf";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(84, 584);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(233, 16);
			this->label35->TabIndex = 34;
			this->label35->Text = L" you can continue on you\'re merry way";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(24, 604);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(96, 24);
			this->label20->TabIndex = 33;
			this->label20->Text = L"If you fail...";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(24, 554);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(113, 24);
			this->label21->TabIndex = 32;
			this->label21->Text = L"If you pass...";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(236, 524);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(300, 16);
			this->label22->TabIndex = 31;
			this->label22->Text = L"Or a series of logical and mathematical questions";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(236, 500);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(222, 16);
			this->label23->TabIndex = 30;
			this->label23->Text = L"Taking an external Breathalizer Test";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(110, 230);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(358, 16);
			this->label25->TabIndex = 28;
			this->label25->Text = L"Just tap the Let\'s PARTY button, and guarantee your safety!";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(22, 198);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(532, 16);
			this->label26->TabIndex = 27;
			this->label26->Text = L"Whenever you\'re going to a social gathering and feel like you have the chance of "
				L"drinkng";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(153, 672);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(400, 16);
			this->label27->TabIndex = 26;
			this->label27->Text = L"Contact a friend of your drunken situation and hopefully pick you up";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(81, 656);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(126, 16);
			this->label28->TabIndex = 25;
			this->label28->Text = L"Which we will Either ";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(81, 635);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(370, 16);
			this->label29->TabIndex = 24;
			this->label29->Text = L"We can try to help you with the information you\'ve provided us";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::White;
			this->label30->Location = System::Drawing::Point(100, 145);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(302, 16);
			this->label30->TabIndex = 23;
			this->label30->Text = L"Most prominently driving while under the influence.";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(95, 129);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(472, 16);
			this->label31->TabIndex = 22;
			this->label31->Text = L"The purpose of this application is to prevent you from making horrible mistakes";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(29, 103);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(208, 16);
			this->label32->TabIndex = 21;
			this->label32->Text = L"Thank you for your responsability.";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(55, 65);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(488, 38);
			this->label33->TabIndex = 19;
			this->label33->Text = L"Welcome to No Drunk Driving";
			// 
			// Time5
			// 
			this->Time5->AutoSize = true;
			this->Time5->BackColor = System::Drawing::Color::Black;
			this->Time5->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time5->ForeColor = System::Drawing::SystemColors::Control;
			this->Time5->Location = System::Drawing::Point(507, 9);
			this->Time5->Name = L"Time5";
			this->Time5->Size = System::Drawing::Size(73, 36);
			this->Time5->TabIndex = 4;
			this->Time5->Text = L"Time";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(0, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(600, 51);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// Party
			// 
			this->Party->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Party->Controls->Add(this->button3);
			this->Party->Controls->Add(this->Time6);
			this->Party->Controls->Add(this->pictureBox3);
			this->Party->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Party->Location = System::Drawing::Point(0, 0);
			this->Party->Name = L"Party";
			this->Party->Size = System::Drawing::Size(584, 761);
			this->Party->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(138, 318);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(313, 176);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Click Me When Done Partying.";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// Time6
			// 
			this->Time6->AutoSize = true;
			this->Time6->BackColor = System::Drawing::Color::Black;
			this->Time6->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time6->ForeColor = System::Drawing::SystemColors::Control;
			this->Time6->Location = System::Drawing::Point(507, 9);
			this->Time6->Name = L"Time6";
			this->Time6->Size = System::Drawing::Size(73, 36);
			this->Time6->TabIndex = 4;
			this->Time6->Text = L"Time";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(600, 51);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// LogicTest
			// 
			this->LogicTest->BackColor = System::Drawing::SystemColors::HighlightText;
			this->LogicTest->Controls->Add(this->Test1);
			this->LogicTest->Controls->Add(this->Test2);
			this->LogicTest->Controls->Add(this->Test3);
			this->LogicTest->Controls->Add(this->Time8);
			this->LogicTest->Controls->Add(this->pictureBox8);
			this->LogicTest->Dock = System::Windows::Forms::DockStyle::Fill;
			this->LogicTest->Location = System::Drawing::Point(0, 0);
			this->LogicTest->Name = L"LogicTest";
			this->LogicTest->Size = System::Drawing::Size(584, 761);
			this->LogicTest->TabIndex = 9;
			// 
			// Test3
			// 
			this->Test3->Controls->Add(this->button11);
			this->Test3->Controls->Add(this->textBox3);
			this->Test3->Controls->Add(this->label18);
			this->Test3->Controls->Add(this->label24);
			this->Test3->Location = System::Drawing::Point(55, 217);
			this->Test3->Name = L"Test3";
			this->Test3->Size = System::Drawing::Size(474, 326);
			this->Test3->TabIndex = 13;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(48, 226);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 11;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(172, 226);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(239, 20);
			this->textBox3->TabIndex = 10;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(29, 85);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(274, 19);
			this->label18->TabIndex = 6;
			this->label18->Text = L"Six wolves catch six lambs in six minutes";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(28, 140);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(444, 19);
			this->label24->TabIndex = 7;
			this->label24->Text = L"How many wolves are needed to catch sixty lambs in one hour\?";
			// 
			// Test2
			// 
			this->Test2->Controls->Add(this->button10);
			this->Test2->Controls->Add(this->textBox2);
			this->Test2->Controls->Add(this->label14);
			this->Test2->Controls->Add(this->label15);
			this->Test2->Controls->Add(this->label17);
			this->Test2->Location = System::Drawing::Point(32, 210);
			this->Test2->Name = L"Test2";
			this->Test2->Size = System::Drawing::Size(474, 326);
			this->Test2->TabIndex = 12;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(53, 221);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 11;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(172, 226);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(239, 20);
			this->textBox2->TabIndex = 10;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(38, 132);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(273, 26);
			this->label14->TabIndex = 9;
			this->label14->Text = L"What is the fifth\'s kid\'s name\?";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(37, 36);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(175, 19);
			this->label15->TabIndex = 6;
			this->label15->Text = L"lan\'s father has five kids: ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(37, 75);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(408, 19);
			this->label17->TabIndex = 7;
			this->label17->Text = L"Monday, Tuesday, Wednesday, and Thursday are the first four.";
			// 
			// Test1
			// 
			this->Test1->Controls->Add(this->button9);
			this->Test1->Controls->Add(this->textBox1);
			this->Test1->Controls->Add(this->label13);
			this->Test1->Controls->Add(this->label10);
			this->Test1->Controls->Add(this->label12);
			this->Test1->Controls->Add(this->label11);
			this->Test1->Location = System::Drawing::Point(62, 181);
			this->Test1->Name = L"Test1";
			this->Test1->Size = System::Drawing::Size(474, 326);
			this->Test1->TabIndex = 9;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(51, 226);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 11;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 226);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(239, 20);
			this->textBox1->TabIndex = 10;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(38, 132);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(361, 26);
			this->label13->TabIndex = 9;
			this->label13->Text = L"How many apples does Dave have now\?";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(33, 33);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(365, 19);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Dave has twelve apples. He gives five of them to Eddie";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(35, 99);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(322, 19);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Alex then gives half of his apples back to Dave.\"\n";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(37, 65);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(296, 19);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Eddie gives all but one of his apples to Alex.";
			// 
			// Time8
			// 
			this->Time8->AutoSize = true;
			this->Time8->BackColor = System::Drawing::Color::Black;
			this->Time8->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time8->ForeColor = System::Drawing::SystemColors::Control;
			this->Time8->Location = System::Drawing::Point(507, 9);
			this->Time8->Name = L"Time8";
			this->Time8->Size = System::Drawing::Size(73, 36);
			this->Time8->TabIndex = 4;
			this->Time8->Text = L"Time";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(0, 0);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(600, 51);
			this->pictureBox8->TabIndex = 5;
			this->pictureBox8->TabStop = false;
			// 
			// YouDrunkSon
			// 
			this->YouDrunkSon->BackColor = System::Drawing::SystemColors::HighlightText;
			this->YouDrunkSon->Controls->Add(this->label7);
			this->YouDrunkSon->Controls->Add(this->Time10);
			this->YouDrunkSon->Controls->Add(this->pictureBox9);
			this->YouDrunkSon->Dock = System::Windows::Forms::DockStyle::Fill;
			this->YouDrunkSon->Location = System::Drawing::Point(0, 0);
			this->YouDrunkSon->Name = L"YouDrunkSon";
			this->YouDrunkSon->Size = System::Drawing::Size(584, 761);
			this->YouDrunkSon->TabIndex = 7;
			// 
			// Time10
			// 
			this->Time10->AutoSize = true;
			this->Time10->BackColor = System::Drawing::Color::Black;
			this->Time10->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time10->ForeColor = System::Drawing::SystemColors::Control;
			this->Time10->Location = System::Drawing::Point(507, 9);
			this->Time10->Name = L"Time10";
			this->Time10->Size = System::Drawing::Size(73, 36);
			this->Time10->TabIndex = 4;
			this->Time10->Text = L"Time";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(0, 0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(600, 51);
			this->pictureBox9->TabIndex = 5;
			this->pictureBox9->TabStop = false;
			// 
			// YouSoberSon
			// 
			this->YouSoberSon->BackColor = System::Drawing::SystemColors::HighlightText;
			this->YouSoberSon->Controls->Add(this->label6);
			this->YouSoberSon->Controls->Add(this->Time9);
			this->YouSoberSon->Controls->Add(this->pictureBox10);
			this->YouSoberSon->Dock = System::Windows::Forms::DockStyle::Fill;
			this->YouSoberSon->Location = System::Drawing::Point(0, 0);
			this->YouSoberSon->Name = L"YouSoberSon";
			this->YouSoberSon->Size = System::Drawing::Size(584, 761);
			this->YouSoberSon->TabIndex = 8;
			// 
			// Time9
			// 
			this->Time9->AutoSize = true;
			this->Time9->BackColor = System::Drawing::Color::Black;
			this->Time9->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time9->ForeColor = System::Drawing::SystemColors::Control;
			this->Time9->Location = System::Drawing::Point(507, 9);
			this->Time9->Name = L"Time9";
			this->Time9->Size = System::Drawing::Size(73, 36);
			this->Time9->TabIndex = 4;
			this->Time9->Text = L"Time";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(0, 0);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(600, 51);
			this->pictureBox10->TabIndex = 5;
			this->pictureBox10->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(248, 379);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"You Sober SON.";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(238, 368);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"You DRUNK SON";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(584, 761);
			this->ControlBox = false;
			this->Controls->Add(this->Main);
			this->Controls->Add(this->AccountCreation);
			this->Controls->Add(this->Login);
			this->Controls->Add(this->EmergancyContact);
			this->Controls->Add(this->MainScreen);
			this->Controls->Add(this->Party);
			this->Controls->Add(this->LogicTest);
			this->Controls->Add(this->YouSoberSon);
			this->Controls->Add(this->YouDrunkSon);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Main->ResumeLayout(false);
			this->Main->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->AccountCreation->ResumeLayout(false);
			this->AccountCreation->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->EmergancyContact->ResumeLayout(false);
			this->EmergancyContact->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->Login->ResumeLayout(false);
			this->Login->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->MainScreen->ResumeLayout(false);
			this->MainScreen->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->Party->ResumeLayout(false);
			this->Party->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->LogicTest->ResumeLayout(false);
			this->LogicTest->PerformLayout();
			this->Test3->ResumeLayout(false);
			this->Test3->PerformLayout();
			this->Test2->ResumeLayout(false);
			this->Test2->PerformLayout();
			this->Test1->ResumeLayout(false);
			this->Test1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->YouDrunkSon->ResumeLayout(false);
			this->YouDrunkSon->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->YouSoberSon->ResumeLayout(false);
			this->YouSoberSon->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
// Main Menu - Register
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Main->Hide();
		AccountCreation->Show();
	}
// Main Menu - Login
	 private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		 Main->Hide();
		 AccountCreation->Hide();
		 Login->Show();
	 }
// Account Creation -> Submit
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		AccountCreation->Hide();
		Login->Hide();
		EmergancyContact->Show();

		String ^ Name = NameInput->Text;
		String ^ Email = EmailInput->Text;
		String ^ Phone = PhoneInput->Text;
		String ^ Address = AddressInput->Text;
		String ^ Password = PasswordInput->Text;
	}
// Account Creation -> Back
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		AccountCreation->Hide();
		Main->Show();
	 }

 // Login Screen -> Enter
	 private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		 String ^ LoginE = LoginEmail->Text;
		 String ^ LoginP = LoginPass->Text;
		 
		 if (LoginE == "skip@null.com" && LoginP == "password") {
			 Login->Hide();
			 EmergancyContact->Hide();
			 MainScreen->Show();
		 }
	 }
// Login Screen -> Back
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		Login->Hide();
		AccountCreation->Show();
		Main->Show();
	}

// Emergancy Contact -> Submit
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		EmergancyContact->Hide();
		MainScreen->Show();

		String ^ CName = ContactNameInput->Text;
		String ^ CPhone = ContactPhoneInput->Text;
	}
// Let's Party - Activator
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	MainScreen->Hide();
	Party->Show();
	}
// Party - Deactivator
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Party->Hide();
		LogicTest->Show();
	}
// Logic Test One
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ Answer1 = textBox1->Text;

	if (Answer1 == "9") {
		Test1->Hide();
		Test2->Show();
	}
	else
		Test1->Hide();
		Test2->Hide();
		Test3->Hide();
		LogicTest->Hide();
		YouSoberSon->Hide();
		YouDrunkSon->Show();
}
//Logic Test Two
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ Answer2 = textBox2->Text;

	if (Answer2 == "Ian") {
		Test2->Hide();
		Test3->Show();
	}
	else
	Test2->Hide();
	Test3->Hide();
	LogicTest->Hide();
	YouSoberSon->Hide();
	YouDrunkSon->Show();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ Answer3 = textBox3->Text;

	if (Answer3 == "6") {
		Test3->Hide();
		YouSoberSon->Show();
	}
	else
	Test3->Hide();
	LogicTest->Hide();
	YouSoberSon->Hide();
	YouDrunkSon->Show();
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
