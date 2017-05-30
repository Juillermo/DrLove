#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iomanip>   //setw()

struct tag {
	std::string name;
	int amount;
};

enum t_gender {MALE, FEMALE};
enum t_preference {LOWER, SIMILAR, HIGHER, NONE}; //This is used for the preferences of the searching option, for age and height

class Lover{ //Basic class
    public:
		Lover(){};
		Lover(std::string nid, std::string npass, std::string nname, std::string mess, std::string mail, t_gender ngender, int nage, int nheight) : id(nid), password(npass), name(nname), love_message(mess), email(mail), gender(ngender),age(nage),height(nheight){};
		~Lover(){};

		//void display ();            //Display all the student info (only for MSDOS)############################

		bool checkTagOrder (const Lover& a, const std::string tag); //True only when a has it and the object calling doesn't. Used for sorting
		std::vector<std::string> getTags() const { return tags; };
		void setTags(const std::vector<std::string>& _tags){ tags = _tags; };
		void addTag(const std::string tag){ tags.push_back(tag); };

		std::string getId() const { return id; };           //Getter (id)
		std::string getPass() const { return password; };
		std::string getName() const { return name; }; 
		std::string getMess() const { return love_message; };
		std::string getMail() const { return email; };
		t_gender getGender() const { return gender; };
		int getAge() const { return age; };
		int getHeight() const { return height; };

		void setId(const std::string _id) { id = _id; };  //Setter (name)
		void setPass(const std::string _password){ password = _password; };
		void setName(const std::string _name) { name = _name; };
		void setMess(const std::string mess){ love_message = mess; };
		void setMail(const std::string _email){ email = _email; };
		void setGender(const t_gender _gender) { gender = _gender;};
		void setAge(const int _age){ age = _age; };
		void setHeight(const int _height){ height = _height; };
		
		friend bool operator==(const Lover&, const Lover&);

    private:
        std::string id;
		std::string password;
		std::string name;
		std::string love_message;
		std::string email;
		t_gender gender; //MALE, FEMALE
		int age;
		int height;	//cm
		
		std::vector<std::string> tags;
};

class LoversDatabase{ //Main class, holds all users
    public:
		void readFile();    //Translate the information on Lovers.txt into users and stores it in lovers. Called at the beginning
        void writeFile(const Lover&);   //Translate the information of the lovers into arrays which are written back into Lovers.txt. Called at the end
		void editFile(const Lover&);
		void readTags();	//Reads from the vector lovers all the tags and adds it to the tags system. Called at the beginning/after new user
							//It must take account of the number of times a tag is repeated among the users

		void insertUser(const Lover& lover);   //Adds a new user at the end of the vector
		bool checkUser(const std::string id, const std::string pass);	//At log in, check if user exists and passwords match, in which case returns true and the user passes to be the current user
		bool checkUser(const std::string id, int& pos);		//Checks that that user's id exists already, in which case returns true and his position at the vector

        std::vector<Lover> search(t_preference p_age, t_preference p_height, std::vector<std::string> tags); //Return result according to user's preferences
						//Tags are not exclusive for searching, but they play a role in the order of potential lovers appearance
		
		std::vector<tag> getTags() const { return tags; };
		Lover getCurrent() const{ return currentuser; };

		//Only for debugging ################################
		//void displayAll(){ for(unsigned int i = 0; i<lovers.size(); i++){ std::cout<<"\n"; lovers[i].display(); };};
		//Only for debugging ################################

    private:                             
        std::vector<Lover> lovers;
		std::vector<tag> tags;

		Lover currentuser;
};

void sort(std::vector<Lover>& vec, const std::string tag); //Function used for sorting by tags (checkTagOrder), used at the search function (LoversDatabase), defined at DrLove.cpp

std::istream& operator >> (std::istream& is, t_gender& _gender);
bool operator<(tag t1, tag t2);

System::String^ toText(const std::string&);
System::String^ toText(const int);

void encrypt(std::string& str);
void decrypt(std::string& str);
