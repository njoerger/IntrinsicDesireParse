/**
  * @Author Nicholas Joerger
  * @Version 1.0
  * @License GPL V3.0
  * @Comment
  *    Please use to the full extent of the GPL, if used with other projects not associated with GitHub, please email me at my GitHub email.
 */
#include "PersonIntrinsic.h"
#include <boost/lexical_cast.hpp>

/**
  * PersonIntrinsic - defualt constructor, gives defualt values for object
 */
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
/**
  * ~PersonIntrinsic - place holder
 */
PersonIntrinsic::~PersonIntrinsic(){
}
/**
  * PersonIntrinsic - parameterized constructor used to bring in one person's scores to be calculated
  * @param vector of strings used to store the person's scores
 */
PersonIntrinsic::PersonIntrinsic(std::vector<std::string> & toCopy){
	//sets Age, sex and date
	setAge(toCopy[6]);
	setSex(toCopy[7]);
	setDate(toCopy[1]);

	//takes the next 3 values then tries to see which of the categories this person is (student, faculity, neither or other)
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

	//takes the next set of values then tries to set them to the power value
	for(int i=8; i<=12; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	int q1, q2,q3,q4,q5,q6,q7;
	q1 = intValues.at(3);
	q2 = intValues.at(4);
	q3 = intValues.at(5);
	q4 = intValues.at(6);
	q5 = intValues.at(7);
	this->setPower(q1, q2, q3, q4, q5);

	//takes the next set of values then tries to set them to the independence value
	for(int i=13; i<=16; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(8);
	q2 = intValues.at(9);
	q3 = intValues.at(10);
	q4 = intValues.at(11);
	this->setIndependence(q1, q2,q3,q4);

	//takes the next set of values then tries to set them to the curiosity value
	for(int i=17; i<=21; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(12);
	q2 = intValues.at(13);
	q3 = intValues.at(14);
	q4 = intValues.at(15);
	q5 = intValues.at(16);
	this->setCuriosity(q1, q2, q3, q4, q5);

	//takes the next set of values then tries to set them to the acceptance value
	for(int i=22; i<=26; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(17);
	q2 = intValues.at(18);
	q3 = intValues.at(19);
	q4 = intValues.at(20);
	q5 = intValues.at(21);
	this->setAcceptance(q1, q2,q3, q4,q5);

	//takes the next set of values then tries to set them to the order value
	for(int i=27; i<=30; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(22);
	q2 = intValues.at(23);
	q3 = intValues.at(24);
	q4 = intValues.at(25);
	this->setOrder(q1, q2, q3, q4);

	//takes the next set of values then tries to set them to the saving value
	for(int i=31; i<=35; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(26);
	q2 = intValues.at(27);
	q3 = intValues.at(28);
	q4 = intValues.at(29);
	q5 = intValues.at(30);
	this->setSaving(q1,q2,q3,q4,q5);

	//takes the next set of values then tries to set them to the honor value
	for(int i=36; i<=39; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(31);
	q2 = intValues.at(32);
	q3 = intValues.at(33);
	q4 = intValues.at(34);
	this->setHonor(q1,q2,q3,q4);

	//takes the next set of values then tries to set them to the idealism value
	for(int i=40; i<=44; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(35);
	q2 = intValues.at(36);
	q3 = intValues.at(37);
	q4 = intValues.at(38);
	q5 = intValues.at(39);
	this->setIdealism(q1,q2,q3,q4,q5);

	//takes the next set of values then tries to set them to the social Contact value
	for(int i=45; i<=49; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(40);
	q2 = intValues.at(41);
	q3 = intValues.at(42);
	q4 = intValues.at(43);
	q5 = intValues.at(44);
	this->setSocialContact(q1,q2,q3,q4,q5);

	//takes the next set of values then tries to set them to the family value
	for(int i=50; i<=53; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(45);
	q2 = intValues.at(46);
	q3 = intValues.at(47);
	q4 = intValues.at(48);
	this->setFamily(q1,q2,q3,q4);

	//takes the next set of values then tries to set them to the status value
	for(int i=54; i<=59; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(49);
	q2 = intValues.at(50);
	q3 = intValues.at(51);
	q4 = intValues.at(52);
	q5 = intValues.at(53);
	q6 = intValues.at(54);
	this->setStatus(q1,q2,q3,q4,q5,q6);

	//takes the next set of values then tries to set them to the vengeance value
	for(int i=60; i<=66; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(55);
	q2 = intValues.at(56);
	q3 = intValues.at(57);
	q4 = intValues.at(58);
	q5 = intValues.at(59);
	q6 = intValues.at(60);
	q7 = intValues.at(61);
	this->setVengeance(q1,q2,q3,q4,q5,q6,q7);

	//takes the next set of values then tries to set them to the eating value
	for(int i=67; i<=70; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(62);
	q2 = intValues.at(63);
	q3 = intValues.at(64);
	q4 = intValues.at(65);
	this->setEating(q1,q2,q3,q4);

	//takes the next set of values then tries to set them to the physical Activity value
	for(int i=71; i<=74; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(66);
	q2 = intValues.at(67);
	q3 = intValues.at(68);
	q4 = intValues.at(69);
	this->setPhysicalActivity(q1,q2,q3,q4);

	//takes the next set of values then tries to set them to the tranquilityvalue
	for(int i=75; i<=79; i++){
		int num = atoi(toCopy.at(i).c_str());
		intValues.push_back(num);
	}
	q1 = intValues.at(70);
	q2 = intValues.at(71);
	q3 = intValues.at(72);
	q4 = intValues.at(73);
	q5 = intValues.at(74);
	this->setTranquility(q1,q2,q3,q4,q5);
}
/**
  * setRole sets this object's role name
  * @param the person's role name
  * @return boolean returned if the value was set
 */
bool PersonIntrinsic::setRole(std::string roleName){
	role = roleName;
	return true;
}
/**
  * setAge sets this object's age
  * @param the person's age
  * @return boolean returned if the value was set
 */
bool PersonIntrinsic::setAge(std::string ageAmount){
	age = ageAmount;
	return true;
}
/**
  * setSex sets this object's sex
  * @param the person's sex
  * @return boolean returned if the value was set
 */
bool PersonIntrinsic::setSex(std::string sexType){
	sex = sexType;
	return true;
}
/**
  * setDate sets this object's date
  * @param the person's date
  * @return boolean returned if the value was set
 */
bool PersonIntrinsic::setDate(std::string dateNum){
	date = dateNum;
	return true;
}
/**
  * setPower sets this object's power value
  * @param first very important question response
  * @param second very important question response
  * @param third very important question response
  * @param frist less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
 */
bool PersonIntrinsic::setPower(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	//temp is used to tell the called function if the flipped value should be a very or a less
	//in this case it will be three very and two less
	powerValue = calcTotal(very1, very2, very3, less1, less2, temp);
	return true;
}
/**
  * setIndependence sets this object's Independence value
  * @param first very important question response
  * @param second very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
 */
bool PersonIntrinsic::setIndependence(int very1, int very2, int less1, int less2){
	independenceValue = calcTotal(very1, very2, less1, less2);
	return true;
}
/**
  * setCuriosity sets this object's curiosity value
  * @param first very important question response
  * @param second very important question response
  * @param third very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
 */
bool PersonIntrinsic::setCuriosity(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	//temp is used to tell the called function which way the program should add, very or less for the middle value
	//in this case it will be three very and two less
	curiosityValue = calcTotal(very1, very2, very3, less1, less2, temp);
	return true;
}
/**
  * setAcceptance sets this object's acceptance value
  * @param first very important question response
  * @param second very important question response
  * @param third very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setAcceptance(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	//temp is used to tell the called function which way the program should add, very or less for the middle value
	//in this case it will be three very and two less
	acceptanceValue = calcTotal(very1, very2, very3, less1, less2, temp);
	return true;
}
/**
  * setAcceptance sets this object's acceptance value
  * @param first very important question response
  * @param second very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setOrder(int very1, int very2, int less1, int less2){
	orderValue = calcTotal(very1, very2, less1, less2);
	return true;
}
/**
  * setSaving sets this object's saving value
  * @param first very important question response
  * @param second very important question response
  * @param third very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setSaving(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	//temp is used to tell the called function which way the program should add, very or less for the middle value
	//in this case it will be three very and two less
	savingValue = calcTotal(very1, very2, very3, less1, less2, temp);
	return true;
}
/**
  * setHonor sets this object's honor value
  * @param first very important question response
  * @param second very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setHonor(int very1, int very2, int less1, int less2){
	honorValue = calcTotal(very1, very2, less1, less2);
	return true;
}
/**
  * setIdealism sets this object's idealism value
  * @param first very important question response
  * @param second very important question response
  * @param third very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setIdealism(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	//temp is used to tell the called function which way the program should add, very or less for the middle value
	//in this case it will be three very and two less
	idealismValue = calcTotal(very1, very2, very3, less1, less2, temp);
	return true;
}
/**
  * setSocialContact sets this object's social Contact value
  * @param first very important question response
  * @param second very important question response
  * @param first less important question response
  * @param second less important question response
  * @param third less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setSocialContact(int very1, int very2, int less1, int less2, int less3){
	bool temp= 0;
	//temp is used to tell the called function which way the program should add, very or less for the middle value
	//in this case it will be two very and three less
	socialContactValue = calcTotal(very1, very2, less1, less2, less3, temp);
	return true;
}
/**
  * setFamily sets this object's family value
  * @param first very important question response
  * @param second very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setFamily(int very1, int very2, int less1, int less2){
	familyValue = calcTotal(very1, very2, less1, less2);
	return true;
}
/**
  * setStatus sets this object's status value
  * @param first very important question response
  * @param second very important question response
  * @param third very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setStatus(int very1, int very2, int very3, int less1, int less2, int less3){
	bool temp= 1;
	//temp is used to tell the called function which way the program should add, very or less for the middle value
	//in this case it will be three very and two less
	statusValue = calcTotal(very1, very2, very3, less1, less2, temp);
	return true;
}
/**
  * setVengeance sets this object's vengeance value
  * @param first very important question response
  * @param second very important question response
  * @param third very important question response
  * @param fourth very important question response
  * @param first less important question response
  * @param second less important question response
  * @param third less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setVengeance(int very1, int very2, int very3, int very4, int less1, int less2, int less3){
	vengeanceValue = calcTotal(very1, very2,very3, very4, less1, less2, less3);
	return true;
}
/*
bool PersonIntrinsic::setRomance(int, int, int, int, int, int){
	return true;
}
*/
/**
  * setEating sets this object's eating value
  * @param first very important question response
  * @param second very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setEating(int very1, int very2, int less1, int less2){
	eatingValue = calcTotal(very1, very2, less1, less2);
	return true;
}
/**
  * setPhysicalActivity sets this object's physical Activity value
  * @param first very important question response
  * @param second very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setPhysicalActivity(int very1, int very2, int less1, int less2){
	physicalActivityValue = calcTotal(very1, very2, less1, less2);
	return true;
}
/**
  * setTranquility sets this object's Tranquility value
  * @param first very important question response
  * @param second very important question response
  * @param third very important question response
  * @param first less important question response
  * @param second less important question response
  * @return boolean returned if the value was set
*/
bool PersonIntrinsic::setTranquility(int very1, int very2, int very3, int less1, int less2){
	bool temp= 1;
	//temp is used to tell the called function which way the program should add, very or less for the middle value
	//in this case it will be three very and two less
	tranquilityValue = calcTotal(very1, very2, very3, less1, less2, temp);
	return true;
}
/**
  * getRole get the value stored within the variable
  * @return string with the value contained within
 */
std::string PersonIntrinsic::getRole(){
	return role;
}
/**
  * getAge get the value stored within the variable
  * @return string with the value contained within
 */
std::string PersonIntrinsic::getAge(){
	return age;
}
/**
  * getSex get the value stored within the variable
  * @return string with the value contained within
 */
std::string PersonIntrinsic::getSex(){
	return sex;
}
/**
  * getPower get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getPower(){
	return powerValue;
}
/**
  * getIndependence get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getIndepedence(){
	return independenceValue;
}
/**
  * getCuriosity get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getCuriosity(){
	return curiosityValue;
}
/**
  * getAcceptance get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getAcceptance(){
	return acceptanceValue;
}
/**
  * getOrder get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getOrder(){
	return orderValue;
}
/**
  * getSaving get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getSaving(){
	return savingValue;
}
/**
  * getHonor get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getHonor(){
	return honorValue;
}
/**
  * getIdealism get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getIdealism(){
	return idealismValue;
}
/**
  * getSocialContact get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getSocialContact(){
	return socialContactValue;
}
/**
  * getFamily get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getFamily(){
	return familyValue;
}
/**
  * getStatus get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getStatus(){
	return statusValue;
}
/**
  * getVengeance get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getVengeance(){
	return vengeanceValue;
}
/*
int PersonIntrinsic::getRomance(){
	return romanceValue;
}
*/
/**
  * getEating get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getEating(){
	return eatingValue;
}
/**
  * getPhysicalActivity get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getPhysicalActivity(){
	return physicalActivityValue;
}
/**
  * getTranquility get the value stored within the variable
  * @return int with the value contained within
 */
int PersonIntrinsic::getTranquility(){
	return tranquilityValue;
}
/**
  * calcTotal - used to calculate the score for the calling category
  * @param first very important value passed in
  * @param second very important value passed in
  * @param first less important value passed in
  * @param second less important value passed in
  * @return the calculated value either (1, 0, -1) since we only want to keep track if the values are nuetral, 0, very, 1, or less, -1
 */
int PersonIntrinsic::calcTotal(int very1, int very2, int less1, int less2){
	//storage of parameters
	int positive = very1 + very2;
	int negative = less1 + less2;

	//checks if the values are even and if positive is greater than 0
	if((negative > 0) && (positive > 0))
		return 0;
	//checks if positive is greater than 0 and negative is nuetral
	else if ((positive > 0) && (negative == 0))
		return 1;
	//checks if negative is greater than 0 and positive is nuetral
	else if ((negative > 0) && (positive == 0))
		return -1;
	//else return false or 0
	return false;
}
/**
  * calcTotal - used to calculate the score for the calling category
  * @param first very important value passed in
  * @param second very important value passed in
  * @param first value that could either be a very or less based on "whichFirst"
  * @param first less important value passed in
  * @param second less important value passed in
  * @param boolean that tells the method if the calculation is for a very first, 1, or less first, 0
  * @return the calculated value either (1, 0, -1) since we only want to keep track if the values are nuetral, 0, very, 1, or less, -1
 */
int PersonIntrinsic::calcTotal(int very1, int very2, int flip, int less1, int less2, bool whichFirst){
	//storage of parameters
	int positive;
	int negative;
	//used for which side flip will be added to
	if (whichFirst){
		positive = very1 + very2 + flip;
		negative = less1 + less2;
	}
	else{
		positive = very1 + very2;
		negative = less1 + less2 + flip;
	}

	//checks if the values are even and if positive is greater than 0
	if((negative > 0) && (positive > 0))
		return 0;
	//checks if positive is greater than 0 and negative is nuetral
	else if ((positive > 0) && (negative == 0))
		return 1;
	//checks if negative is greater than 0 and positive is nuetral
	else if ((negative > 0) && (positive == 0))
		return -1;
	//else return false or 0
	return false;
}
/**
  * calcTotal - used to calculate the score for the calling category
  * @param first very important value passed in
  * @param second very important value passed in
  * @param first value that could either be a very or less based on "whichFirst"
  * @param second value that could either be a very or less based on "whichFirst"
  * @param first less important value passed in
  * @param second less important value passed in
  * @param boolean that tells the method if the calculation is for a very first, 1, or less first, 0
  * @return the calculated value either (1, 0, -1) since we only want to keep track if the values are nuetral, 0, very, 1, or less, -1
 */
int PersonIntrinsic::calcTotal(int very1, int very2, int flip1, int flip2, int less1, int less2, bool whichFirst){
	//storage of parameters
	int positive;
	int negative;
	//used for which side flip will be added to
	if (whichFirst){
		positive = very1 + very2 + flip1 + flip2;
		negative = less1 + less2;
	}
	else{
		positive = very1 + very2;
		negative = less1 + less2 + flip1 + flip2;
	}

	//checks if the values are even and if positive is greater than 0
	if((positive == negative) && (positive > 0))
		return 0;
	//checks if positive is greater than 0 and negative is nuetral
	else if ((positive > 0) && (negative == 0))
		return 1;
	//checks if negative is greater than 0 and positive is nuetral
	else if ((negative > 0) && (positive == 0))
		return -1;
	//else return false or 0
	return false;
}
/**
  * calcTotal - used to calculate the score for the calling category
  * @param first very important value passed in
  * @param second very important value passed in
  * @param third very important value passed in
  * @param fourth very important value passed in
  * @param first less important value passed in
  * @param second less important value passed in
  * @param third less important value passed in
  * @return the calculated value either (1, 0, -1) since we only want to keep track if the values are nuetral, 0, very, 1, or less, -1
 */
int PersonIntrinsic::calcTotal(int very1, int very2, int very3, int very4, int less1, int less2, int less3){
	//storage of parameters
	int positive = very1 + very2 + very3 + very4;
	int negative = less1 + less2 + less3;

	//checks if the values are even and if positive is greater than 0
	if((negative > 0) && (positive > 0))
		return 0;
	//checks if positive is greater than 0 and negative is nuetral
	else if ((positive > 0) && (negative == 0))
		return 1;
	//checks if negative is greater than 0 and positive is nuetral
	else if ((negative > 0) && (positive == 0))
		return -1;
	//else return false or 0
	return false;
}
/**
  * getAllVector is used to get this Person's intrinsic desire score as an vector
  * @return vector containing this person's intrinsic totaled scores
 */
std::vector<int> PersonIntrinsic::getAllVector(){
	std::vector<int> temp {powerValue, independenceValue, curiosityValue, acceptanceValue, orderValue, savingValue, honorValue, idealismValue, socialContactValue, familyValue, statusValue, vengeanceValue, eatingValue, physicalActivityValue, tranquilityValue};
	return temp;
}
