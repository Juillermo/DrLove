#pragma once
#include "result.h"
#include <msclr\marshal_cppstd.h>

namespace ishtud {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for interestedin
	/// </summary>
	public ref class interestedin : public System::Windows::Forms::Form
	{
	public:
		interestedin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		interestedin(LoversDatabase* _database){
			InitializeComponent();
			database = _database;

			std::vector<tag> tags = database->getTags();
			for(unsigned int i=0; i<tags.size() && i<20; i++){
				Tagtxt->Items->Add(toText(tags[i].name));
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~interestedin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  Tagtxt;


	protected: 









	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		LoversDatabase* database;

	private: System::Windows::Forms::GroupBox^  agegroup;
	private: System::Windows::Forms::RadioButton^  agedont;


	private: System::Windows::Forms::RadioButton^  agehigh;

	private: System::Windows::Forms::RadioButton^  agesim;

	private: System::Windows::Forms::RadioButton^  agelow;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  heightdont;
	private: System::Windows::Forms::RadioButton^  heighthigh;


	private: System::Windows::Forms::RadioButton^  heightsim;
	private: System::Windows::Forms::Button^  addbut;
	private: System::Windows::Forms::TextBox^  Tagstxt;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;



	private: System::Windows::Forms::RadioButton^  heightlow;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(interestedin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Tagtxt = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->agegroup = (gcnew System::Windows::Forms::GroupBox());
			this->agedont = (gcnew System::Windows::Forms::RadioButton());
			this->agehigh = (gcnew System::Windows::Forms::RadioButton());
			this->agesim = (gcnew System::Windows::Forms::RadioButton());
			this->agelow = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->heightdont = (gcnew System::Windows::Forms::RadioButton());
			this->heighthigh = (gcnew System::Windows::Forms::RadioButton());
			this->heightsim = (gcnew System::Windows::Forms::RadioButton());
			this->heightlow = (gcnew System::Windows::Forms::RadioButton());
			this->addbut = (gcnew System::Windows::Forms::Button());
			this->Tagstxt = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->agegroup->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(93, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Who are you looking for\?";
			this->label1->Click += gcnew System::EventHandler(this, &interestedin::label1_Click);
			// 
			// Tagtxt
			// 
			this->Tagtxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Tagtxt->FormattingEnabled = true;
			this->Tagtxt->Location = System::Drawing::Point(98, 275);
			this->Tagtxt->Name = L"Tagtxt";
			this->Tagtxt->Size = System::Drawing::Size(190, 22);
			this->Tagtxt->TabIndex = 9;
			this->Tagtxt->SelectedIndexChanged += gcnew System::EventHandler(this, &interestedin::tagsearch_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(144, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 34);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &interestedin::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 19);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Age";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 19);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Height";
			this->label3->Click += gcnew System::EventHandler(this, &interestedin::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 274);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 19);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Tags";
			// 
			// agegroup
			// 
			this->agegroup->Controls->Add(this->agedont);
			this->agegroup->Controls->Add(this->agehigh);
			this->agegroup->Controls->Add(this->agesim);
			this->agegroup->Controls->Add(this->agelow);
			this->agegroup->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->agegroup->Location = System::Drawing::Point(76, 101);
			this->agegroup->Name = L"agegroup";
			this->agegroup->Size = System::Drawing::Size(300, 59);
			this->agegroup->TabIndex = 14;
			this->agegroup->TabStop = false;
			this->agegroup->Text = L"Preferences";
			// 
			// agedont
			// 
			this->agedont->AutoSize = true;
			this->agedont->Checked = true;
			this->agedont->Location = System::Drawing::Point(202, 24);
			this->agedont->Name = L"agedont";
			this->agedont->Size = System::Drawing::Size(85, 17);
			this->agedont->TabIndex = 3;
			this->agedont->TabStop = true;
			this->agedont->Text = L"Don\'t care";
			this->agedont->UseVisualStyleBackColor = true;
			// 
			// agehigh
			// 
			this->agehigh->AutoSize = true;
			this->agehigh->Location = System::Drawing::Point(144, 24);
			this->agehigh->Name = L"agehigh";
			this->agehigh->Size = System::Drawing::Size(55, 17);
			this->agehigh->TabIndex = 2;
			this->agehigh->Text = L"Older";
			this->agehigh->UseVisualStyleBackColor = true;
			this->agehigh->CheckedChanged += gcnew System::EventHandler(this, &interestedin::radioButton3_CheckedChanged);
			// 
			// agesim
			// 
			this->agesim->AutoSize = true;
			this->agesim->Font = (gcnew System::Drawing::Font(L"Consolas", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->agesim->Location = System::Drawing::Point(78, 24);
			this->agesim->Name = L"agesim";
			this->agesim->Size = System::Drawing::Size(67, 17);
			this->agesim->TabIndex = 1;
			this->agesim->Text = L"Similar";
			this->agesim->UseVisualStyleBackColor = true;
			// 
			// agelow
			// 
			this->agelow->AutoSize = true;
			this->agelow->Font = (gcnew System::Drawing::Font(L"Consolas", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->agelow->Location = System::Drawing::Point(11, 24);
			this->agelow->Name = L"agelow";
			this->agelow->Size = System::Drawing::Size(67, 17);
			this->agelow->TabIndex = 0;
			this->agelow->Text = L"Younger";
			this->agelow->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->heightdont);
			this->groupBox1->Controls->Add(this->heighthigh);
			this->groupBox1->Controls->Add(this->heightsim);
			this->groupBox1->Controls->Add(this->heightlow);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(76, 184);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(300, 61);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Preferences";
			// 
			// heightdont
			// 
			this->heightdont->AutoSize = true;
			this->heightdont->Checked = true;
			this->heightdont->Location = System::Drawing::Point(202, 24);
			this->heightdont->Name = L"heightdont";
			this->heightdont->Size = System::Drawing::Size(85, 17);
			this->heightdont->TabIndex = 3;
			this->heightdont->TabStop = true;
			this->heightdont->Text = L"Don\'t care";
			this->heightdont->UseVisualStyleBackColor = true;
			// 
			// heighthigh
			// 
			this->heighthigh->AutoSize = true;
			this->heighthigh->Location = System::Drawing::Point(142, 24);
			this->heighthigh->Name = L"heighthigh";
			this->heighthigh->Size = System::Drawing::Size(61, 17);
			this->heighthigh->TabIndex = 2;
			this->heighthigh->Text = L"Higher";
			this->heighthigh->UseVisualStyleBackColor = true;
			// 
			// heightsim
			// 
			this->heightsim->AutoSize = true;
			this->heightsim->Location = System::Drawing::Point(78, 24);
			this->heightsim->Name = L"heightsim";
			this->heightsim->Size = System::Drawing::Size(67, 17);
			this->heightsim->TabIndex = 1;
			this->heightsim->Text = L"Similar";
			this->heightsim->UseVisualStyleBackColor = true;
			// 
			// heightlow
			// 
			this->heightlow->AutoSize = true;
			this->heightlow->Location = System::Drawing::Point(11, 24);
			this->heightlow->Name = L"heightlow";
			this->heightlow->Size = System::Drawing::Size(55, 17);
			this->heightlow->TabIndex = 0;
			this->heightlow->Text = L"Lower";
			this->heightlow->UseVisualStyleBackColor = true;
			// 
			// addbut
			// 
			this->addbut->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addbut->Location = System::Drawing::Point(323, 275);
			this->addbut->Name = L"addbut";
			this->addbut->Size = System::Drawing::Size(54, 23);
			this->addbut->TabIndex = 16;
			this->addbut->Text = L"Add";
			this->addbut->UseVisualStyleBackColor = true;
			this->addbut->Click += gcnew System::EventHandler(this, &interestedin::addbut_Click);
			// 
			// Tagstxt
			// 
			this->Tagstxt->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Tagstxt->Location = System::Drawing::Point(37, 327);
			this->Tagstxt->Multiline = true;
			this->Tagstxt->Name = L"Tagstxt";
			this->Tagstxt->ReadOnly = true;
			this->Tagstxt->Size = System::Drawing::Size(339, 40);
			this->Tagstxt->TabIndex = 32;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(78, 77);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(37, 449);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(320, 87);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 34;
			this->pictureBox2->TabStop = false;
			// 
			// interestedin
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(402, 567);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Tagstxt);
			this->Controls->Add(this->addbut);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->agegroup);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Tagtxt);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"interestedin";
			this->Text = L"Dr.Love";
			this->Load += gcnew System::EventHandler(this, &interestedin::interestedin_Load);
			this->agegroup->ResumeLayout(false);
			this->agegroup->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 t_preference p_age;
			 if(agelow->Checked == true){
				 p_age = LOWER;
			 }else if(agesim->Checked == true){
				 p_age = SIMILAR;
			 }else if(agehigh->Checked == true){
				 p_age = HIGHER;
			 }else{
				 p_age = NONE;
			 }
			 
			 t_preference p_height;
			 if(heightlow->Checked == true){
				 p_height = LOWER;
			 }else if(heightsim->Checked == true){
				 p_height = SIMILAR;
			 }else if(heighthigh->Checked == true){
				 p_height = HIGHER;
			 }else{
				 p_height = NONE;
			 }

			 string st_tag = msclr::interop::marshal_as<std::string>(Tagstxt->Text);
			 Tagstxt->Text = String::Empty;

			 result ^ d= gcnew result(database, p_age, p_height, st_tag);
			 d -> StartPosition = FormStartPosition::Manual;
			 d -> Location = this -> Location;
			 //this->Hide();
			 d->Show();
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tagsearch_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void interestedin_Load(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
