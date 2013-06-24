#include "Store.h"
#include <vector>
#include <string>

Store::Store(){
}
/*
Store::Store( Store& toCopy){
	this->put(toCopy.getVectorString());
}
*/
Store::Store(std::vector<std::string> & stringData){
	stringVector = stringData;
	//cout << stringVector.at(0)<<endl;
}
std::vector<std::string> Store::getVectorString(){
	return stringVector;
}
void Store::getVectorString(std::vector<std::string> & stringData){
	cout << stringVector.at(0)<<endl;
	stringData = stringVector;
}
std::string Store::getString(int pos){
	return stringVector.at(pos);
}
bool Store::put(std::string data){
	stringVector.push_back(data);
	return true;
}
bool Store::put(std::vector<std::string> & stringData){
	stringVector = stringData;
}
int Store::sizeMe(){
	return stringVector.size();
}
