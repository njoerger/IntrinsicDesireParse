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
	//cout <<"inside: " <<toCopy.size() <<endl;
	fillNames();
	for (int counter = 0; counter < toCopy.size(); counter++){
		PersonIntrinsic * temp = toCopy.at(counter);
		//cout << "inside loop: " <<temp->getPower()<<endl;
		if(temp->getRole() == "Faculty"){
			int powerVar = temp->getPower();
			if(powerVar == 0)
				staffValues[1]++;
			else if (powerVar > 0)
				staffValues[0]++;
				//staffValues[0] += powerVar;
			else if (powerVar < 0)
				staffValues[2]++;
				//staffValues[2] -= powerVar;
			//cout << "Staff(Power): " <<staffValues[0] <<endl;

			int independenceVar =  temp->getIndepedence();
			if(independenceVar == 0)
				staffValues[4]++;
			else if (independenceVar > 0)
				staffValues[3]++;
				//staffValues[3] += independenceVar;
			else if (independenceVar < 0)
				staffValues[5]++;
				//staffValues[5]-= independenceVar;
			//cout << "Staff(independence): " <<staffValues[1] <<endl;
			int curiosityVar = temp->getCuriosity();
			if(curiosityVar == 0)
				staffValues[7]++;
			else if (curiosityVar > 0)
				staffValues[6]++;
				//staffValues[6] += curiosityVar;
			else if (curiosityVar < 0)
				staffValues[8]++;
				//staffValues[8]-= curiosityVar;
			//cout << "Staff(curiosity): " <<staffValues[2] <<endl;

			int acceptanceVar = temp->getAcceptance();
			if(acceptanceVar == 0)
				staffValues[10]++;
			else if (acceptanceVar > 0)
				staffValues[9]++;
				//staffValues[9]+=acceptanceVar;
			else if (acceptanceVar < 0)
				staffValues[11]++;
				//staffValues[11]-=acceptanceVar;
			//cout << "Staff(Acceptance): " <<staffValues[3] <<endl;

			int orderVar = temp->getOrder();
			if(orderVar == 0)
				staffValues[13]++;
			else if (orderVar > 0)
				staffValues[12]++;
				//staffValues[12]+=orderVar;
			else if (orderVar < 0)
				staffValues[14]++;
				//staffValues[14]-=orderVar;
			//cout << "Staff(order): " <<staffValues[4] <<endl;

			int savingVar = temp->getSaving();
			if(savingVar == 0)
				staffValues[16]++;
			else if (savingVar > 0)
				staffValues[15]++;
				//staffValues[15] += savingVar;
			else if (savingVar < 0)
				staffValues[17]++;
				//staffValues[17] -= savingVar;
			//cout << "Staff(Saving): " <<staffValues[5] <<endl;

			int honorVar = temp->getHonor();
			if(honorVar == 0)
				staffValues[19]++;
			else if (honorVar > 0)
				staffValues[18]++;
				//staffValues[18] += honorVar;
			else if (honorVar < 0)
				staffValues[20]++;
				//staffValues[20] -= honorVar;;
			//cout << "Staff(Honor): " <<staffValues[6] <<endl;

			int idealismVar = temp->getIdealism();
			if(idealismVar == 0)
				staffValues[22]++;
			else if (idealismVar > 0)
				staffValues[21]++;
				//staffValues[21] += idealismVar;
			else if (idealismVar < 0)
				staffValues[23]++;
				//staffValues[23] -= idealismVar;
			//cout << "Staff(idealism): " <<staffValues[7] <<endl;

			int socialContactVar = temp->getSocialContact();
			if(socialContactVar == 0)
				staffValues[25]++;
			else if (socialContactVar > 0)
				staffValues[24]++;
				//staffValues[24] += socialContactVar;
			else if (socialContactVar < 0)
				staffValues[26]++;
				//staffValues[26] -= socialContactVar;
			//cout << "Staff(Social Contact): " <<staffValues[8] <<endl;

			int familyVar = temp->getFamily();
			if(familyVar == 0)
				staffValues[28]++;
			else if (familyVar > 0)
				staffValues[27]++;
				//staffValues[27] += familyVar;
			else if (familyVar < 0)
				staffValues[29]++;
				//staffValues[29] -= familyVar;
			//cout << "Staff(family): " <<staffValues[9] <<endl;

			int statusVar = temp->getStatus();
			if(statusVar == 0)
				staffValues[31]++;
			else if (statusVar > 0)
				staffValues[30]++;
				//staffValues[30] += statusVar;
			else if (statusVar < 0)
				staffValues[32]++;
				//staffValues[32] -= statusVar;
			//cout << "Staff(status): " <<staffValues[10] <<endl;

			int vengeanceVar = temp->getVengeance();
			if(vengeanceVar == 0)
				staffValues[34]++;
			else if (vengeanceVar > 0)
				staffValues[33]++;
				//staffValues[33] += vengeanceVar;
			else if (vengeanceVar < 0)
				staffValues[35]++;
				//staffValues[35] -= vengeanceVar;
			//cout << "Staff(vengeance): " <<staffValues[11] <<endl;
			int eatingVar = temp->getEating();
			if(eatingVar == 0)
				staffValues[37]++;
			else if (eatingVar > 0)
				staffValues[36]++;
				//staffValues[36] += eatingVar;
			else if (eatingVar < 0)
				staffValues[38]++;
				//staffValues[38] -= eatingVar;
			//cout << "Staff(Eating): " <<staffValues[12] <<endl;

			int physicalActivityVar = temp->getPhysicalActivity();
			if(physicalActivityVar == 0)
				staffValues[40]++;
			else if (physicalActivityVar > 0)
				staffValues[39]++;
				//staffValues[41] += physicalActivityVar;
			else if (physicalActivityVar < 0)
				staffValues[41]++;
				//staffValues[39] -= physicalActivityVar;
			//cout << "Staff(physical activity): " <<staffValues[13] <<endl;
			int tranquilityVar = temp->getTranquility();
			if(tranquilityVar == 0)
				staffValues[43]++;
			else if (tranquilityVar > 0)
				staffValues[42]++;
				//staffValues[42] += tranquilityVar;
			else if (tranquilityVar < 0)
				staffValues[44]++;
				//staffValues[44] -= tranquilityVar;
			//cout << "Staff(tranquility): " <<staffValues[14] <<endl;
		}
		else if (temp->getRole() == "Student"){
			int powerVar = temp->getPower();
			if(powerVar == 0)
				studentValues[1]++;
			else if (powerVar > 0)
				studentValues[0]++;
				//studentValues[0] += powerVar;
			else if (powerVar < 0)
				studentValues[2]++;
				//studentValues[2] -= powerVar;
			//cout << "Staff(Power): " <<studentValues[0] <<endl;

			int independenceVar =  temp->getIndepedence();
			if(independenceVar == 0)
				studentValues[4]++;
			else if (independenceVar > 0)
				studentValues[3]++;
				//studentValues[3] += independenceVar;
			else if (independenceVar < 0)
				studentValues[5]++;
				//studentValues[5] -= independenceVar;
			//cout << "Staff(independence): " <<studentValues[1] <<endl;
			int curiosityVar = temp->getCuriosity();
			if(curiosityVar == 0)
				studentValues[7]++;
			else if (curiosityVar > 0)
				studentValues[6]++;
				//studentValues[6] += curiosityVar;
			else if (curiosityVar < 0)
				studentValues[8]++;
				//studentValues[8] -= curiosityVar;
			//cout << "Staff(curiosity): " <<studentValues[2] <<endl;

			int acceptanceVar = temp->getAcceptance();
			if(acceptanceVar == 0)
				studentValues[10]++;
			else if (acceptanceVar > 0)
				studentValues[9]++;
				//studentValues[9] += acceptanceVar;
			else if (acceptanceVar < 0)
				studentValues[11]++;
				//studentValues[11] -= acceptanceVar;
			//cout << "Staff(Acceptance): " <<studentValues[3] <<endl;

			int orderVar = temp->getOrder();
			if(orderVar == 0)
				studentValues[13]++;
			else if (orderVar > 0)
				studentValues[12]++;
				//studentValues[12] += orderVar;
			else if (orderVar < 0)
				studentValues[14]++;
				//studentValues[14] -= orderVar;
			//cout << "Staff(order): " <<studentValues[4] <<endl;

			int savingVar = temp->getSaving();
			if(savingVar == 0)
				studentValues[16]++;
			else if (savingVar > 0)
				studentValues[15]++;
				//studentValues[15] += savingVar;
			else if (savingVar < 0)
				studentValues[17]++;
				//studentValues[17] -= savingVar;
			//cout << "Staff(Saving): " <<studentValues[5] <<endl;

			int honorVar = temp->getHonor();
			if(honorVar == 0)
				studentValues[19]++;
			else if (honorVar > 0)
				studentValues[18]++;
				//studentValues[18] += honorVar;
			else if (honorVar < 0)
				studentValues[20]++;
				//studentValues[20] -= honorVar;
			//cout << "Staff(Honor): " <<studentValues[6] <<endl;

			int idealismVar = temp->getIdealism();
			if(idealismVar == 0)
				studentValues[22]++;
			else if (idealismVar > 0)
				studentValues[21]++;
				//studentValues[21] += idealismVar;
			else if (idealismVar < 0)
				studentValues[23]++;
				//studentValues[23] -= idealismVar;
			//cout << "Staff(idealism): " <<studentValues[7] <<endl;

			int socialContactVar = temp->getSocialContact();
			if(socialContactVar == 0)
				studentValues[25]++;
			else if (socialContactVar > 0)
				studentValues[24]++;
				//studentValues[24] += socialContactVar;
			else if (socialContactVar < 0)
				studentValues[26]++;
				//studentValues[26] -= socialContactVar;
			//cout << "Staff(Social Contact): " <<studentValues[8] <<endl;

			int familyVar = temp->getFamily();
			if(familyVar == 0)
				studentValues[28]++;
			else if (familyVar > 0)
				studentValues[27]++;
				//studentValues[27] += familyVar;
			else if (familyVar < 0)
				studentValues[29]++;
				//studentValues[29] -= familyVar;
			//cout << "Staff(family): " <<studentValues[9] <<endl;

			int statusVar = temp->getStatus();
			if(statusVar == 0)
				studentValues[31]++;
			else if (statusVar > 0)
				studentValues[30]++;
				//studentValues[30] += statusVar;
			else if (statusVar < 0)
				studentValues[32]++;
				//studentValues[32] -= statusVar;
			//cout << "Staff(status): " <<studentValues[10] <<endl;

			int vengeanceVar = temp->getVengeance();
			if(vengeanceVar == 0)
				studentValues[34]++;
			else if (vengeanceVar > 0)
				studentValues[33]++;
				//studentValues[33] += vengeanceVar;
			else if (vengeanceVar < 0)
				studentValues[35]++;
				//studentValues[35] -= vengeanceVar;
			//cout << "Staff(vengeance): " <<studentValues[11] <<endl;
			int eatingVar = temp->getEating();
			if(eatingVar == 0)
				studentValues[37]++;
			else if (eatingVar > 0)
				studentValues[36]++;
				//studentValues[36] += eatingVar;
			else if (eatingVar < 0)
				studentValues[38]++;
				//studentValues[38] -= eatingVar;
			//cout << "Staff(Eating): " <<studentValues[12] <<endl;

			int physicalActivityVar = temp->getPhysicalActivity();
			if(physicalActivityVar == 0)
				studentValues[40]++;
			else if (physicalActivityVar > 0)
				studentValues[39]++;
				//studentValues[41] += physicalActivityVar;
			else if (physicalActivityVar < 0)
				studentValues[41]++;
				//studentValues[39] -= physicalActivityVar;
			//cout << "Staff(physical activity): " <<studentValues[13] <<endl;

			int tranquilityVar = temp->getTranquility();
			if(tranquilityVar == 0)
				studentValues[43]++;
			else if (tranquilityVar > 0)
				studentValues[42]++;
				//studentValues[42] += tranquilityVar;
			else if (tranquilityVar < 0)
				studentValues[44]++;
				//studentValues[44] -= tranquilityVar;
		}
		else if (temp->getRole() == "Neither"){
			int powerVar = temp->getPower();
			if(powerVar == 0)
				neitherValues[1]++;
			else if (powerVar > 0)
				neitherValues[0]++;
				//neitherValues[0] += powerVar;
			else if (powerVar < 0)
				neitherValues[2]++;
				//neitherValues[2] -= powerVar;
			//cout << "Staff(Power): " <<neitherValues[0] <<endl;

			int independenceVar =  temp->getIndepedence();
			if(independenceVar == 0)
				neitherValues[4]++;
			else if (independenceVar > 0)
				neitherValues[3]++;
				//neitherValues[3] += independenceVar;
			else if (independenceVar < 0)
				neitherValues[5]++;
				//neitherValues[5] -= independenceVar;
			//cout << "Staff(independence): " <<neitherValues[1] <<endl;

			int curiosityVar = temp->getCuriosity();
			if(curiosityVar == 0)
				neitherValues[7]++;
			else if (curiosityVar > 0)
				neitherValues[6]++;
				//neitherValues[6] += curiosityVar;
			else if (curiosityVar < 0)
				neitherValues[8]++;
				//neitherValues[8] -= curiosityVar;
			//cout << "Staff(curiosity): " <<neitherValues[2] <<endl;

			int acceptanceVar = temp->getAcceptance();
			if(acceptanceVar == 0)
				neitherValues[10]++;
			else if (acceptanceVar > 0)
				neitherValues[9]++;
				//neitherValues[9] += acceptanceVar;
			else if (acceptanceVar < 0)
				neitherValues[11]++;
				//neitherValues[11] -= acceptanceVar;
			//cout << "Staff(Acceptance): " <<neitherValues[3] <<endl;

			int orderVar = temp->getOrder();
			if(orderVar == 0)
				neitherValues[13]++;
			else if (orderVar > 0)
				neitherValues[12]++;
				//neitherValues[12] += orderVar;
			else if (orderVar < 0)
				neitherValues[14]++;
				//neitherValues[14] -= orderVar;
			//cout << "Staff(order): " <<neitherValues[4] <<endl;

			int savingVar = temp->getSaving();
			if(savingVar == 0)
				neitherValues[16]++;
			else if (savingVar > 0)
				neitherValues[15]++;
				//neitherValues[15] += savingVar;
			else if (savingVar < 0)
				neitherValues[17]++;
				//neitherValues[17] -= savingVar;
			//cout << "Staff(Saving): " <<neitherValues[5] <<endl;

			int honorVar = temp->getHonor();
			if(honorVar == 0)
				neitherValues[19]++;
			else if (honorVar > 0)
				neitherValues[18]++;
				//neitherValues[18] += honorVar;
			else if (honorVar < 0)
				neitherValues[20]++;
				//neitherValues[20] -= honorVar;
			//cout << "Staff(Honor): " <<neitherValues[6] <<endl;

			int idealismVar = temp->getIdealism();
			if(idealismVar == 0)
				neitherValues[22]++;
			else if (idealismVar > 0)
				neitherValues[21]++;
				//neitherValues[21] += idealismVar;
			else if (idealismVar < 0)
				neitherValues[23]++;
				//neitherValues[23] -= idealismVar;
			//cout << "Staff(idealism): " <<neitherValues[7] <<endl;

			int socialContactVar = temp->getSocialContact();
			if(socialContactVar == 0)
				neitherValues[25]++;
			else if (socialContactVar > 0)
				neitherValues[24]++;
				//neitherValues[24] += socialContactVar;
			else if (socialContactVar < 0)
				neitherValues[26]++;
				//neitherValues[26] -= socialContactVar;
			//cout << "Staff(Social Contact): " <<neitherValues[8] <<endl;

			int familyVar = temp->getFamily();
			if(familyVar == 0)
				neitherValues[28]++;
			else if (familyVar > 0)
				neitherValues[27]++;
				//neitherValues[27] += familyVar;
			else if (familyVar < 0)
				neitherValues[29]++;
				//neitherValues[29] -= familyVar;
			//cout << "Staff(family): " <<neitherValues[9] <<endl;

			int statusVar = temp->getStatus();
			if(statusVar == 0)
				neitherValues[31]++;
			else if (statusVar > 0)
				neitherValues[30]++;
				//neitherValues[30] += statusVar;
			else if (statusVar < 0)
				neitherValues[32]++;
				//neitherValues[32] -= statusVar;
			//cout << "Staff(status): " <<neitherValues[10] <<endl;

			int vengeanceVar = temp->getVengeance();
			if(vengeanceVar == 0)
				neitherValues[34]++;
			else if (vengeanceVar > 0)
				neitherValues[33]++;
				//neitherValues[33] += vengeanceVar;
			else if (vengeanceVar < 0)
				neitherValues[35]++;
				//neitherValues[35] -= vengeanceVar;
			//cout << "Staff(vengeance): " <<neitherValues[11] <<endl;

			int eatingVar = temp->getEating();
			if(eatingVar == 0)
				neitherValues[37]++;
			else if (eatingVar > 0)
				neitherValues[36]++;
				//neitherValues[36] += eatingVar;
			else if (eatingVar < 0)
				neitherValues[38]++;
				//neitherValues[38] -= eatingVar;
			//cout << "Staff(Eating): " <<neitherValues[12] <<endl;

			int physicalActivityVar = temp->getPhysicalActivity();
			if(physicalActivityVar == 0)
				neitherValues[40]++;
			else if (physicalActivityVar > 0)
				neitherValues[39]++;
				//neitherValues[41] += physicalActivityVar;
			else if (physicalActivityVar < 0)
				neitherValues[41]++;
				//neitherValues[39] -= physicalActivityVar;
			//cout << "Staff(physical activity): " <<neitherValues[13] <<endl;

			int tranquilityVar = temp->getTranquility();
			if(tranquilityVar == 0)
				neitherValues[43]++;
			else if (tranquilityVar > 0)
				neitherValues[42]++;
				//neitherValues[42] += tranquilityVar;
			else if (tranquilityVar < 0)
				neitherValues[44]++;
				//neitherValues[44] -= tranquilityVar;
		}
		else{
			int powerVar = temp->getPower();
			if(powerVar == 0)
				otherValues[1]++;
			else if (powerVar > 0)
				otherValues[0]++;
				//otherValues[0] += powerVar;
			else if (powerVar < 0)
				otherValues[2]++;
				//otherValues[2] -= powerVar;
			//cout << "Staff(Power): " <<otherValues[0] <<endl;

			int independenceVar =  temp->getIndepedence();
			if(independenceVar == 0)
				otherValues[4]++;
			else if (independenceVar > 0)
				otherValues[3]++;
				//otherValues[3] += independenceVar;
			else if (independenceVar < 0)
				otherValues[5]++;
				//otherValues[5] -= independenceVar;
			//cout << "Staff(independence): " <<otherValues[1] <<endl;
			int curiosityVar = temp->getCuriosity();
			if(curiosityVar == 0)
				otherValues[7]++;
			else if (curiosityVar > 0)
				otherValues[6]++;
				//otherValues[6] += curiosityVar;
			else if (curiosityVar < 0)
				otherValues[8]++;
				//otherValues[8] -= curiosityVar;
			//cout << "Staff(curiosity): " <<otherValues[2] <<endl;

			int acceptanceVar = temp->getAcceptance();
			if(acceptanceVar == 0)
				otherValues[10]++;
			else if (acceptanceVar > 0)
				otherValues[9]++;
				//otherValues[9] += acceptanceVar;
			else if (acceptanceVar < 0)
				otherValues[11]++;
				//otherValues[11] -= acceptanceVar;
			//cout << "Staff(Acceptance): " <<otherValues[3] <<endl;

			int orderVar = temp->getOrder();
			if(orderVar == 0)
				otherValues[13]++;
			else if (orderVar > 0)
				otherValues[12]++;
				//otherValues[12] += orderVar;
			else if (orderVar < 0)
				otherValues[14]++;
				//otherValues[14] -= orderVar;
			//cout << "Staff(order): " <<otherValues[4] <<endl;

			int savingVar = temp->getSaving();
			if(savingVar == 0)
				otherValues[16]++;
			else if (savingVar > 0)
				otherValues[15]++;
				//otherValues[15] += savingVar;
			else if (savingVar < 0)
				otherValues[17]++;
				//otherValues[17] -= savingVar;
			//cout << "Staff(Saving): " <<otherValues[5] <<endl;

			int honorVar = temp->getHonor();
			if(honorVar == 0)
				otherValues[19]++;
			else if (honorVar > 0)
				otherValues[18]++;
				//otherValues[18] += honorVar;
			else if (honorVar < 0)
				otherValues[20]++;
				//otherValues[20] -= honorVar;
			//cout << "Staff(Honor): " <<otherValues[6] <<endl;

			int idealismVar = temp->getIdealism();
			if(idealismVar == 0)
				otherValues[22]++;
			else if (idealismVar > 0)
				otherValues[21]++;
				//otherValues[21] += idealismVar;
			else if (idealismVar < 0)
				otherValues[23]++;
				//otherValues[23] -= idealismVar;
			//cout << "Staff(idealism): " <<otherValues[7] <<endl;

			int socialContactVar = temp->getSocialContact();
			if(socialContactVar == 0)
				otherValues[25]++;
			else if (socialContactVar > 0)
				otherValues[24]++;
				//otherValues[24] += socialContactVar;
			else if (socialContactVar < 0)
				otherValues[26]++;
				//otherValues[26] -= socialContactVar;
			//cout << "Staff(Social Contact): " <<otherValues[8] <<endl;

			int familyVar = temp->getFamily();
			if(familyVar == 0)
				otherValues[28]++;
			else if (familyVar > 0)
				otherValues[27]++;
				//otherValues[27] += familyVar;
			else if (familyVar < 0)
				otherValues[29]++;
				//otherValues[29] -= familyVar;
			//cout << "Staff(family): " <<otherValues[9] <<endl;

			int statusVar = temp->getStatus();
			if(statusVar == 0)
				otherValues[31]++;
			else if (statusVar > 0)
				otherValues[30]++;
				//otherValues[30] += statusVar;
			else if (statusVar < 0)
				otherValues[32]++;
				//otherValues[32] -= statusVar;
			//cout << "Staff(status): " <<otherValues[10] <<endl;

			int vengeanceVar = temp->getVengeance();
			if(vengeanceVar == 0)
				otherValues[34]++;
			else if (vengeanceVar > 0)
				otherValues[33]++;
				//otherValues[33] += vengeanceVar;
			else if (vengeanceVar < 0)
				otherValues[35]++;
				//otherValues[35] -= vengeanceVar;
			//cout << "Staff(vengeance): " <<otherValues[11] <<endl;

			int eatingVar = temp->getEating();
			if(eatingVar == 0)
				otherValues[37]++;
			else if (eatingVar > 0)
				otherValues[36]++;
				//otherValues[36] += eatingVar;
			else if (eatingVar < 0)
				otherValues[38]++;
				//otherValues[38] -= eatingVar;
			//cout << "Staff(Eating): " <<otherValues[12] <<endl;

			int physicalActivityVar = temp->getPhysicalActivity();
			if(physicalActivityVar == 0)
				otherValues[40]++;
			else if (physicalActivityVar > 0)
				otherValues[39]++;
				//otherValues[41] += physicalActivityVar;
			else if (physicalActivityVar < 0)
				otherValues[41]++;
				//otherValues[39] -= physicalActivityVar;
			//cout << "Staff(physical activity): " <<otherValues[13] <<endl;
			int tranquilityVar = temp->getTranquility();
			if(tranquilityVar == 0)
				otherValues[43]++;
			else if (tranquilityVar > 0)
				otherValues[42]++;
				//otherValues[42] += tranquilityVar;
			else if (tranquilityVar < 0)
				otherValues[44]++;
				//otherValues[44] -= tranquilityVar;
		}
	}
	for (int counter= 0; counter < 45; counter++){
		student.insert(std::pair<int, std::string>(studentValues[counter], namesOfValues[counter]));
		staff.insert(std::pair<int, std::string>(staffValues[counter], namesOfValues[counter]));
		neither.insert(std::pair<int, std::string>(neitherValues[counter], namesOfValues[counter]));
		other.insert(std::pair<int, std::string>(otherValues[counter], namesOfValues[counter]));
	}
}
void Sorter::print(){
	ofstream out("output.doc", ios_base::out);
	{
		cout << "Student:"<<endl;
		out << "Student:"<<endl;
		std::multimap<int, std::string>::reverse_iterator rit;
		int counter =0;
		for (rit=student.rbegin(); counter <45; ++rit){
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
		for (rit=staff.rbegin(); counter <45; ++rit){
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
		for (rit=neither.rbegin(); counter <45; ++rit){
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
		for (rit=other.rbegin(); counter <45; ++rit){
			if(counter < 3)
				std::cout << rit->first << " => " << rit->second << '\n';
			out << rit->first << " => " << rit->second << '\n';
			counter++;
		}
		cout <<endl;
		out <<endl;
	}
	{
		out <<endl << endl << "Student: " ;
		for (int counter = 0; counter <45; counter++){
			if (counter % 3 == 0)
				out <<endl;
			out << "Student: " << namesOfValues[counter]<< " => " << studentValues[counter]<< '\n';
		}

		out << endl << endl <<"Faculity: ";
		for (int counter = 0; counter <45; counter++){
			if (counter % 3 == 0)
				out <<endl;
			out << "Faculity: " << namesOfValues[counter]<< " => " << staffValues[counter]<< '\n';
		}

		out <<endl <<endl << "Neither: " ;
		for (int counter = 0; counter <45; counter++){
			if (counter % 3 == 0)
				out <<endl;
			out << "Neither: " << namesOfValues[counter]<< " => " << neitherValues[counter]<< '\n';
		}

		out << endl << endl<<"Other: " ;
		for (int counter = 0; counter <45; counter++){
			if (counter % 3 == 0)
				out <<endl;
			out << "Other: " << namesOfValues[counter]<< " => " << otherValues[counter]<< '\n';
		}
	}
	//print to text file
	cout << "Total data written to \'output.txt\' within this directory"<<endl<<endl;
}
