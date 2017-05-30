#include "StdAfx.h"
//#include "DrLove.h"

using namespace std;

void LoversDatabase::readFile(){   //Translates the information on Lovers.txt into users
	ifstream ifs("loversDatabase.txt");	//and stores it in lovers. Called at the beginning
	if(!ifs.fail()||!ifs.eof()){
		string id, pwd, name, mess, mail;
		t_gender gender;    
		int age, height;			
		string tagstring, line;
		unsigned int i = 0;
		while(getline(ifs, line)){
			decrypt(line);
			switch (i++){
			case 0:
				id = line;
				break;
			case 1:
				pwd = line;
				break;
			case 2:
				name = line;
				break;
			case 3:
				mess = line;
				break;
			case 4:
				mail = line;
				break;
			case 5:
				stringstream(line)>>gender;
				break;
			case 6:
				stringstream(line)>>age;
				break;
			case 7:
				stringstream(line)>>height;
				break;
			case 8:
				tagstring = line;
				break;
			case 9:
				if(line=="#"){
					Lover temp(id,pwd,name,mess,mail,gender,age,height);
						if(tagstring != "null"){
						string temptag;
						stringstream ss;
						ss<<tagstring;
						while(ss>>temptag){
							for(unsigned int j=0; j<temptag.size(); j++){
								if(temptag[j]=='_'){ temptag[j]=' '; }
							}
							temp.addTag(temptag);
						};
					};
					lovers.push_back(temp);
				}else{
					exit(1);
				}
				i = 0;
				break;
			};			

		}
		ifs.close();
	}
}


void LoversDatabase::writeFile(const Lover& nuser){   //Translate the information of the lovers 
	ofstream ofs;			//arrays which are written back into Lovers.txt. Called at the end
	ofs.open("loversDatabase.txt", ios::out | ios::app);  //if exist, adds the data in the end of the file
	if(ofs.fail()){
		exit(1);
	}

	vector<string> temptags = nuser.getTags();
	string onelongtag;
	unsigned int j;
	for(j = 0; j<temptags.size();j++){
		for(unsigned int i = 0; i<temptags[j].size(); i++){
			if(temptags[j][i]==' '){ temptags[j][i]='_'; }
		}
		onelongtag += temptags[j] + " ";
	};
	if(j == 0){ onelongtag = "null"; }

	stringstream ss;
	ss<<nuser.getId()<<endl<<nuser.getPass()<<endl<<nuser.getName()<<endl<<nuser.getMess()
		<<endl<<nuser.getMail()<<endl<<nuser.getGender()<<endl<<nuser.getAge()<<endl
		<<nuser.getHeight()<<endl<<onelongtag<<endl<<"#"<<endl;
	
	string all;
	string one;
	while(getline(ss, one)){
		encrypt(one);
		all += one + "\n";
	}
	ofs<<all;
	
	ofs.close();
}

void LoversDatabase::editFile(const Lover& euser){
	ifstream originalf("loversDatabase.txt");
	ofstream newf("tempFile.txt");

	string line;
	int i = 0;
	while(getline(originalf,line)){
		decrypt(line);
		if(line == euser.getId()){
			i = 9;
		}else if(i != 0){
			i--;
		}else{
			encrypt(line);
			newf<<line<<endl;
		}
	}
	originalf.close();
	newf.close();
	remove("loversDatabase.txt");
	rename("tempFile.txt", "loversDatabase.txt");
	this->writeFile(euser);
};

void LoversDatabase::readTags(){
	tags.clear();
	for(unsigned int i=0; i<lovers.size(); i++){		//For every lover
		vector<string> lovertags = lovers[i].getTags();

		for(unsigned int j=0; j<lovertags.size(); j++){	//and for every tags he has,
			bool existed = false;

			for(unsigned int k=0; k<tags.size(); k++){	//if any of the tag in the database
				if(lovertags[j] == tags[k].name){		//is equal to that tag of the lover
					tags[k].amount++;					//the tag in the database is increased by one,
					existed = true;
					break;
				};
			};

			if(existed == false){						//if not
				tag newtag;
				newtag.name = lovertags[j];
				newtag.amount = 1;
				tags.push_back(newtag);					//the tag is added to the database.
			};
		};

	};
	sort(tags.begin(),tags.end()); //sort tags in order of popularity
};

void LoversDatabase::insertUser(const Lover& lover){
	int i;
	if(checkUser(lover.getId(), i)){
		lovers[i] = lover;
		this->editFile(lover);
	}else{
		lovers.push_back(lover);
		this->writeFile(lover);
	}
	currentuser = lover;
};

bool LoversDatabase::checkUser(const string id, const string pass){
	for(unsigned int i=0; i<lovers.size(); i++){
		if(id == lovers[i].getId()){
			if(pass == lovers[i].getPass()){
				currentuser = lovers[i];
				return true;
			}else{
				return false;
			};
		};
	};
	return false;
};

bool LoversDatabase::checkUser(const string id, int& pos){
	for(unsigned int i=0; i<lovers.size(); i++){
		if(id == lovers[i].getId()){
			pos = i;
			return true;
		};
	};
	return false;
};

vector<Lover> LoversDatabase::search(t_preference p_age, t_preference p_height, vector<string> searchtags){
	vector<Lover> found;

	for(unsigned int i=0; i<lovers.size(); i++){
		if(currentuser.getGender() != lovers[i].getGender()){
			int diff = lovers[i].getAge() - currentuser.getAge();
			bool valid = true;
			switch(p_age){
			case LOWER:
				if(diff>=0){ valid = false; };
				break;
			case SIMILAR:
				if(abs(diff)>1){ valid = false; };
				break;
			case HIGHER:
				if(diff<=0){ valid = false; };
				break;
			};
			if(valid == true){
				diff = lovers[i].getHeight() - currentuser.getHeight();
				switch(p_height){
				case LOWER:
					if(diff>=-5){ valid = false; };
					break;
				case SIMILAR:
					if(abs(diff)>5){ valid = false; };
					break;
				case HIGHER:
					if(diff<=5){ valid = false; };
					break;
				};

				if(valid == true){
					found.push_back(lovers[i]);
				};
			};
		}
	}

	for(unsigned int i = 0; i<searchtags.size();i++){
		sort(found, searchtags[i]); 
	};

	return found;
};