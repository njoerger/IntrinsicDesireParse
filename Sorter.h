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

		int studentValues [45] = {0};
		int staffValues[45] = {0};
		int  neitherValues[45] = {0};
		int otherValues[45] = {0};
		std::string namesOfValues[45] ={""};
	public:
		Sorter();
		~Sorter();
		Sorter(std::vector<PersonIntrinsic *> & );
		void print();
		void fillNames();
};
#endif
