#ifndef _SORTER_H
#define _SORTER_H
#include <vector>
#include <string>
#include "PersonIntrinsic.h"

//typedef std::unordered_map<std::string,int> IntrinsicValues;

class Sorter{
	private:
/*
		IntrinsicValues studentValues;
		IntrinsicValues staffValues;
		IntrinsicValues neitherValues;
		IntrinsicValues otherValues;
*/
		
		int studentValues [16] = {0};
		int staffValues[16] = {0};
		int  neitherValues[16] = {0};
		int otherValues[16] = {0};
	public:
		Sorter();
		~Sorter();
		Sorter(std::vector<PersonIntrinsic *> & );
//		bool setValue(IntrinsicValues &, std::string, int);
		void print();
};
#endif
