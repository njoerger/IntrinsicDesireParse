#include "PersonIntrinsic.h"
#include <boost/lexical_cast.hpp>

PersonIntrinsic::PersonIntrinsic(){
	role="Unknown";
	age="Unknown";
	sex = "Unknown";
	date= "Unknown";
	motivator = "N/A";

	powerValue=0;
	independenceValue=0;
	curiosityValue=0;
	acceptanceValue=0;
	orderValue=0;
	savingValue=0;
	honorValue=0;
	idealismValue=0;
	socialContactValue=0;
	familyValue=0;
	statusValue=0;
	vengeanceValue=0;
	//romanceValue=0;
	eatingValue=0;
	physicalActivityValue=0;
	tranquilityValue=0;
	motivatorValue=0;
}
PersonIntrinsic::~PersonIntrinsic(){
}
PersonIntrinsic::PersonIntrinsic(std::vector<std::string> & toCopy){
	setAge(toCopy[6]);
	setSex(toCopy[7]);
	setDate(toCopy[1]);

	//cout << "age: " << age << " sex: " << sex << " date: " << date<< endl;
/*
	for(int counter=0;counter< toCopy.size();counter++){
		if (counter % 5 == 0){
			cout << "----------------------" <<endl;
		}
		cout << counter << "  " << toCopy.at(counter) <<endl;
	}
*/

	std::vector<int> intValues;
	for(int i=2; i<= 4; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}

	if(intValues.at(0) > intValues.at(1))
		setRole("Faculty");
	else if (intValues.at(1) > intValues.at(2))
		setRole( "Student");
	else if (intValues.at(2) > 0)
		setRole("Neither");
	else if (toCopy[5] != "")
		setRole(toCopy[5]);

	//cout <<  endl << "role: " << role <<endl;

	for(int i=8; i<=12; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	int q1, q2,q3,q4,q5,q6,q7;

	q1 = intValues.at(3);
	q2 = intValues.at(4);
	q3 = intValues.at(5);
	q4 = intValues.at(6);
	q5 = intValues.at(7);
	this->setPower(q1, q2, q3, q4, q5);

	for(int i=13; i<=16; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(8);
	q2 = intValues.at(9);
	q3 = intValues.at(10);
	q4 = intValues.at(11);
	this->setIndependence(q1, q2,q3,q4);

	for(int i=17; i<=21; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(12);
	q2 = intValues.at(13);
	q3 = intValues.at(14);
	q4 = intValues.at(15);
	q5 = intValues.at(16);
	this->setCuriosity(q1, q2, q3, q4, q5);

	for(int i=22; i<=26; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(17);
	q2 = intValues.at(18);
	q3 = intValues.at(19);
	q4 = intValues.at(20);
	q5 = intValues.at(21);
	this->setAcceptance(q1, q2,q3, q4,q5);

	for(int i=27; i<=30; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(22);
	q2 = intValues.at(23);
	q3 = intValues.at(24);
	q4 = intValues.at(25);
	this->setOrder(q1, q2, q3, q4);

	for(int i=31; i<=35; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(26);
	q2 = intValues.at(27);
	q3 = intValues.at(28);
	q4 = intValues.at(29);
	q5 = intValues.at(30);
	this->setSaving(q1,q2,q3,q4,q5);

	for(int i=36; i<=39; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(31);
	q2 = intValues.at(32);
	q3 = intValues.at(33);
	q4 = intValues.at(34);
	this->setHonor(q1,q2,q3,q4);

	for(int i=40; i<=44; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(35);
	q2 = intValues.at(36);
	q3 = intValues.at(37);
	q4 = intValues.at(38);
	q5 = intValues.at(39);
	this->setIdealism(q1,q2,q3,q4,q5);

	for(int i=45; i<=49; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(40);
	q2 = intValues.at(41);
	q3 = intValues.at(42);
	q4 = intValues.at(43);
	q5 = intValues.at(44);
	this->setSocialContact(q1,q2,q3,q4,q5);

	for(int i=50; i<=53; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(45);
	q2 = intValues.at(46);
	q3 = intValues.at(47);
	q4 = intValues.at(48);
	this->setFamily(q1,q2,q3,q4);

	for(int i=54; i<=59; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(49);
	q2 = intValues.at(50);
	q3 = intValues.at(51);
	q4 = intValues.at(52);
	q5 = intValues.at(53);
	q6 = intValues.at(54);
	this->setStatus(q1,q2,q3,q4,q5,q6);

	for(int i=60; i<=66; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(55);
	q2 = intValues.at(56);
	q3 = intValues.at(57);
	q4 = intValues.at(58);
	q5 = intValues.at(59);
	q6 = intValues.at(60);
	q7 = intValues.at(61);
	this->setVengeance(q1,q2,q3,q4,q5,q6,q7);

	for(int i=67; i<=70; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(62);
	q2 = intValues.at(63);
	q3 = intValues.at(64);
	q4 = intValues.at(65);
	this->setEating(q1,q2,q3,q4);
	//romanceValue=this->setRomance(q1,q2,q3,q4,q5,q6);

	for(int i=71; i<=74; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	//cout << "-------------------" <<endl;
	q1 = intValues.at(66);
	q2 = intValues.at(67);
	q3 = intValues.at(68);
	q4 = intValues.at(69);
	this->setPhysicalActivity(q1,q2,q3,q4);
	//eatingValue=this->setEating(q1,q2,q3,q4);

	for(int i=75; i<=79; i++){
		//cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		//cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
//	cout << "-------------------" <<endl;
	q1 = intValues.at(70);
	q2 = intValues.at(71);
	q3 = intValues.at(72);
	q4 = intValues.at(73);
	q5 = intValues.at(74);
	this->setTranquility(q1,q2,q3,q4,q5);
	//cout << "-------------------" <<endl<<endl;
	//physicalActivityValue=this->setPhysicalActivity(q1,q2,q3,q4);

/*
	for(int i=80; i<=84; i++){
		cout << toCopy.at(i);
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
		cout << "  " << intValues.at(intValues.size()-1) <<"    " << intValues.size()-1 << endl;
	}
	cout << "-------------------" <<endl;
	q1 = intValues.at(73);
	q2 = intValues.at(74);
	q3 = intValues.at(75);
	q4 = intValues.at(76);
	q4 = intValues.at(76);
	tranquilityValue=0;
*/

}
bool PersonIntrinsic::setRole(std::string roleName){
	role = roleName;
	return true;
}
bool PersonIntrinsic::setAge(std::string ageAmount){
	age = ageAmount;
	return true;
}
bool PersonIntrinsic::setSex(std::string sexType){
	sex = sexType;
	return true;
}
bool PersonIntrinsic::setDate(std::string dateNum){
	date = dateNum;
	return true;
}
bool PersonIntrinsic::setPower(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	powerValue = calcTotal(very1, very2, very3, less1, less2, temp);
	//calcTotal(very1, very2, very3, inverseValue(less1), inverseValue(less2), temp, power);
	//cout << "power value: " <<powerValue<<endl;
	return true;
}
bool PersonIntrinsic::setIndependence(int very1, int very2, int less1, int less2){
	independenceValue = calcTotal(very1, very2, less1, less2);
	//calcTotal(very1, very2, inverseValue(less1), inverseValue(less2), independence);
	//cout << "independence value: " << independenceValue <<endl;
	return true;
}
bool PersonIntrinsic::setCuriosity(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	curiosityValue = calcTotal(very1, very2, very3, less1, less2, temp);
	//calcTotal(very1, very2, very3, inverseValue(less1), inverseValue(less2), temp, curiosity);
	//cout << "curiosity value: " <<curiosityValue<<endl;
	return true;
}
bool PersonIntrinsic::setAcceptance(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	acceptanceValue = calcTotal(very1, very2, very3, less1, less2, temp);
	//calcTotal(very1, very2, very3, inverseValue(less1), inverseValue(less2), temp, acceptance);
	//cout << "Acceptance value " <<acceptanceValue <<endl;
	return true;
}
bool PersonIntrinsic::setOrder(int very1, int very2, int less1, int less2){
	orderValue = calcTotal(very1, very2, less1, less2);
	//calcTotal(very1, very2, inverseValue(less1), inverseValue(less2), order);
	//cout << "order value: " << orderValue <<endl;
	return true;
}
bool PersonIntrinsic::setSaving(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	savingValue = calcTotal(very1, very2, very3, less1, less2, temp);
	//calcTotal(very1, very2, very3, inverseValue(less1), inverseValue(less2), temp, saving);
	//cout << "saving Value: " << savingValue <<endl;
	return true;
}
bool PersonIntrinsic::setHonor(int very1, int very2, int less1, int less2){
	honorValue = calcTotal(very1, very2, less1, less2);
	//calcTotal(very1, very2, inverseValue(less1), inverseValue(less2), honor);
	//cout << "honor value: " << honorValue <<endl;
	return true;
}
bool PersonIntrinsic::setIdealism(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	idealismValue = calcTotal(very1, very2, very3, less1, less2, temp);
	//calcTotal(very1, very2, very3, inverseValue(less1), inverseValue(less2), temp, idealism);
	//cout << "idealism value: " << idealismValue <<endl;
	return true;
}
bool PersonIntrinsic::setSocialContact(int very1, int very2, int less1, int less2, int less3){
	bool temp= 0;
	socialContactValue = calcTotal(very1, very2, less1, less2, less3, temp);
	//calcTotal(very1, very2, inverseValue(less1), inverseValue(less2), inverseValue(less3), temp, socialContact);
	//cout << "social contact value: " << socialContactValue<<endl;
	return true;
}
bool PersonIntrinsic::setFamily(int very1, int very2, int less1, int less2){
	familyValue = calcTotal(very1, very2, less1, less2);
	//calcTotal(very1, very2, inverseValue(less1), inverseValue(less2), family);
	//cout << "family value: " <<familyValue <<endl;
	return true;
}
bool PersonIntrinsic::setStatus(int very1, int very2, int very3, int less1, int less2, int less3){
	bool temp= 1;
	statusValue = calcTotal(very1, very2, very3, less1, less2, temp);
	//calcTotal(very1, very2,very3, inverseValue(less1), inverseValue(less2), inverseValue(less3), temp, status);
	//cout << "status value: " << statusValue << endl;
	return true;
}
bool PersonIntrinsic::setVengeance(int very1, int very2, int very3, int very4, int less1, int less2, int less3){
	vengeanceValue = calcTotal(very1, very2,very3, very4, less1, less2, less3);
	//calcTotal(very1, very2,very3, very4, inverseValue(less1), inverseValue(less2), inverseValue(less3), vengeance);
	//cout << "vengeance value: " <<vengeanceValue <<endl;
	return true;
}
/*
bool PersonIntrinsic::setRomance(int, int, int, int, int, int){
	return true;
}
*/
bool PersonIntrinsic::setEating(int very1, int very2, int less1, int less2){
	eatingValue = calcTotal(very1, very2, less1, less2);
	//calcTotal(very1, very2, inverseValue(less1), inverseValue(less2), eating);
	//cout << "eating value: " <<eatingValue <<endl;
	return true;
}
bool PersonIntrinsic::setPhysicalActivity(int very1, int very2, int less1, int less2){
	physicalActivityValue = calcTotal(very1, very2, less1, less2);
	//calcTotal(very1, very2, inverseValue(less1), inverseValue(less2), physicalActivity);
	//cout << "physical activity value: " << physicalActivityValue <<endl;
	return true;
}
bool PersonIntrinsic::setTranquility(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	tranquilityValue = calcTotal(very1, very2, very3, less1, less2, temp);
	//calcTotal(very1, very2, very3, inverseValue(less1), inverseValue(less2), temp, tranquility);
	//cout << "tranquility value: " << tranquilityValue<<endl;
	return true;
}

std::string PersonIntrinsic::getRole(){
	return role;
}
std::string PersonIntrinsic::getAge(){
	return age;
}
std::string PersonIntrinsic::getSex(){
	return sex;
}
int PersonIntrinsic::getPower(){
	return powerValue;
}
int PersonIntrinsic::getIndepedence(){
	return independenceValue;
}
int PersonIntrinsic::getCuriosity(){
	return curiosityValue;
}
int PersonIntrinsic::getAcceptance(){
	return acceptanceValue;
}
int PersonIntrinsic::getOrder(){
	return orderValue;
}
int PersonIntrinsic::getSaving(){
	return savingValue;
}
int PersonIntrinsic::getHonor(){
	return honorValue;
}
int PersonIntrinsic::getIdealism(){
	return idealismValue;
}
int PersonIntrinsic::getSocialContact(){
	return socialContactValue;
}
int PersonIntrinsic::getFamily(){
	return familyValue;
}
int PersonIntrinsic::getStatus(){
	return statusValue;
}
int PersonIntrinsic::getVengeance(){
	return vengeanceValue;
}
/*
int PersonIntrinsic::getRomance(){
	return romanceValue;
}
*/
int PersonIntrinsic::getEating(){
	return eatingValue;
}
int PersonIntrinsic::getPhysicalActivity(){
	return physicalActivityValue;
}
int PersonIntrinsic::getTranquility(){
	return tranquilityValue;
}
int PersonIntrinsic::getMotivatorValue(){
	return motivatorValue;
}
std::string PersonIntrinsic::getMotivator(){
	return motivator;
}

int PersonIntrinsic::inverseValue(int valueToFlip){
	valueToFlip *= -1;
	return valueToFlip; 
}
//int PersonIntrinsic::calcTotal(int very1, int very2, int less1, int less2, std::vector<int> tempVec){
int PersonIntrinsic::calcTotal(int very1, int very2, int less1, int less2){
	int positive = very1 + very2;
	int negative = less1 + less2;

	if((positive == negative) && (positive > 0))
		return 0;
	else if ((positive > 0) && (negative == 0))
		return 1;
	else if ((negative > 0) && (positive == 0))
		return -1;
	return false;
}
//int PersonIntrinsic::calcTotal(int very1, int very2, int flip, int less1, int less2, bool whichFirst, std::vector<int> tempVec){
int PersonIntrinsic::calcTotal(int very1, int very2, int flip, int less1, int less2, bool whichFirst){
	int positive;
	int negative;
	if (whichFirst){
		positive = very1 + very2 + flip;
		negative = less1 + less2;
	}
	else{
		positive = very1 + very2;
		negative = less1 + less2 + flip;
	}

	if((positive == negative) && (positive > 0))
		return 0;
	else if ((positive > 0) && (negative == 0))
		return 1;
	else if ((negative > 0) && (positive == 0))
		return -1;
	return false;
}
int PersonIntrinsic::calcTotal(int very1, int very2, int flip1, int flip2, int less1, int less2, bool whichFirst){
	int positive;
	int negative;
	if (whichFirst){
		positive = very1 + very2 + flip1 + flip2;
		negative = less1 + less2;
	}
	else{
		positive = very1 + very2;
		negative = less1 + less2 + flip1 + flip2;
	}

	if((positive == negative) && (positive > 0))
		return 0;
	else if ((positive > 0) && (negative == 0))
		return 1;
	else if ((negative > 0) && (positive == 0))
		return -1;
	return false;
}
int PersonIntrinsic::calcTotal(int very1, int very2, int very3, int very4, int less1, int less2, int less3){
	int positive = very1 + very2 + very3 + very4;
	int negative = less1 + less2 + less3;

	if((positive == negative) && (positive > 0))
		return 0;
	else if ((positive > 0) && (negative == 0))
		return 1;
	else if ((negative > 0) && (positive == 0))
		return -1;
	return false;
}
//need to set motivatorValue and name for highest value
bool PersonIntrinsic::setMotivator(int val){
	motivatorValue = val;
	return true;
}
std::vector<int> PersonIntrinsic::getAllVector(){
	std::vector<int> temp {powerValue, independenceValue, curiosityValue, acceptanceValue, orderValue, savingValue, honorValue, idealismValue, socialContactValue, familyValue, statusValue, vengeanceValue, eatingValue, physicalActivityValue, tranquilityValue};
	return temp;
}
