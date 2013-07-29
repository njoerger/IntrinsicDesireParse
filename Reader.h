/**
  * @Author Nicholas Joerger
  * @Version 1.0
  * @License GPL V3.0
  * @Comment
  *    Please use to the full extent of the GPL, if used with other projects not associated with GitHub, please email me at my GitHub email.
 */
#ifndef _READER_H
#define _READER_H
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
		Reader(int, char, std::string, bool, std::string);
		~Reader();
		
		bool hasNext();
		Store next();

		void parseDelimiters(std::string, std::vector<std::string> &);
};
#endif
