#include <fstream>
#include <vector>
#include <cctype>
#include <cstring>
#include <string>
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include "Reader.h"
#include "PersonIntrinsic.h"
#include "Sorter.h"

using namespace std;

bool checkCmdLineArg(int, char**);
bool checkFileExists(string);

void printInfo(std::vector<std::string> val){
	for(int counter = 1; counter < val.size();counter++){
		cout << endl<< val.at(counter) << endl;
	}
}
int main(int argc, char ** argv){
	if(!checkCmdLineArg(argc, argv)){
		cout << "Usage: " << argv[0] << " \"number of columns\" delimit \"type of data (int, string, double)\" \"Header?(0,1)\" \"Total File Path\""<<endl;
		return 1;
	}
	
	int cols = atoi(argv[1]);
	char delim = *argv[2];
	string type = string(argv[3]);
	bool head = (bool) argv[4];
	std::string tfp = boost::lexical_cast<std::string>(argv[5]);

	Reader r (cols, delim, type, head, tfp);
	
	std::vector<Store *> testCases;
	int counterme = 0;
	while(r.hasNext()){
		Store* s = new Store;
		*s = r.next();
		//cout <<" In dis loop: " << temp.getVectorString().size()<<endl;
		testCases.push_back(s);
		
		//cout <<testCases.at(counterme++)->sizeMe() <<endl;
		//cout<< testCases.at(testCases.size())->getVectorString().size() <<endl;
	}
/*
*/
	std::vector<PersonIntrinsic *> person;
	for (int counter = 1; counter < testCases.size(); counter++){
		//cout << "This one's size: " <<testCases.size() <<endl;
		std::vector<std::string> localVar;
		Store *temporary;

		temporary = testCases.at(counter);
		localVar = temporary->getVectorString();
		//cout << "That one's size: " << localVar.size()<<endl;

		//printInfo(localVar);
		PersonIntrinsic * temp1 = new PersonIntrinsic(localVar);
		//cout << "Case finished" <<endl;
		person.push_back(temp1);
	}
	//store into another array =calc static method(pass vector)
	Sorter sort(person);

	//print/write
	sort.print();

	return 0;
}
bool checkCmdLineArg(int numArg, char** arg){
	if (numArg != 6)
		return false;
	if(*arg[1] <1)
		return false;

	string temp = string (arg[3]);
	boost::algorithm::to_lower(temp);

	if((strcmp(arg[3], "int")) || (strcmp(arg[3], "double")) || (strcmp(arg[3], "string")))
		return true;

	temp = string(arg[5]);
	return checkFileExists(temp);
}
bool checkFileExists(string filePath){
	ifstream ifile(filePath.c_str());
	if (ifile != NULL)
		return true;
	else
		return false;
}
