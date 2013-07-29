/**
  * @Author Nicholas Joerger
  * @Version 1.0
  * @License GPL V3.0
  * @Comment
  *    Please use to the full extent of the GPL, if used with other projects not associated with GitHub, please email me at my GitHub email.
 */
#include "Store.h"
#include <vector>
#include <string>

/**
  *  Store - defualt constructor used as a place holer
 */
Store::Store(){
}
/**
  * Store - paramterized version used to bring in a vector of strings to the object
  * @param stringData - the vector that we want to store within the object
 */
Store::Store(std::vector<std::string> & stringData){
	stringVector = stringData;
}
/**
  * getVectorString - used to get the vector of string contained with the object
  * @return vector of strings contained within the object
 */
std::vector<std::string> Store::getVectorString(){
	return stringVector;
}
/**
  * getVectorString - returns the values of the internal vector to the vector passed into the method
 */
void Store::getVectorString(std::vector<std::string> & stringData){
	cout << stringVector.at(0)<<endl;
	stringData = stringVector;
}
/**
  * getString - used to get information from the vector
  * @return value at a certain postion from within the vector in the object
 */
std::string Store::getString(int pos){
	return stringVector.at(pos);
}
/**
  * put - used to place information into the vector within this object
  * @param string that contains the data that one wants to store
  * @return boolean if the value was placed or not
 */
bool Store::put(std::string data){
	stringVector.push_back(data);
	return true;
}
/**
  * put - places a vector of values into the vector that is already present within the object
  * @param stringData used to bring in the vector that will be used to add information to the internal vector
  * @return bool that returns true if addition occured
 */
bool Store::put(std::vector<std::string> & stringData){
	stringVector = stringData;
	return true;
}
/**
  * sizeMe - used to get the current size of the vector
  * @return returns the size of the vector
 */
int Store::sizeMe(){
	return stringVector.size();
}
