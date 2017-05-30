#pragma once

#include "interestedin.h"

namespace ishtud {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for thisisyou
	/// </summary>
	public ref class thisisyou : public System::Windows::Forms::Form
	{
	public:
		thisisyou(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		thisisyou(LoversDatabase* _database){
			InitializeComponent();
			database = _database;
			Lover you = database->getCurrent();

			Idtxt->Text = toText(you.getId());
			Passtxt->Text = toText(you.getPass());
			Nametxt->Text = toText(you.getName());
			Agetxt->Text = toText(you.getAge());
			Heighttxt->Text = toText(you.getHeight());
			Mailtxt->Text = toText(you.getMail());
			Messtxt->Text = toText(you.getMess());

			Lover cuser = database->getCurrent();
			std::vector<string> tags = cuser.getTags();
			for(unsigned int i=0; i<tags.size(); i++){
				Tagstxt->Text = String::Concat(Tagstxt->Text,toText(tags[i]),", ");
			}

			vector<tag> alltags = database->getTags();
			for(unsigned int i=0; i<alltags.size() && i<20; i++){
				Tagtxt->Items->Add(toText(alltags[i].name));
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~thisisyou()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	private: System::Windows::Forms::Label^  Id;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  Idtxt;
	private: System::Windows::Forms::TextBox^  Passtxt;
	private: System::Windows::Forms::TextBox^  Nametxt;


	private: System::Windows::Forms::TextBox^  Mailtxt;
	private: System::Windows::Forms::TextBox^  Messtxt;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  Agetxt;

	private: System::Windows::Forms::ComboBox^  Heighttxt;
	private: System::Windows::Forms::ComboBox^  Tagtxt;


	private: System::Windows::Forms::Button^  addbut;
	private: System::Windows::Forms::TextBox^  Tagstxt;
	private: System::Windows::Forms::ToolTip^  toolTip1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(thisisyou::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Id = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Idtxt = (gcnew System::Windows::Forms::TextBox());
			this->Passtxt = (gcnew System::Windows::Forms::TextBox());
			this->Nametxt = (gcnew System::Windows::Forms::TextBox());
			this->Mailtxt = (gcnew System::Windows::Forms::TextBox());
			this->Messtxt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Agetxt = (gcnew System::Windows::Forms::ComboBox());
			this->Heighttxt = (gcnew System::Windows::Forms::ComboBox());
			this->Tagtxt = (gcnew System::Windows::Forms::ComboBox());
			this->addbut = (gcnew System::Windows::Forms::Button());
			this->Tagstxt = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(159, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"My Profile";
			this->label1->Click += gcnew System::EventHandler(this, &thisisyou::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(135, 522);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 34);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Continue";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &thisisyou::button1_Click);
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Id->Location = System::Drawing::Point(43, 96);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(27, 19);
			this->Id->TabIndex = 3;
			this->Id->Text = L"Id";
			this->Id->Click += gcnew System::EventHandler(this, &thisisyou::Id_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(43, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			this->label2->Click += gcnew System::EventHandler(this, &thisisyou::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(43, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Name";
			this->label3->Click += gcnew System::EventHandler(this, &thisisyou::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(43, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 19);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Age";
			this->label4->Click += gcnew System::EventHandler(this, &thisisyou::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(43, 264);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 19);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Height";
			this->label5->Click += gcnew System::EventHandler(this, &thisisyou::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(43, 306);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 19);
			this->label6->TabIndex = 8;
			this->label6->Text = L"E-mail";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(43, 349);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 19);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Love message";
			// 
			// Idtxt
			// 
			this->Idtxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Idtxt->Location = System::Drawing::Point(153, 96);
			this->Idtxt->Name = L"Idtxt";
			this->Idtxt->ReadOnly = true;
			this->Idtxt->Size = System::Drawing::Size(201, 22);
			this->Idtxt->TabIndex = 0;
			// 
			// Passtxt
			// 
			this->Passtxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Passtxt->Location = System::Drawing::Point(153, 141);
			this->Passtxt->Name = L"Passtxt";
			this->Passtxt->Size = System::Drawing::Size(201, 22);
			this->Passtxt->TabIndex = 1;
			// 
			// Nametxt
			// 
			this->Nametxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Nametxt->Location = System::Drawing::Point(153, 180);
			this->Nametxt->Name = L"Nametxt";
			this->Nametxt->Size = System::Drawing::Size(201, 22);
			this->Nametxt->TabIndex = 2;
			// 
			// Mailtxt
			// 
			this->Mailtxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Mailtxt->Location = System::Drawing::Point(153, 306);
			this->Mailtxt->Name = L"Mailtxt";
			this->Mailtxt->Size = System::Drawing::Size(201, 22);
			this->Mailtxt->TabIndex = 5;
			// 
			// Messtxt
			// 
			this->Messtxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Messtxt->Location = System::Drawing::Point(153, 349);
			this->Messtxt->Multiline = true;
			this->Messtxt->Name = L"Messtxt";
			this->Messtxt->Size = System::Drawing::Size(201, 58);
			this->Messtxt->TabIndex = 6;
			this->Messtxt->TextChanged += gcnew System::EventHandler(this, &thisisyou::Messtxt_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(43, 428);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 19);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Tags";
			this->toolTip1->SetToolTip(this->label8, L"Can write anything about you.\r\nFor example write your favorite\r\nhobby or kind of " 
				L"movie you like \r\nor about your style how you look.");
			this->label8->Click += gcnew System::EventHandler(this, &thisisyou::label8_Click);
			// 
			// Agetxt
			// 
			this->Agetxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Agetxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Agetxt->FormattingEnabled = true;
			this->Agetxt->Items->AddRange(gcnew cli::array< System::Object^  >(35) {L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", 
				L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", 
				L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50"});
			this->Agetxt->Location = System::Drawing::Point(153, 219);
			this->Agetxt->Name = L"Agetxt";
			this->Agetxt->Size = System::Drawing::Size(201, 22);
			this->Agetxt->TabIndex = 3;
			// 
			// Heighttxt
			// 
			this->Heighttxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Heighttxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Heighttxt->FormattingEnabled = true;
			this->Heighttxt->Items->AddRange(gcnew cli::array< System::Object^  >(91) {L"130", L"131", L"132", L"133", L"134", L"135", 
				L"136", L"137", L"138", L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", L"147", L"148", L"149", L"150", L"151", 
				L"152", L"153", L"154", L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", L"163", L"164", L"165", L"166", L"167", 
				L"168", L"169", L"170", L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", L"179", L"180", L"181", L"182", L"183", 
				L"184", L"185", L"186", L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", L"195", L"196", L"197", L"198", L"199", 
				L"200", L"201", L"202", L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210", L"211", L"212", L"213", L"214", L"215", 
				L"216", L"217", L"218", L"219", L"220"});
			this->Heighttxt->Location = System::Drawing::Point(153, 264);
			this->Heighttxt->Name = L"Heighttxt";
			this->Heighttxt->Size = System::Drawing::Size(201, 22);
			this->Heighttxt->TabIndex = 4;
			// 
			// Tagtxt
			// 
			this->Tagtxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Tagtxt->FormattingEnabled = true;
			this->Tagtxt->Location = System::Drawing::Point(153, 429);
			this->Tagtxt->Name = L"Tagtxt";
			this->Tagtxt->Size = System::Drawing::Size(124, 22);
			this->Tagtxt->TabIndex = 7;
			this->Tagtxt->SelectedIndexChanged += gcnew System::EventHandler(this, &thisisyou::Tagtxt_SelectedIndexChanged);
			// 
			// addbut
			// 
			this->addbut->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->addbut->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addbut->Location = System::Drawing::Point(300, 429);
			this->addbut->Name = L"addbut";
			this->addbut->Size = System::Drawing::Size(54, 23);
			this->addbut->TabIndex = 8;
			this->addbut->Text = L"Add";
			this->addbut->UseVisualStyleBackColor = true;
			this->addbut->Click += gcnew System::EventHandler(this, &thisisyou::addbut_Click);
			// 
			// Tagstxt
			// 
			this->Tagstxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Tagstxt->Location = System::Drawing::Point(45, 468);
			this->Tagstxt->Multiline = true;
			this->Tagstxt->Name = L"Tagstxt";
			this->Tagstxt->ReadOnly = true;
			this->Tagstxt->Size = System::Drawing::Size(309, 40);
			this->Tagstxt->TabIndex = 30;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(79, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(75, 67);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &thisisyou::pictureBox1_Click);
			// 
			// thisisyou
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->CancelButton = this->addbut;
			this->ClientSize = System::Drawing::Size(402, 567);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Tagstxt);
			this->Controls->Add(this->addbut);
			this->Controls->Add(this->Tagtxt);
			this->Controls->Add(this->Heighttxt);
			this->Controls->Add(this->Agetxt);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Messtxt);
			this->Controls->Add(this->Mailtxt);
			this->Controls->Add(this->Nametxt);
			this->Controls->Add(this->Passtxt);
			this->Controls->Add(this->Idtxt);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"thisisyou";
			this->Text = L"Dr.Love";
			this->Load += gcnew System::EventHandler(this, &thisisyou::thisisyou_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			string st_pass = msclr::interop::marshal_as<string>(Passtxt->Text);
			string st_name = msclr::interop::marshal_as<string>(Nametxt->Text);
			string st_mail = msclr::interop::marshal_as<string>(Mailtxt->Text);
			string st_love = msclr::interop::marshal_as<string>(Messtxt->Text);
			string st_age = msclr::interop::marshal_as<string>(Agetxt->Text);
			string st_height = msclr::interop::marshal_as<string>(Heighttxt->Text);

			stringstream ss;
			int age;
			ss << st_age;
			ss >> age;
			stringstream sss;
			int height;
			sss << st_height;
			sss >> height;

			Lover cuser = database->getCurrent();

			if (   (Nametxt->Text == String::Empty) || (Passtxt->Text == String::Empty)
				|| (Messtxt->Text == String::Empty) || (Mailtxt->Text == String::Empty)) {

					MessageBox::Show("All fields must be fullfilled!");

			}else{
				 Lover euser(cuser.getId(), st_pass, st_name, st_love, st_mail, cuser.getGender(), age, height);
				
				 string st_tags = msclr::interop::marshal_as<std::string>(Tagstxt->Text);
				 vector<string> utags;
				 /*
				 if(Tagstxt->Text != String::Empty){
					string temptag;
					stringstream ss;
					ss<<st_tags;
						while(ss>>temptag){
							for(unsigned int j=0; j<temptag.size(); j++){
								if(temptag[j]==','){ temptag.erase(temptag.begin()+j); }
							}
							utags.push_back(temptag);
						};
				 };*/
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
					euser.setTags( utags );
				 };

				if(!(euser == cuser)){
					database->insertUser(euser);
				}

				interestedin ^ n= gcnew interestedin(database);
				n -> StartPosition = FormStartPosition::Manual;
				n -> Location = this -> Location;
				this->Hide();
				//n->Show();
				//this->Close();
				n->Show();
			}
		 }

	private: System::Void thisisyou_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Id_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Messtxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Tagtxt_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
