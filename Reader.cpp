/**
  * @Author Nicholas Joerger
  * @Version 1.0
  * @License GPL V3.0
  * @Comment
  *    Please use to the full extent of the GPL, if used with other projects not associated with GitHub, please email me at my GitHub email.
 */
#include <string>
#include <fstream>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "Reader.h"
#include "boost/tuple/tuple.hpp"

using namespace std;

/**
  * Reader - defualt constructor
 */
Reader::Reader(){
	colNum = 1;
	header = 0;
	fileLoc = "";
	type = "int";
	delimit = ",";
	readHeader = false;
}
/**
  * Reader - parameterized constructor used for bring information into the object
  * @param numCol - number of columns in the csv file
  * @param delim - the delimiter used in the csv
  * @param typ - the type of information stored within the text file
  * @param head - if there is a header within the text file
  * @param fileLo - file path to the text file
 */
Reader::Reader(int numCol, char delim, string typ, bool head, string fileLo){
	colNum = numCol;
	header = head;
	fileLoc = fileLo;
	type = typ;
	delimit = delim;
	readHeader = false;

	input.open(fileLo.c_str(), fstream::in | fstream::out); 
}
/**
  * destructor - closes text file
 */
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
/**
  * next - used to retrive the next line of information from the text file
  * @return Store - returns a Store object
 */
Store Reader::next(){
	string line;
	vector<string> tempVec;
	//checks to see if there is another line to read
	if (hasNext()){
		//checks to see if there is a header or if the header has been read
		if (header && !readHeader){
			//reads the header and changes the header to read
			getline(input, line);
			readHeader= true;

			//parse and stores then returns
			parseDelimiters(line, headerInfo);
			Store s(headerInfo);
			return s;
		}
		else{
			//other wise it gets the information from the file and parses it then stores and returns
			getline(input, line);
			parseDelimiters(line, tempVec);
			Store s(tempVec);
			return s;
		}
	}
}
/**
  * parseDelimiters - is used to 'cut' a line based on its delimiter, mostly used to make the code easier to read
  * @param lineToParse - line that you want the delimiters cut from
  * @param toStore - the vector that will be used to store the list of information to be sent back to the calling method
 */
void Reader::parseDelimiters(string lineToParse, vector<string> & toStore){
	//cout << lineToParse<<endl;
	boost::split(toStore, lineToParse, boost::is_any_of(delimit.c_str()));
}
