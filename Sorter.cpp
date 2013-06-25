#include "Sorter.h"
#include "PersonIntrinsic.h"
#include <utility>
#include <string>
#include <fstream>

Sorter::Sorter(){
}
Sorter::~Sorter(){
}
void Sorter::fillNames(){
	namesOfValues[0] = "power";
	namesOfValues[1] = "independence";
	namesOfValues[2] = "curiosity";
	namesOfValues[3] = "acceptance";
	namesOfValues[4] = "order";

	namesOfValues[5] = "saving";
	namesOfValues[6] = "honor";
	namesOfValues[7] = "idealism";
	namesOfValues[8] = "social contact";
	namesOfValues[9] = "family";

	namesOfValues[10] = "status";
	namesOfValues[11] = "vengeance";
	namesOfValues[12] = "eating";
	namesOfValues[13] = "physical activity";
	namesOfValues[14] = "tranquility";
}
Sorter::Sorter(std::vector<PersonIntrinsic *> & toCopy){
	//cout <<"inside: " <<toCopy.size() <<endl;
	fillNames();
	for (int counter = 0; counter < toCopy.size(); counter++){
		PersonIntrinsic * temp = toCopy.at(counter);
		//cout << "inside loop: " <<temp->getPower()<<endl;
		if(temp->getRole() == "Faculty"){
			staffValues[0] += temp->getPower();
			//cout << "Staff(Power): " <<staffValues[0] <<endl;
			staffValues[1] += temp->getIndepedence();
			//cout << "Staff(independence): " <<staffValues[1] <<endl;
			staffValues[2] += temp->getCuriosity();
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
			//cout << "Student(power): " << studentValues[0] <<endl;
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
			//cout << "Student(tranquility): " <<studentValues[14] <<endl;
		}
		else if (temp->getRole() == "Neither"){
			neitherValues[0] += temp->getPower();
			//cout << "Neither(power): " <<neitherValues[0] <<endl;
			neitherValues[1] += temp->getIndepedence();
			//cout << "Neither(independence): " <<neitherValues[1] <<endl;
			neitherValues[2] += temp->getCuriosity();
			//cout << "Neither(Curiosity): " <<neitherValues[2] <<endl;
			neitherValues[3] += temp->getAcceptance();
			//cout << "Neither(Acceptance): " <<neitherValues[3] <<endl;
			neitherValues[4] += temp->getOrder();
			//cout << "Neither(order): " <<neitherValues[4] <<endl;
			neitherValues[5] += temp->getSaving();
			//cout << "Neither(saving): " <<neitherValues[5] <<endl;
			neitherValues[6] += temp->getHonor();
			//cout << "Neither(honor): " <<neitherValues[6] <<endl;
			neitherValues[7] += temp->getIdealism();
			//cout << "Neither(idealism): " <<neitherValues[7] <<endl;
			neitherValues[8] += temp->getSocialContact();
			//cout << "Neither(Social Contact): " <<neitherValues[8] <<endl; }
			neitherValues[9] += temp->getFamily();
			//cout << "Neither(family): " <<neitherValues[9] <<endl; }
			neitherValues[10] += temp->getStatus();
			//cout << "Neither(status): " <<neitherValues[10] <<endl; }
			neitherValues[11] += temp->getVengeance();
			//cout << "Neither(vengeance): " <<neitherValues[11] <<endl; }
			neitherValues[12] += temp->getEating();
			//cout << "Neither(eating): " <<neitherValues[12] <<endl; }
			neitherValues[13] += temp->getPhysicalActivity();
			//cout << "Neither(physical activity): " <<neitherValues[13] <<endl; }
			neitherValues[14] += temp->getTranquility();
			//cout << "Neither(tranquility): " <<neitherValues[14] <<endl; 
		}
		else{
			otherValues[0] += temp->getPower();
			//cout <<"other(power): "<< otherValues[0] <<endl;
			otherValues[1] += temp->getIndepedence();
			//cout <<"other(independence): "<< otherValues[1] <<endl;
			otherValues[2] += temp->getCuriosity();
			//cout <<"other(Curiosity): "<< otherValues[2] <<endl;
			otherValues[3] += temp->getAcceptance();
			//cout <<"other(Acceptance): "<< otherValues[3] <<endl;
			otherValues[4] += temp->getOrder();
			//cout <<"other(order): "<< otherValues[4] <<endl;
			otherValues[5] += temp->getSaving();
			//cout <<"other(saving): "<< otherValues[5] <<endl;
			otherValues[6] += temp->getHonor();
			//cout <<"other(honor): "<< otherValues[6] <<endl;
			otherValues[7] += temp->getIdealism();
			//cout <<"other(idealism): "<< otherValues[7] <<endl;
			otherValues[8] += temp->getSocialContact();
			//cout <<"other(Social Contact): "<< otherValues[8] <<endl;
			otherValues[9] += temp->getFamily();
			//cout <<"other(family): "<< otherValues[9] <<endl;
			otherValues[10] += temp->getStatus();
			//cout <<"other(status): "<< otherValues[10] <<endl;
			otherValues[11] += temp->getVengeance();
			//cout <<"other(vengeance): "<< otherValues[11] <<endl;
			otherValues[12] += temp->getEating();
			//cout <<"other(eating): "<< otherValues[12] <<endl;
			otherValues[13] += temp->getPhysicalActivity();
			//cout <<"other(Physical Activity): "<< otherValues[13] <<endl;
			otherValues[14] += temp->getTranquility();
			//cout <<"other(tranquility): "<< otherValues[14] <<endl;
		}
	}
	for (int counter= 0; counter < 15; counter++){
		student.insert(std::pair<int, std::string>(studentValues[counter], namesOfValues[counter]));
		staff.insert(std::pair<int, std::string>(staffValues[counter], namesOfValues[counter]));
		neither.insert(std::pair<int, std::string>(neitherValues[counter], namesOfValues[counter]));
		other.insert(std::pair<int, std::string>(otherValues[counter], namesOfValues[counter]));
	}
}
void Sorter::print(){
	ofstream out("output.txt", ios_base::out);
	{
		cout << "Student:"<<endl;
		out << "Student:"<<endl;
		std::multimap<int, std::string>::reverse_iterator rit;
		int counter =0;
		for (rit=student.rbegin(); counter <15; ++rit){
			if(counter < 3)
				std::cout << rit->first << " => " << rit->second << '\n';
			out << rit->first << " => " << rit->second << '\n';
			counter++;
		}	
		cout <<endl;
		out <<endl;
	}
	{
		cout << "Staff: " <<endl;
		out << "Staff: " <<endl;
		std::multimap<int, std::string>::reverse_iterator rit;
		int counter =0;
		for (rit=staff.rbegin(); counter <15; ++rit){
			if(counter < 3)
				std::cout << rit->first << " => " << rit->second << '\n';
			out << rit->first << " => " << rit->second << '\n';
			counter++;
		}
		cout <<endl;
		out <<endl;
	}
	{
		cout << "Neither: " <<endl;
		out << "Neither: " <<endl;
		std::multimap<int, std::string>::reverse_iterator rit;
		int counter =0;
		for (rit=neither.rbegin(); counter <15; ++rit){
			if(counter < 3)
				std::cout << rit->first << " => " << rit->second << '\n';
			out << rit->first << " => " << rit->second << '\n';
			counter++;
		}
		cout <<endl;
		out <<endl;
	}
	{
		cout << "Other: " <<endl;
		out << "Other: " <<endl;
		std::multimap<int, std::string>::reverse_iterator rit;
		int counter =0;
		for (rit=other.rbegin(); counter <15; ++rit){
			if(counter < 3)
				std::cout << rit->first << " => " << rit->second << '\n';
			out << rit->first << " => " << rit->second << '\n';
			counter++;
		}
		cout <<endl;
		out <<endl;
	}
	//print to text file
	cout << "Total data written to \'output.txt\' within this directory"<<endl<<endl;
}
