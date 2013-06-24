#include <string>
#include <fstream>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "Reader.h"
#include "boost/tuple/tuple.hpp"

using namespace std;

Reader::Reader(){
	colNum = 1;
	header = 0;
	fileLoc = "";
	type = "int";
	delimit = ",";
	readHeader = false;
}
Reader::Reader(const Reader& toCopy){
}
Reader::Reader(int numCol, char delim, string typ, bool head, string fileLo){
	colNum = numCol;
	header = head;
	fileLoc = fileLo;
	type = typ;
	delimit = delim;
	readHeader = false;

	input.open(fileLo.c_str(), fstream::in | fstream::out); 
}
Reader::~Reader(){
	if (input.is_open())
		input.close();
}
bool Reader::hasNext(){
	if (input.peek() >0)
		return input.peek();
	else
		return false;
}
Store Reader::next(){
	string line;
	vector<string> tempVec;
	if (hasNext()){
		if (header && !readHeader){
			getline(input, line);
			readHeader= true;

			parseDelimiters(line, headerInfo);

			Store s(headerInfo);
			return s;
		}
		else{
			getline(input, line);
			parseDelimiters(line, tempVec);
			Store s(tempVec);
			return s;
		}
	}
}
void Reader::parseDelimiters(string lineToParse, vector<string> & toStore){
	//cout << lineToParse<<endl;
	boost::split(toStore, lineToParse, boost::is_any_of(delimit.c_str()));
/*
	for(int counter = 0; counter< toStore.size(); counter++){
		cout << counter <<" " <<toStore[counter] <<endl;
	}
	cout <<"done here"<<endl;
*/
}
/*
boost::tuple<int, bool, bool, std::string, std::string, std::string> getInformation(){
	boost::tuple<int, bool, bool, std::string, std::string, std::string>t1(colNum, header, readHeader, fileLoc, type, delimit, input, headerInfo);
	return t1;
}
bool setInformation(boost::tuple<int, bool, bool, std::string, std::string, std::string>){
}
*/
