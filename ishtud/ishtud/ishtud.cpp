// ishtud.cpp : main project file.

#include "stdafx.h"
#include "login.h"

using namespace ishtud;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	LoversDatabase dbase;

	dbase.readFile();
	dbase.readTags();

	// Create the main window and run it
	Application::Run(gcnew login(&dbase));

	return 0;
}


void sort(std::vector<Lover>& vec, const std::string tag){ //Function used for sorting by tags (checkTagOrder), used at the search function (LoversDatabase), defined at DrLove.cpp
	if(vec.size()>1){
		bool swapped = true;
		while(swapped == true){
			swapped = false;
			for(unsigned int i = 0; i<vec.size()-1; i++){
				if(vec[i].checkTagOrder(vec[i+1],tag)){
					std::swap(vec[i],vec[i+1]);
					swapped = true;
				};
			};
		};
	};
};

std::istream& operator >> (std::istream& is, t_gender& _gender)
{
    //std::string enumValue;
	int enumValue;
    if (is >> enumValue) {
        if (enumValue == MALE) {
            _gender = MALE;
        }
        else if (enumValue == FEMALE) {
            _gender = FEMALE;
        }
       /*else if (enumValue == "BOTH") {
            _gender = BOTH;
        }*/
    }
    return is;
}

bool operator<(tag t1, tag t2){
    if(t1.amount > t2.amount){
        return true;
    }
    return false;
};

System::String^ toText(const std::string& string_st){
	System::String^ string_r = gcnew System::String(string_st.c_str());
	return string_r;
};

System::String^ toText(const int in){
	std::stringstream ss;
	ss << in;
	std::string tempst = ss.str();
	System::String^ string_r = gcnew System::String(tempst.c_str());
	return string_r;
};

void encrypt(std::string& str){
	for(unsigned int i =0; i<str.size(); i++){
		str[i] += i%6 - 3;
	}
};
void decrypt(std::string& str){
	for(unsigned int i =0; i<str.size();i++){
		str[i] -= i%6 -3;
	}
};