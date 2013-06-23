#ifndef READER_H
#include <fstream>
#include "Store.h"
#include <vector>
#include <string>

class Reader{
	private:
		int colNum;
		bool header, readHeader;
		std::string fileLoc, type;
		std::string delimit;
		std::fstream input;
		std::vector<std::string> headerInfo;
	public:
		Reader();
		Reader(const Reader&);
		Reader(int, char, std::string, bool, std::string);
		~Reader();
		
		bool hasNext();
		Store next();

/*
		boost::tuple<int, bool, bool, std::string, std::string, std::string> getInformation();
		bool setInformation(boost::tuple<int, bool, bool, std::string, std::string, std::string>);
*/

		void parseDelimiters(std::string, std::vector<std::string>);
};
#endif
