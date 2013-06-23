#ifndef STORE_H 
#include <vector>
#include <iostream>
using namespace std;

class Store{
	private:
		std::vector<std::string> stringVector;
	public:
		Store();
		Store( Store&);
		Store(std::vector<std::string>);

		std::vector<std::string> getVectorString();
		std::string getString(int);

		bool put(std::string);
		bool put(std::vector<std::string>);
};
#endif
