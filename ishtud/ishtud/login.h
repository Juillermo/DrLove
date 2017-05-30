#pragma once
#include "signUp.h"
#include "thisisyou.h"
#include <msclr\marshal_cppstd.h>

namespace ishtud {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::Threading;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		login(LoversDatabase* _database){
			InitializeComponent();
			database = _database;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::TextBox^  password;


	protected: 


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  logbut;
	private: System::Windows::Forms::Button^  signbut;



	private:
		/// <summary>
		/// Required designer variable.
		LoversDatabase* database;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->logbut = (gcnew System::Windows::Forms::Button());
			this->signbut = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// id
			// 
			this->id->AccessibleDescription = L"user id";
			this->id->AccessibleName = L"Id";
			this->id->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->id->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(210, 141);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(199, 26);
			this->id->TabIndex = 1;
			this->id->TextChanged += gcnew System::EventHandler(this, &login::textBox1_TextChanged);
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(210, 195);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(199, 26);
			this->password->TabIndex = 2;
			this->password->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(43, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Id";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(43, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			// 
			// logbut
			// 
			this->logbut->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->logbut->Location = System::Drawing::Point(47, 266);
			this->logbut->Name = L"logbut";
			this->logbut->Size = System::Drawing::Size(153, 31);
			this->logbut->TabIndex = 3;
			this->logbut->Text = L"Log In";
			this->logbut->UseVisualStyleBackColor = true;
			this->logbut->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// signbut
			// 
			this->signbut->Cursor = System::Windows::Forms::Cursors::Default;
			this->signbut->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->signbut->Location = System::Drawing::Point(256, 266);
			this->signbut->Name = L"signbut";
			this->signbut->Size = System::Drawing::Size(153, 31);
			this->signbut->TabIndex = 4;
			this->signbut->Text = L"Sign Up";
			this->signbut->UseVisualStyleBackColor = true;
			this->signbut->Click += gcnew System::EventHandler(this, &login::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(47, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(362, 80);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(47, 337);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(362, 160);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"About";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(322, 120);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// login
			// 
			this->AcceptButton = this->logbut;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(469, 523);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->signbut);
			this->Controls->Add(this->logbut);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->password);
			this->Controls->Add(this->id);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dr.Love";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				signUp ^ d= gcnew signUp(database);
				d -> StartPosition = FormStartPosition::Manual;
				d -> Location = this -> Location;
				this->Hide();
				d->Show();
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 std::string st_id = msclr::interop::marshal_as<std::string>(id->Text);
			 std::string st_pss = msclr::interop::marshal_as<std::string>(password->Text);

			if(database->checkUser(st_id, st_pss)){
				thisisyou ^ d= gcnew thisisyou(database);
				d -> StartPosition = FormStartPosition::Manual;
				d -> Location = this -> Location;
				this->Hide();
				//d->Show();
				//this->Close();
				d->Show();
			}else{
				MessageBox::Show("Invalid user/password", "Error");
			}
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

