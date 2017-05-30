#pragma once
#include "interestedin.h"
#include <msclr\marshal_cppstd.h>

namespace ishtud {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for signUp
	/// </summary>
	public ref class signUp : public System::Windows::Forms::Form
	{
	public:
		signUp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		signUp(LoversDatabase* _database){
			InitializeComponent();

			agetxt->SelectedIndex = 8;
			heighttxt->SelectedIndex = 39;

			database = _database;

			vector<tag> tags = database->getTags();
			for(unsigned int i=0; i<tags.size() && i<20; i++){
				Tagtxt->Items->Add(toText(tags[i].name));
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~signUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  idtxt;
	private: System::Windows::Forms::TextBox^  nametxt;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  passtxt;

	private: System::Windows::Forms::TextBox^  mailtxt;
	private: System::Windows::Forms::TextBox^  lovetxt;










	private: System::Windows::Forms::ComboBox^  heighttxt;
	private: System::Windows::Forms::ComboBox^  Tagtxt;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	private: System::Windows::Forms::RadioButton^  male;

	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::ComboBox^  agetxt;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::TextBox^  Tagstxt;
	private: System::Windows::Forms::Button^  addbut;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

			 LoversDatabase* database;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(signUp::typeid));
			this->idtxt = (gcnew System::Windows::Forms::TextBox());
			this->nametxt = (gcnew System::Windows::Forms::TextBox());
			this->passtxt = (gcnew System::Windows::Forms::TextBox());
			this->mailtxt = (gcnew System::Windows::Forms::TextBox());
			this->lovetxt = (gcnew System::Windows::Forms::TextBox());
			this->heighttxt = (gcnew System::Windows::Forms::ComboBox());
			this->Tagtxt = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->male = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->agetxt = (gcnew System::Windows::Forms::ComboBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->Tagstxt = (gcnew System::Windows::Forms::TextBox());
			this->addbut = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// idtxt
			// 
			this->idtxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->idtxt->Location = System::Drawing::Point(164, 85);
			this->idtxt->Name = L"idtxt";
			this->idtxt->Size = System::Drawing::Size(193, 22);
			this->idtxt->TabIndex = 0;
			this->idtxt->TextChanged += gcnew System::EventHandler(this, &signUp::textBox1_TextChanged);
			// 
			// nametxt
			// 
			this->nametxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nametxt->Location = System::Drawing::Point(165, 170);
			this->nametxt->Name = L"nametxt";
			this->nametxt->Size = System::Drawing::Size(193, 22);
			this->nametxt->TabIndex = 2;
			// 
			// passtxt
			// 
			this->passtxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->passtxt->Location = System::Drawing::Point(164, 128);
			this->passtxt->Name = L"passtxt";
			this->passtxt->Size = System::Drawing::Size(193, 22);
			this->passtxt->TabIndex = 1;
			// 
			// mailtxt
			// 
			this->mailtxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mailtxt->Location = System::Drawing::Point(164, 326);
			this->mailtxt->Name = L"mailtxt";
			this->mailtxt->Size = System::Drawing::Size(193, 22);
			this->mailtxt->TabIndex = 7;
			// 
			// lovetxt
			// 
			this->lovetxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lovetxt->Location = System::Drawing::Point(164, 366);
			this->lovetxt->Multiline = true;
			this->lovetxt->Name = L"lovetxt";
			this->lovetxt->Size = System::Drawing::Size(193, 46);
			this->lovetxt->TabIndex = 8;
			this->lovetxt->TextChanged += gcnew System::EventHandler(this, &signUp::lovetxt_TextChanged);
			// 
			// heighttxt
			// 
			this->heighttxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->heighttxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->heighttxt->FormattingEnabled = true;
			this->heighttxt->Items->AddRange(gcnew cli::array< System::Object^  >(91) {L"130", L"131", L"132", L"133", L"134", L"135", 
				L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", L"147", L"148", L"149", L"150", L"151", 
				L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", L"163", L"164", L"165", L"166", L"167", 
				L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", L"179", L"180", L"181", L"182", L"183", 
				L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", L"195", L"196", L"197", L"198", L"199", 
				L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", L"211", L"212", L"213", L"214", L"215", 
				L"216", L"217", L"218", L"219", L"220"});
			this->heighttxt->Location = System::Drawing::Point(164, 284);
			this->heighttxt->Name = L"heighttxt";
			this->heighttxt->Size = System::Drawing::Size(193, 22);
			this->heighttxt->TabIndex = 6;
			this->heighttxt->SelectedIndexChanged += gcnew System::EventHandler(this, &signUp::comboBox1_SelectedIndexChanged);
			// 
			// Tagtxt
			// 
			this->Tagtxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Tagtxt->FormattingEnabled = true;
			this->Tagtxt->Location = System::Drawing::Point(164, 431);
			this->Tagtxt->Name = L"Tagtxt";
			this->Tagtxt->Size = System::Drawing::Size(120, 22);
			this->Tagtxt->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(128, 524);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 34);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Continue";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &signUp::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(42, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 19);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(42, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 19);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 19);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Username";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(42, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 19);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Age";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(42, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 19);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Sex";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(42, 284);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 19);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Height";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(42, 326);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 19);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Email";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(42, 366);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 19);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Love Message";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(42, 434);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 19);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Tags";
			this->toolTip1->SetToolTip(this->label9, L"Can write anything about you.\r\nFor example write your favorite\r\nhobby or kind of " 
				L"movie you like \r\nor about your style how you look.");
			this->label9->Click += gcnew System::EventHandler(this, &signUp::label9_Click);
			// 
			// male
			// 
			this->male->AutoSize = true;
			this->male->Checked = true;
			this->male->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->male->Location = System::Drawing::Point(164, 248);
			this->male->Name = L"male";
			this->male->Size = System::Drawing::Size(53, 18);
			this->male->TabIndex = 4;
			this->male->TabStop = true;
			this->male->Text = L"Male";
			this->male->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(258, 248);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(67, 18);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// agetxt
			// 
			this->agetxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->agetxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->agetxt->FormattingEnabled = true;
			this->agetxt->Items->AddRange(gcnew cli::array< System::Object^  >(35) {L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", 
				L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", 
				L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50"});
			this->agetxt->Location = System::Drawing::Point(164, 209);
			this->agetxt->Name = L"agetxt";
			this->agetxt->Size = System::Drawing::Size(193, 22);
			this->agetxt->TabIndex = 3;
			// 
			// Tagstxt
			// 
			this->Tagstxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Tagstxt->Location = System::Drawing::Point(35, 467);
			this->Tagstxt->Multiline = true;
			this->Tagstxt->Name = L"Tagstxt";
			this->Tagstxt->ReadOnly = true;
			this->Tagstxt->Size = System::Drawing::Size(322, 40);
			this->Tagstxt->TabIndex = 31;
			this->Tagstxt->TextChanged += gcnew System::EventHandler(this, &signUp::Tagstxt_TextChanged);
			// 
			// addbut
			// 
			this->addbut->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addbut->Location = System::Drawing::Point(303, 429);
			this->addbut->Name = L"addbut";
			this->addbut->Size = System::Drawing::Size(54, 23);
			this->addbut->TabIndex = 10;
			this->addbut->Text = L"Add";
			this->addbut->UseVisualStyleBackColor = true;
			this->addbut->Click += gcnew System::EventHandler(this, &signUp::addbut_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(166, 30);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 34);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Sign Up";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(99, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(62, 67);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &signUp::pictureBox1_Click);
			// 
			// signUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(402, 567);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->addbut);
			this->Controls->Add(this->Tagstxt);
			this->Controls->Add(this->agetxt);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->male);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Tagtxt);
			this->Controls->Add(this->heighttxt);
			this->Controls->Add(this->lovetxt);
			this->Controls->Add(this->mailtxt);
			this->Controls->Add(this->passtxt);
			this->Controls->Add(this->nametxt);
			this->Controls->Add(this->idtxt);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"signUp";
			this->Text = L"Dr.Love";
			this->Load += gcnew System::EventHandler(this, &signUp::signUp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
            string st_id = msclr::interop::marshal_as<string>(idtxt->Text);
			string st_pass = msclr::interop::marshal_as<string>(passtxt->Text);
			string st_name = msclr::interop::marshal_as<string>(nametxt->Text);
			string st_mail = msclr::interop::marshal_as<string>(mailtxt->Text);
			string st_love = msclr::interop::marshal_as<string>(lovetxt->Text);
			
			int age = stoi(msclr::interop::marshal_as<string>(agetxt->Text));
			int height = stoi(msclr::interop::marshal_as<string>(heighttxt->Text));
			
			t_gender gender;
			if(male->Checked == true){
				gender = MALE;
			}else{
				gender = FEMALE;
			}

			int a;
			if (   (this->idtxt->Text == String::Empty)   || (this->nametxt->Text == String::Empty)
				|| (this->passtxt->Text == String::Empty) || (this->lovetxt->Text == String::Empty)
				|| (this->mailtxt->Text == String::Empty)) {

					MessageBox::Show("All fields must be fullfilled!");

			}else if(database->checkUser(st_id, a)){

				MessageBox::Show("This Id already exists! Please, select a new Id.");

			}else{
				Lover new_user(st_id, st_pass, st_name, st_love, st_mail, gender, age, height);

				string st_tags = msclr::interop::marshal_as<std::string>(Tagstxt->Text);
				 vector<string> utags;

				 if(Tagstxt->Text != String::Empty){
					string word;
					stringstream ss;
					ss<<st_tags;
					string wholetag;
					bool first = true;
						while(ss>>word){
							bool end = false;
							for(unsigned int j=0; j<word.size(); j++){
								if(word[j]==','){ 
									word.erase(word.begin()+j);
								end = true;
								}
								//if(word[j]==' '){ word[j]='_'; }
							}
							if(!first){ wholetag += " "; }
							first = false;
							wholetag += word;
							if(end){
								utags.push_back(wholetag);
								wholetag.clear();
								first = true;
							}
						};
				 };

				new_user.setTags( utags );

				database->insertUser(new_user);

				interestedin ^ n= gcnew interestedin(database);
				n -> StartPosition = FormStartPosition::Manual;
				n -> Location = this -> Location;
				this->Hide();
				//this->Close();
				n->Show();
			}

		 }
		 
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void signUp_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void lovetxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void addbut_Click(System::Object^  sender, System::EventArgs^  e) {
			 string st_tags = msclr::interop::marshal_as<std::string>(Tagstxt->Text);
			 vector<string> utags;
			 
			 if(Tagstxt->Text != String::Empty){
				string word;
				stringstream ss;
				ss<<st_tags;
				string wholetag;
					while(ss>>word){
						bool end = false;
						for(unsigned int j=0; j<word.size(); j++){
							if(word[j]==','){ 
								word.erase(word.begin()+j);
								end = true;
							}
							//if(word[j]==' '){ word[j]='_'; }
						}
						wholetag += " " + word;
						if(end){
						utags.push_back(wholetag);
						wholetag.clear();
						}
					};
			 };

			 if(Tagtxt->Text != String::Empty){
				string st_tag = msclr::interop::marshal_as<string>(Tagtxt->Text);
				st_tag = " " + st_tag;
				bool exists =false;
				for(unsigned int i =0; i<utags.size(); i++){
					 if(utags[i] == st_tag){ exists = true; }
				}
				if(!exists){ utags.push_back(st_tag); }
			 }

			 Tagstxt->Text = String::Empty;
			 for(unsigned int i=0; i<utags.size(); i++){
				Tagstxt->Text = String::Concat(Tagstxt->Text,toText(utags[i]),",");
			 }
		 }
private: System::Void Tagstxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
