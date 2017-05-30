#pragma once

namespace ishtud {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for result
	/// </summary>
	public ref class result : public System::Windows::Forms::Form
	{
	public:
		result(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		result(LoversDatabase* _database, t_preference p_age, t_preference p_height, string st_tags){
			InitializeComponent();
			database = _database;

			vector<string> utags;

			 if(!st_tags.empty()){
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
				}
			 };

			 vector<Lover> found = database->search(p_age, p_height, utags);

			String^ AllText = gcnew String("");
			//unsigned int s = found.size()*1;
			//array<String^, s>^ lines;

			for(unsigned int i = 0; i<found.size(); i++){
				//int agee = found[i].getAge();
				//string age = to_string(agee);
				stringstream ss;
				ss << found[i].getAge();
				string age = ss.str();

				stringstream sss;
				sss << found[i].getHeight();
				string height = sss.str();

				vector<string> tags = found[i].getTags();
				string tagst;
				for(unsigned int j = 0; j<tags.size(); j++){
					tagst += tags[j] + ", ";
				}
				string useri = "Name:   "+ found[i].getName() + "\r\nAge:      " +
					age + "\r\nHeight:  " + height + "\r\nE-mail:   " + found[i].getMail() +
					"\r\n\"" + found[i].getMess() + "\"\r\nTags:   " + tagst + "\r\n------------------\r\n";

				String^ User = gcnew String(useri.c_str());
				AllText = String::Concat(AllText, User);
				//lines[i*1+0] = Name;
			}

			array<String^>^ lines= { AllText };
			results->Lines = lines;
			//results->Text = AllText;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~result()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  closebut;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  results;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Button^  backbutt;







			 LoversDatabase* database;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(result::typeid));
			this->closebut = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->results = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->backbutt = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// closebut
			// 
			this->closebut->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->closebut->Location = System::Drawing::Point(218, 506);
			this->closebut->Name = L"closebut";
			this->closebut->Size = System::Drawing::Size(131, 34);
			this->closebut->TabIndex = 0;
			this->closebut->Text = L"Close";
			this->closebut->UseVisualStyleBackColor = true;
			this->closebut->Click += gcnew System::EventHandler(this, &result::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Result Of Your Matches";
			this->label1->Click += gcnew System::EventHandler(this, &result::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(113, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 2;
			// 
			// results
			// 
			this->results->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->results->Location = System::Drawing::Point(36, 89);
			this->results->Multiline = true;
			this->results->Name = L"results";
			this->results->ReadOnly = true;
			this->results->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->results->Size = System::Drawing::Size(331, 391);
			this->results->TabIndex = 4;
			this->results->TextChanged += gcnew System::EventHandler(this, &result::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(20, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(74, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// backbutt
			// 
			this->backbutt->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->backbutt->Location = System::Drawing::Point(52, 506);
			this->backbutt->Name = L"backbutt";
			this->backbutt->Size = System::Drawing::Size(131, 34);
			this->backbutt->TabIndex = 6;
			this->backbutt->Text = L"Back";
			this->backbutt->UseVisualStyleBackColor = true;
			this->backbutt->Click += gcnew System::EventHandler(this, &result::button1_Click_1);
			// 
			// result
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(402, 567);
			this->Controls->Add(this->backbutt);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->results);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->closebut);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"result";
			this->Text = L"Dr.Love";
			this->Load += gcnew System::EventHandler(this, &result::result_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void result_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}
