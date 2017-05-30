#include "StdAfx.h"

bool Lover::checkTagOrder (const Lover& a, const std::string tag){
	bool tt = false;
	bool ta = false;

	for(unsigned int i=0;i<tags.size();i++){
		if(tag == tags[i]){
			tt = true;			//this has the tag
		};
	};

	for(unsigned int i=0;i<a.tags.size();i++){
		if(tag == a.tags[i]){
			ta = true;			//a has the tag
		};
	};

	if(ta == true && tt == false){ //a has the tag and this does not: a is considered to be before this
		return true;
	};
	return false;
};

/*void Lover::display()
{
	std::cout<<std::setw(12)<<setiosflags(std::ios::left)<<"name"<<": "<<std::setw(15)<<setiosflags(std::ios::left)<<this->getName()<<std::endl;
	std::cout<<std::setw(12)<<setiosflags(std::ios::left)<<"password"<<": "<<std::setw(15)<<setiosflags(std::ios::left)<<"*********"<<std::endl;
	std::cout<<std::setw(12)<<setiosflags(std::ios::left)<<"message"<<": "<<std::setw(15)<<setiosflags(std::ios::left)<<this->getMess()<<std::endl;
	std::cout<<std::setw(12)<<setiosflags(std::ios::left)<<"mail"<<": "<<std::setw(15)<<setiosflags(std::ios::left)<<this->getMail()<<std::endl;
	std::cout<<std::setw(12)<<setiosflags(std::ios::left)<<"gender"<<": "<<std::setw(15)<<setiosflags(std::ios::left)<<this->getGender()<<std::endl;
	std::cout<<std::setw(12)<<setiosflags(std::ios::left)<<"age"<<": "<<std::setw(15)<<setiosflags(std::ios::left)<<this->getAge()<<std::endl;
	std::cout<<std::setw(12)<<setiosflags(std::ios::left)<<"heitht"<<": "<<std::setw(15)<<setiosflags(std::ios::left)<<this->getHeight()<<std::endl;
	std::cout<<std::setw(12)<<setiosflags(std::ios::left)<<"tags"<<": ";
	for(unsigned int i = 0; i<tags.size();i++){
		std::cout<<tags[i]<<", ";
	};
	std::cout<<std::endl;
}*/


bool operator==(const Lover& a, const Lover& b){
	if(a.getId() != b.getId()){
		return false;
	}else if(a.getPass() != b.getPass()){
		return false;
	}else if(a.getName() != b.getName()){
		return false;
	}else if(a.getMail() != b.getMail()){
		return false;
	}else if(a.getMess() != b.getMess()){
		return false;
	}else if(a.getAge() != b.getAge()){
		return false;
	}else if(a.getHeight() != b.getHeight()){
		return false;
	}else if(a.getGender() != b.getGender()){
		return false;
	}else if(a.getTags() != b.getTags()){
		return false;
	}else{
		return true;
	}
};