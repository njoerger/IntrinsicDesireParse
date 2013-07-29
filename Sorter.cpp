/**
  * @Author Nicholas Joerger
  * @Version 1.0
  * @License GPL V3.0
  * @Comment
  *    Please use to the full extent of the GPL, if used with other projects not associated with GitHub, please email me at my GitHub email.
 */
#include "Sorter.h"
#include "PersonIntrinsic.h"
#include <utility>
#include <string>
#include <fstream>

Sorter::Sorter(){
	fillNames();
}
Sorter::~Sorter(){
}
void Sorter::fillNames(){
	namesOfValues[0] = "high power";
	namesOfValues[1] = "average power";
	namesOfValues[2] = "low power";

	namesOfValues[3] = "high independence";
	namesOfValues[4] = "average independence";
	namesOfValues[5] = "low independence";

	namesOfValues[6] = "high curiosity";
	namesOfValues[7] = "average curiosity";
	namesOfValues[8] = "low curiosity";

	namesOfValues[9] = "high acceptance";
	namesOfValues[10] = "average acceptance";
	namesOfValues[11] = "low acceptance";

	namesOfValues[12] = "high order";
	namesOfValues[13] = "average order";
	namesOfValues[14] = "low order";

	namesOfValues[15] = "high saving";
	namesOfValues[16] = "average saving";
	namesOfValues[17] = "low saving";

	namesOfValues[18] = "high honor";
	namesOfValues[19] = "average honor";
	namesOfValues[20] = "low honor";

	namesOfValues[21] = "high idealism";
	namesOfValues[22] = "average idealism";
	namesOfValues[23] = "low idealism";

	namesOfValues[24] = "high social contact";
	namesOfValues[25] = "average social contact";
	namesOfValues[26] = "low social contact";

	namesOfValues[27] = "high family";
	namesOfValues[28] = "average family";
	namesOfValues[29] = "low family";

	namesOfValues[30] = "high status";
	namesOfValues[31] = "average status";
	namesOfValues[32] = "low status";

	namesOfValues[33] = "high vengeance";
	namesOfValues[34] = "average vengeance";
	namesOfValues[35] = "low vengeance";

	namesOfValues[36] = "high eating";
	namesOfValues[37] = "average eating";
	namesOfValues[38] = "low eating";

	namesOfValues[39] = "high physical activity";
	namesOfValues[40] = "average physical activity";
	namesOfValues[41] = "low physical activity";

	namesOfValues[42] = "high tranquility";
	namesOfValues[43] = "average tranquility";
	namesOfValues[44] = "low tranquility";
}
Sorter::Sorter(std::vector<PersonIntrinsic *> & toCopy){
	fillNames();		//fills name of categories
	//used to process all records into their intrinsic score
	for (int counter = 0; counter < toCopy.size(); counter++){
		//gets the next object
		PersonIntrinsic * temp = toCopy.at(counter);

		//checks to see if it faculty
		if(temp->getRole() == "Faculty"){
			/*
				from this point on the basic structure is the same
				gets the category and then checks to see if it is 
				positive, negative or neutral then adds to appropriate value

				hindsight makes realize there is a more efficient way to do this
			*/
			int powerVar = temp->getPower();
			if(powerVar == 0)
				staffValues[1]++;
			else if (powerVar > 0)
				staffValues[0]++;
			else if (powerVar < 0)
				staffValues[2]++;

			int independenceVar =  temp->getIndepedence();
			if(independenceVar == 0)
				staffValues[4]++;
			else if (independenceVar > 0)
				staffValues[3]++;
			else if (independenceVar < 0)
				staffValues[5]++;

			int curiosityVar = temp->getCuriosity();
			if(curiosityVar == 0)
				staffValues[7]++;
			else if (curiosityVar > 0)
				staffValues[6]++;
			else if (curiosityVar < 0)
				staffValues[8]++;

			int acceptanceVar = temp->getAcceptance();
			if(acceptanceVar == 0)
				staffValues[10]++;
			else if (acceptanceVar > 0)
				staffValues[9]++;
			else if (acceptanceVar < 0)
				staffValues[11]++;

			int orderVar = temp->getOrder();
			if(orderVar == 0)
				staffValues[13]++;
			else if (orderVar > 0)
				staffValues[12]++;
			else if (orderVar < 0)
				staffValues[14]++;

			int savingVar = temp->getSaving();
			if(savingVar == 0)
				staffValues[16]++;
			else if (savingVar > 0)
				staffValues[15]++;
			else if (savingVar < 0)
				staffValues[17]++;

			int honorVar = temp->getHonor();
			if(honorVar == 0)
				staffValues[19]++;
			else if (honorVar > 0)
				staffValues[18]++;
			else if (honorVar < 0)
				staffValues[20]++;

			int idealismVar = temp->getIdealism();
			if(idealismVar == 0)
				staffValues[22]++;
			else if (idealismVar > 0)
				staffValues[21]++;
			else if (idealismVar < 0)
				staffValues[23]++;

			int socialContactVar = temp->getSocialContact();
			if(socialContactVar == 0)
				staffValues[25]++;
			else if (socialContactVar > 0)
				staffValues[24]++;
			else if (socialContactVar < 0)
				staffValues[26]++;

			int familyVar = temp->getFamily();
			if(familyVar == 0)
				staffValues[28]++;
			else if (familyVar > 0)
				staffValues[27]++;
			else if (familyVar < 0)
				staffValues[29]++;

			int statusVar = temp->getStatus();
			if(statusVar == 0)
				staffValues[31]++;
			else if (statusVar > 0)
				staffValues[30]++;
			else if (statusVar < 0)
				staffValues[32]++;

			int vengeanceVar = temp->getVengeance();
			if(vengeanceVar == 0)
				staffValues[34]++;
			else if (vengeanceVar > 0)
				staffValues[33]++;
			else if (vengeanceVar < 0)
				staffValues[35]++;

			int eatingVar = temp->getEating();
			if(eatingVar == 0)
				staffValues[37]++;
			else if (eatingVar > 0)
				staffValues[36]++;
			else if (eatingVar < 0)
				staffValues[38]++;

			int physicalActivityVar = temp->getPhysicalActivity();
			if(physicalActivityVar == 0)
				staffValues[40]++;
			else if (physicalActivityVar > 0)
				staffValues[39]++;
			else if (physicalActivityVar < 0)
				staffValues[41]++;

			int tranquilityVar = temp->getTranquility();
			if(tranquilityVar == 0)
				staffValues[43]++;
			else if (tranquilityVar > 0)
				staffValues[42]++;
			else if (tranquilityVar < 0)
				staffValues[44]++;
		}
		//checks to see if the role is a student
		else if (temp->getRole() == "Student"){
			/*
				from this point on the basic structure is the same
				gets the category and then checks to see if it is 
				positive, negative or neutral then adds to appropriate value

				hindsight makes realize there is a more efficient way to do this
			*/
			int powerVar = temp->getPower();
			if(powerVar == 0)
				studentValues[1]++;
			else if (powerVar > 0)
				studentValues[0]++;
			else if (powerVar < 0)
				studentValues[2]++;

			int independenceVar =  temp->getIndepedence();
			if(independenceVar == 0)
				studentValues[4]++;
			else if (independenceVar > 0)
				studentValues[3]++;
			else if (independenceVar < 0)
				studentValues[5]++;

			int curiosityVar = temp->getCuriosity();
			if(curiosityVar == 0)
				studentValues[7]++;
			else if (curiosityVar > 0)
				studentValues[6]++;
			else if (curiosityVar < 0)
				studentValues[8]++;

			int acceptanceVar = temp->getAcceptance();
			if(acceptanceVar == 0)
				studentValues[10]++;
			else if (acceptanceVar > 0)
				studentValues[9]++;
			else if (acceptanceVar < 0)
				studentValues[11]++;

			int orderVar = temp->getOrder();
			if(orderVar == 0)
				studentValues[13]++;
			else if (orderVar > 0)
				studentValues[12]++;
			else if (orderVar < 0)
				studentValues[14]++;

			int savingVar = temp->getSaving();
			if(savingVar == 0)
				studentValues[16]++;
			else if (savingVar > 0)
				studentValues[15]++;
			else if (savingVar < 0)
				studentValues[17]++;

			int honorVar = temp->getHonor();
			if(honorVar == 0)
				studentValues[19]++;
			else if (honorVar > 0)
				studentValues[18]++;
			else if (honorVar < 0)
				studentValues[20]++;

			int idealismVar = temp->getIdealism();
			if(idealismVar == 0)
				studentValues[22]++;
			else if (idealismVar > 0)
				studentValues[21]++;
			else if (idealismVar < 0)
				studentValues[23]++;

			int socialContactVar = temp->getSocialContact();
			if(socialContactVar == 0)
				studentValues[25]++;
			else if (socialContactVar > 0)
				studentValues[24]++;
			else if (socialContactVar < 0)
				studentValues[26]++;

			int familyVar = temp->getFamily();
			if(familyVar == 0)
				studentValues[28]++;
			else if (familyVar > 0)
				studentValues[27]++;
			else if (familyVar < 0)
				studentValues[29]++;

			int statusVar = temp->getStatus();
			if(statusVar == 0)
				studentValues[31]++;
			else if (statusVar > 0)
				studentValues[30]++;
			else if (statusVar < 0)
				studentValues[32]++;

			int vengeanceVar = temp->getVengeance();
			if(vengeanceVar == 0)
				studentValues[34]++;
			else if (vengeanceVar > 0)
				studentValues[33]++;
			else if (vengeanceVar < 0)
				studentValues[35]++;
			int eatingVar = temp->getEating();
			if(eatingVar == 0)
				studentValues[37]++;
			else if (eatingVar > 0)
				studentValues[36]++;
			else if (eatingVar < 0)
				studentValues[38]++;

			int physicalActivityVar = temp->getPhysicalActivity();
			if(physicalActivityVar == 0)
				studentValues[40]++;
			else if (physicalActivityVar > 0)
				studentValues[39]++;
			else if (physicalActivityVar < 0)
				studentValues[41]++;

			int tranquilityVar = temp->getTranquility();
			if(tranquilityVar == 0)
				studentValues[43]++;
			else if (tranquilityVar > 0)
				studentValues[42]++;
			else if (tranquilityVar < 0)
				studentValues[44]++;
		}
		//checks to see if the role set to neither
		else if (temp->getRole() == "Neither"){
			/*
				from this point on the basic structure is the same
				gets the category and then checks to see if it is 
				positive, negative or neutral then adds to appropriate value

				hindsight makes realize there is a more efficient way to do this
			*/
			int powerVar = temp->getPower();
			if(powerVar == 0)
				neitherValues[1]++;
			else if (powerVar > 0)
				neitherValues[0]++;
			else if (powerVar < 0)
				neitherValues[2]++;

			int independenceVar =  temp->getIndepedence();
			if(independenceVar == 0)
				neitherValues[4]++;
			else if (independenceVar > 0)
				neitherValues[3]++;
			else if (independenceVar < 0)
				neitherValues[5]++;

			int curiosityVar = temp->getCuriosity();
			if(curiosityVar == 0)
				neitherValues[7]++;
			else if (curiosityVar > 0)
				neitherValues[6]++;
			else if (curiosityVar < 0)
				neitherValues[8]++;

			int acceptanceVar = temp->getAcceptance();
			if(acceptanceVar == 0)
				neitherValues[10]++;
			else if (acceptanceVar > 0)
				neitherValues[9]++;
			else if (acceptanceVar < 0)
				neitherValues[11]++;

			int orderVar = temp->getOrder();
			if(orderVar == 0)
				neitherValues[13]++;
			else if (orderVar > 0)
				neitherValues[12]++;
			else if (orderVar < 0)
				neitherValues[14]++;

			int savingVar = temp->getSaving();
			if(savingVar == 0)
				neitherValues[16]++;
			else if (savingVar > 0)
				neitherValues[15]++;
			else if (savingVar < 0)
				neitherValues[17]++;

			int honorVar = temp->getHonor();
			if(honorVar == 0)
				neitherValues[19]++;
			else if (honorVar > 0)
				neitherValues[18]++;
			else if (honorVar < 0)
				neitherValues[20]++;

			int idealismVar = temp->getIdealism();
			if(idealismVar == 0)
				neitherValues[22]++;
			else if (idealismVar > 0)
				neitherValues[21]++;
			else if (idealismVar < 0)
				neitherValues[23]++;

			int socialContactVar = temp->getSocialContact();
			if(socialContactVar == 0)
				neitherValues[25]++;
			else if (socialContactVar > 0)
				neitherValues[24]++;
			else if (socialContactVar < 0)
				neitherValues[26]++;

			int familyVar = temp->getFamily();
			if(familyVar == 0)
				neitherValues[28]++;
			else if (familyVar > 0)
				neitherValues[27]++;
			else if (familyVar < 0)
				neitherValues[29]++;

			int statusVar = temp->getStatus();
			if(statusVar == 0)
				neitherValues[31]++;
			else if (statusVar > 0)
				neitherValues[30]++;
			else if (statusVar < 0)
				neitherValues[32]++;

			int vengeanceVar = temp->getVengeance();
			if(vengeanceVar == 0)
				neitherValues[34]++;
			else if (vengeanceVar > 0)
				neitherValues[33]++;
			else if (vengeanceVar < 0)
				neitherValues[35]++;

			int eatingVar = temp->getEating();
			if(eatingVar == 0)
				neitherValues[37]++;
			else if (eatingVar > 0)
				neitherValues[36]++;
			else if (eatingVar < 0)
				neitherValues[38]++;

			int physicalActivityVar = temp->getPhysicalActivity();
			if(physicalActivityVar == 0)
				neitherValues[40]++;
			else if (physicalActivityVar > 0)
				neitherValues[39]++;
			else if (physicalActivityVar < 0)
				neitherValues[41]++;

			int tranquilityVar = temp->getTranquility();
			if(tranquilityVar == 0)
				neitherValues[43]++;
			else if (tranquilityVar > 0)
				neitherValues[42]++;
			else if (tranquilityVar < 0)
				neitherValues[44]++;
		}
		//all others will be caught here
		else{
			/*
				from this point on the basic structure is the same
				gets the category and then checks to see if it is 
				positive, negative or neutral then adds to appropriate value

				hindsight makes realize there is a more efficient way to do this
			*/
			int powerVar = temp->getPower();
			if(powerVar == 0)
				otherValues[1]++;
			else if (powerVar > 0)
				otherValues[0]++;
			else if (powerVar < 0)
				otherValues[2]++;

			int independenceVar =  temp->getIndepedence();
			if(independenceVar == 0)
				otherValues[4]++;
			else if (independenceVar > 0)
				otherValues[3]++;
			else if (independenceVar < 0)
				otherValues[5]++;
			int curiosityVar = temp->getCuriosity();
			if(curiosityVar == 0)
				otherValues[7]++;
			else if (curiosityVar > 0)
				otherValues[6]++;
			else if (curiosityVar < 0)
				otherValues[8]++;

			int acceptanceVar = temp->getAcceptance();
			if(acceptanceVar == 0)
				otherValues[10]++;
			else if (acceptanceVar > 0)
				otherValues[9]++;
			else if (acceptanceVar < 0)
				otherValues[11]++;

			int orderVar = temp->getOrder();
			if(orderVar == 0)
				otherValues[13]++;
			else if (orderVar > 0)
				otherValues[12]++;
			else if (orderVar < 0)
				otherValues[14]++;

			int savingVar = temp->getSaving();
			if(savingVar == 0)
				otherValues[16]++;
			else if (savingVar > 0)
				otherValues[15]++;
			else if (savingVar < 0)
				otherValues[17]++;

			int honorVar = temp->getHonor();
			if(honorVar == 0)
				otherValues[19]++;
			else if (honorVar > 0)
				otherValues[18]++;
			else if (honorVar < 0)
				otherValues[20]++;

			int idealismVar = temp->getIdealism();
			if(idealismVar == 0)
				otherValues[22]++;
			else if (idealismVar > 0)
				otherValues[21]++;
			else if (idealismVar < 0)
				otherValues[23]++;

			int socialContactVar = temp->getSocialContact();
			if(socialContactVar == 0)
				otherValues[25]++;
			else if (socialContactVar > 0)
				otherValues[24]++;
			else if (socialContactVar < 0)
				otherValues[26]++;

			int familyVar = temp->getFamily();
			if(familyVar == 0)
				otherValues[28]++;
			else if (familyVar > 0)
				otherValues[27]++;
			else if (familyVar < 0)
				otherValues[29]++;

			int statusVar = temp->getStatus();
			if(statusVar == 0)
				otherValues[31]++;
			else if (statusVar > 0)
				otherValues[30]++;
			else if (statusVar < 0)
				otherValues[32]++;

			int vengeanceVar = temp->getVengeance();
			if(vengeanceVar == 0)
				otherValues[34]++;
			else if (vengeanceVar > 0)
				otherValues[33]++;
			else if (vengeanceVar < 0)
				otherValues[35]++;

			int eatingVar = temp->getEating();
			if(eatingVar == 0)
				otherValues[37]++;
			else if (eatingVar > 0)
				otherValues[36]++;
			else if (eatingVar < 0)
				otherValues[38]++;

			int physicalActivityVar = temp->getPhysicalActivity();
			if(physicalActivityVar == 0)
				otherValues[40]++;
			else if (physicalActivityVar > 0)
				otherValues[39]++;
			else if (physicalActivityVar < 0)
				otherValues[41]++;
			int tranquilityVar = temp->getTranquility();
			if(tranquilityVar == 0)
				otherValues[43]++;
			else if (tranquilityVar > 0)
				otherValues[42]++;
			else if (tranquilityVar < 0)
				otherValues[44]++;
		}
	}
	//this adds the name of the group and its value to a map, allowing it to be autosorted from high to low
	for (int counter= 0; counter < 45; counter++){
		student.insert(std::pair<int, std::string>(studentValues[counter], namesOfValues[counter]));
		staff.insert(std::pair<int, std::string>(staffValues[counter], namesOfValues[counter]));
		neither.insert(std::pair<int, std::string>(neitherValues[counter], namesOfValues[counter]));
		other.insert(std::pair<int, std::string>(otherValues[counter], namesOfValues[counter]));
	}
}
/**
  * prints part of the the information to the screen and the total amount to a text file
 */
