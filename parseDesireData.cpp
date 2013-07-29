/**
  * @Author Nicholas Joerger
  * @Version 1.0
  * @License GPL V3.0
  * @Comment
  *    Please use to the full extent of the GPL, if used with other projects not associated with GitHub, please email me at my GitHub email.
 */
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

/**
  * main used to execute the program and to bring in the needed command line arguments
  * @param argc used to see what the number of command line arguments that are present
  * @param argv the actual command line arguments present
  * @return an exit status and a text file in the running location of this program (assuming proper execution of the program)
 */
int main(int argc, char ** argv){
	//checking if the command line arguments are correct
	if(!checkCmdLineArg(argc, argv)){
		cout << "Usage: " << argv[0] << " \"number of columns\" delimit \"type of data (int, string, double)\" \"Header?(0,1)\" \"Total File Path\""<<endl;
		return 1;
	}
	
	//inserting of checked information
	int cols = atoi(argv[1]);
	char delim = *argv[2];
	string type = string(argv[3]);
	bool head = (bool) argv[4];
	std::string tfp = boost::lexical_cast<std::string>(argv[5]);

	//creation of CSV reader 
	Reader r (cols, delim, type, head, tfp);
	
	//used to store each test case
	std::vector<Store *> testCases;
	int counterme = 0;
	
	//reads the next then stores it into test cases
	while(r.hasNext()){
		Store* s = new Store;
		*s = r.next();
		testCases.push_back(s);
	}

	//used to store the calculated scores of each person
	std::vector<PersonIntrinsic *> person;
	for (int counter = 1; counter < testCases.size(); counter++){
		std::vector<std::string> localVar;
		Store *temporary;

		temporary = testCases.at(counter);
		localVar = temporary->getVectorString();

		PersonIntrinsic * temp1 = new PersonIntrinsic(localVar);
		person.push_back(temp1);
	}
	//store into another array =calc static method(pass vector)
	Sorter sort(person);

	//print/write
	sort.print();

	//freeing memory
	for(int counter =0; testCases.size() > counter; counter++)
		delete testCases[counter];
	testCases.clear();

	//freeing memory
	for(int counter =0; person.size() > counter; counter++)
		delete person[counter];
	person.clear();

	//exit call
	return 0;
}
/**
  * checkCmdLineArg used to make sure that the command line arguments fit the needed parameters
  * @param numArg is used to check to make sure the right number of args is present
  * @param arg is the arguments that are being checked
  * @return true if hte values are clean false if the values are not correct
 */
bool checkCmdLineArg(int numArg, char** arg){
	if (numArg != 6)
		return false;
	//making sure that the number of columns is greater than 1
	if(*arg[1] <1)
		return false;

	//making sure that the type is one of the accepted below
	string temp = string (arg[3]);
	boost::algorithm::to_lower(temp);
	if((strcmp(arg[3], "int")) || (strcmp(arg[3], "double")) || (strcmp(arg[3], "string")))
		return true;

	//checking if the file path exists
	temp = string(arg[5]);
	return checkFileExists(temp);
}
/**
  * checkFileExists checks to see if the file exists
  * @param filePath to the file that is going to be checked
  * @return true if it exists false if it doesn't
 */
bool checkFileExists(string filePath){
	//creating object then opening it, if the pointer is not null then return true else false
	ifstream ifile(filePath.c_str());
	if (ifile != NULL)
		return true;
	else
		return false;
}
