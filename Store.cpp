#include "Store.h"
#include <vector>
#include <string>

Store::Store(){
}
Store::Store( Store& toCopy){
	this->put(toCopy.getVectorString());
}
Store::Store(std::vector<std::string> stringData){
	stringVector = stringData;
}
std::vector<std::string> Store::getVectorString(){
	return stringVector;
}
std::string Store::getString(int pos){
	return stringVector.at(pos);
}
bool Store::put(std::string data){
	stringVector.push_back(data);
	return true;
}
bool Store::put(std::vector<std::string> stringData){
	stringVector = stringData;
}