void Sorter::print(){
	//saved to a .doc due to *Unix formating
	ofstream out("output.doc", ios_base::out);
	{
		cout << "Student:"<<endl;
		out << "Student:"<<endl;
		//used to iterate through the map
		std::multimap<int, std::string>::reverse_iterator rit;
		int counter =0;
		for (rit=student.rbegin(); counter <45; ++rit){
			//prints the top three to the screen
			if(counter < 3)
				std::cout << rit->first << " => " << rit->second << '\n';
			//prints all to the text file
			out << rit->first << " => " << rit->second << '\n';
			counter++;
		}	
		cout <<endl;
		out <<endl;
	}
	{
		cout << "Staff: " <<endl;
		out << "Staff: " <<endl;
		//used to iterate through the map
		std::multimap<int, std::string>::reverse_iterator rit;
		int counter =0;
		for (rit=staff.rbegin(); counter <45; ++rit){
			//prints the top three to the screen
			if(counter < 3)
				std::cout << rit->first << " => " << rit->second << '\n';
			//prints all to the text file
			out << rit->first << " => " << rit->second << '\n';
			counter++;
		}
		cout <<endl;
		out <<endl;
	}
	{
		cout << "Neither: " <<endl;
		out << "Neither: " <<endl;
		//used to iterate through the map
		std::multimap<int, std::string>::reverse_iterator rit;
		int counter =0;
		for (rit=neither.rbegin(); counter <45; ++rit){
			//prints the top three to the screen
			if(counter < 3)
				std::cout << rit->first << " => " << rit->second << '\n';
			//prints all to the text file
			out << rit->first << " => " << rit->second << '\n';
			counter++;
		}
		cout <<endl;
		out <<endl;
	}
	{
		cout << "Other: " <<endl;
		out << "Other: " <<endl;
		//used to iterate through the map
		std::multimap<int, std::string>::reverse_iterator rit;
		int counter =0;
		for (rit=other.rbegin(); counter <45; ++rit){
			//prints the top three to the screen
			if(counter < 3)
				std::cout << rit->first << " => " << rit->second << '\n';
			//prints all to the text file
			out << rit->first << " => " << rit->second << '\n';
			counter++;
		}
		cout <<endl;
		out <<endl;
	}
	{
		out <<endl << endl << "Student: " ;
		//used to write total tallies of each category
		for (int counter = 0; counter <45; counter++){
			//adds spaces for the second phase of writing to the screen
			if (counter % 3 == 0)
				out <<endl;
			//prints all to the text file
			out << "Student: " << namesOfValues[counter]<< " => " << studentValues[counter]<< '\n';
		}

		out << endl << endl <<"Faculity: ";
		//used to write total tallies of each category
		for (int counter = 0; counter <45; counter++){
			if (counter % 3 == 0)
				out <<endl;
			out << "Faculity: " << namesOfValues[counter]<< " => " << staffValues[counter]<< '\n';
		}

		out <<endl <<endl << "Neither: " ;
		//used to write total tallies of each category
		for (int counter = 0; counter <45; counter++){
			//adds spaces for the second phase of writing to the screen
			if (counter % 3 == 0)
				out <<endl;
			//prints all to the text file
			out << "Neither: " << namesOfValues[counter]<< " => " << neitherValues[counter]<< '\n';
		}

		out << endl << endl<<"Other: " ;
		//used to write total tallies of each category
		for (int counter = 0; counter <45; counter++){
			//adds spaces for the second phase of writing to the screen
			if (counter % 3 == 0)
				out <<endl;
			//prints all to the text file
			out << "Other: " << namesOfValues[counter]<< " => " << otherValues[counter]<< '\n';
		}
	}
	//print to text file
	cout << "Total data written to \'output.txt\' within this directory"<<endl<<endl;
	out.close();
}
