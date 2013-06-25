#include "Sorter.h"
#include "PersonIntrinsic.h"
#include <utility>

Sorter::Sorter(){
}
Sorter::~Sorter(){
}
Sorter::Sorter(std::vector<PersonIntrinsic *> & toCopy){
	//cout <<"inside: " <<toCopy.size() <<endl;

	for (int counter = 0; counter < toCopy.size(); counter++){
		PersonIntrinsic * temp = toCopy.at(counter);
		//cout << "inside loop: " <<temp->getPower()<<endl;
		if(temp->getRole() == "Faculty"){
			staffValues[0] += temp->getPower();
			//cout << "Staff(Power): " <<staffValues[0] <<endl;
			staffValues[1] += temp->getIndepedence();
			//cout << "Staff(independence): " <<staffValues[1] <<endl;
			staffValues[2] += temp->getIndepedence();
			//cout << "Staff(curiosity): " <<staffValues[2] <<endl;
			staffValues[3] += temp->getAcceptance();
			//cout << "Staff(Acceptance): " <<staffValues[3] <<endl;
			staffValues[4] += temp->getOrder();
			//cout << "Staff(order): " <<staffValues[4] <<endl;
			staffValues[5] += temp->getSaving();
			//cout << "Staff(Saving): " <<staffValues[5] <<endl;
			staffValues[6] += temp->getHonor();
			//cout << "Staff(Honor): " <<staffValues[6] <<endl;
			staffValues[7] += temp->getIdealism();
			//cout << "Staff(idealism): " <<staffValues[7] <<endl;
			staffValues[8] += temp->getSocialContact();
			//cout << "Staff(Social Contact): " <<staffValues[8] <<endl;
			staffValues[8] += temp->getSocialContact();
			//cout << "Staff(Social Contact): " <<staffValues[8] <<endl;
			staffValues[9] += temp->getFamily();
			//cout << "Staff(family): " <<staffValues[9] <<endl;
			staffValues[10] += temp->getStatus();
			//cout << "Staff(status): " <<staffValues[10] <<endl;
			staffValues[11] += temp->getVengeance();
			//cout << "Staff(vengeance): " <<staffValues[11] <<endl;
			staffValues[12] += temp->getEating();
			//cout << "Staff(Eating): " <<staffValues[12] <<endl;
			staffValues[13] += temp->getPhysicalActivity();
			//cout << "Staff(physical activity): " <<staffValues[13] <<endl;
			staffValues[14] += temp->getTranquility();
			//cout << "Staff(tranquility): " <<staffValues[14] <<endl;
		}
		else if (temp->getRole() == "Student"){
			studentValues[0] += temp->getPower();
			//cout << "Student(power): " << staffValues[0] <<endl;
			studentValues[1] += temp->getIndepedence();
			//cout << "Student(independence): " <<studentValues[1] <<endl;
			studentValues[2] += temp->getCuriosity();
			//cout << "Student(Curiosity): " <<studentValues[2] <<endl;
			studentValues[3] += temp->getAcceptance();
			//cout << "Student(Acceptance): " <<studentValues[3] <<endl;
			studentValues[4] += temp->getOrder();
			//cout << "Student(order): " <<studentValues[4] <<endl;
			studentValues[5] += temp->getSaving();
			//cout << "Student(Saving): " <<studentValues[5] <<endl;
			studentValues[6] += temp->getHonor();
			//cout << "Student(honor): " <<studentValues[6] <<endl;
			studentValues[7] += temp->getIdealism();
			//cout << "Student(idealism): " <<studentValues[7] <<endl;
			studentValues[8] += temp->getSocialContact();
			//cout << "Student(Social Contact): " <<studentValues[8] <<endl;
			studentValues[9] += temp->getFamily();
			//cout << "Student(family): " <<studentValues[9] <<endl;
			studentValues[10] += temp->getStatus();
			//cout << "Student(status): " <<studentValues[10] <<endl;
			studentValues[11] += temp->getVengeance();
			//cout << "Student(vengeance): " <<studentValues[11] <<endl;
			studentValues[12] += temp->getEating();
			//cout << "Student(eating): " <<studentValues[12] <<endl;
			studentValues[13] += temp->getPhysicalActivity();
			//cout << "Student(physical activity): " <<studentValues[13] <<endl;
			studentValues[14] += temp->getTranquility();
			cout << "Student(tranquility): " <<studentValues[14] <<endl;
		else if (temp->getRole() == "Neither"){
			neitherValues[0] += temp->getPower();
			//cout << "Neither(power): " <<staffValues[0] <<endl;
			neitherValues[1] += temp->getIndepedence();
			//cout << "Neither(independence): " <<staffValues[1] <<endl;
			neitherValues[2] += temp->getCuriosity();
			//cout << "Neither(Curiosity): " <<staffValues[2] <<endl;
			neitherValues[3] += temp->getAcceptance();
			//cout << "Neither(Acceptance): " <<staffValues[3] <<endl;
			neitherValues[4] += temp->getOrder();
			//cout << "Neither(order): " <<staffValues[4] <<endl;
			neitherValues[5] += temp->getSaving();
			//cout << "Neither(saving): " <<staffValues[5] <<endl;
			neitherValues[6] += temp->getHonor();
			//cout << "Neither(honor): " <<staffValues[6] <<endl;
			neitherValues[7] += temp->getIdealism();
			//cout << "Neither(idealism): " <<staffValues[7] <<endl;
			neitherValues[8] += temp->getSocialContact();
			//cout << "Neither(Social Contact): " <<staffValues[8] <<endl; }
			neitherValues[9] += temp->getFamily();
			//cout << "Neither(family): " <<staffValues[9] <<endl; }
			neitherValues[10] += temp->getStatus();
			//cout << "Neither(status): " <<staffValues[10] <<endl; }
			neitherValues[11] += temp->getVengeance();
			//cout << "Neither(vengeance): " <<staffValues[11] <<endl; }
			neitherValues[12] += temp->getEating();
			//cout << "Neither(eating): " <<staffValues[12] <<endl; }
			neitherValues[13] += temp->getPhysicalActivity();
			//cout << "Neither(physical activity): " <<staffValues[13] <<endl; }
			neitherValues[14] += temp->getTranquility();
			//cout << "Neither(tranquility): " <<staffValues[14] <<endl; 
		}
		else{
			otherValues[0] += temp->getPower();
			//cout <<"other(power): "<< staffValues[0] <<endl;
			otherValues[1] += temp->getIndepedence();
			//cout <<"other(independence): "<< staffValues[1] <<endl;
			otherValues[2] += temp->getCuriosity();
			//cout <<"other(Curiosity): "<< staffValues[2] <<endl;
			otherValues[3] += temp->getAcceptance();
			//cout <<"other(Acceptance): "<< staffValues[3] <<endl;
			otherValues[4] += temp->getOrder();
			//cout <<"other(order): "<< staffValues[4] <<endl;
			otherValues[5] += temp->getSaving();
			//cout <<"other(saving): "<< staffValues[5] <<endl;
			otherValues[6] += temp->getHonor();
			//cout <<"other(honor): "<< staffValues[6] <<endl;
			otherValues[7] += temp->getIdealism();
			//cout <<"other(idealism): "<< staffValues[7] <<endl;
			otherValues[8] += temp->getSocialContact();
			//cout <<"other(Social Contact): "<< staffValues[8] <<endl;
			otherValues[9] += temp->getFamily();
			//cout <<"other(family): "<< staffValues[9] <<endl;
			otherValues[10] += temp->getStatus();
			//cout <<"other(status): "<< staffValues[10] <<endl;
			otherValues[11] += temp->getVengeance();
			//cout <<"other(vengeance): "<< staffValues[11] <<endl;
			otherValues[12] += temp->getEating();
			//cout <<"other(eating): "<< staffValues[12] <<endl;
			otherValues[13] += temp->getPhysicalActivity();
			//cout <<"other(Physical Activity): "<< staffValues[13] <<endl;
			otherValues[14] += temp->getTranquility();
			//cout <<"other(tranquility): "<< staffValues[14] <<endl;
		}
	}
}
/*
bool Sorter::setValue(IntrinsicValues & map, std::string key, int value){
	if(map.count(key) != 0){
		map.insert(std::pair<std::string key, int>(key, value));
	}
	else{
	}
}
*/
void Sorter::print(){
	int first, second, third;
}
