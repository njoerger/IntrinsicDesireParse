#ifndef _SORTER_H
#define _SORTER_H
#include <vector>
#include <string>
#include "PersonIntrinsic.h"
#include <map>


class Sorter{
	private:
		multimap<int, std::string> student;
		multimap<int, std::string> staff;
		multimap<int, std::string> neither;
		multimap<int, std::string> other;

		int studentValues [15] = {0};
		int staffValues[15] = {0};
		int  neitherValues[15] = {0};
		int otherValues[15] = {0};
		std::string namesOfValues[15] ={""};
	public:
		Sorter();
		~Sorter();
		Sorter(std::vector<PersonIntrinsic *> & );
		void print();
		void fillNames();
};
#endif
