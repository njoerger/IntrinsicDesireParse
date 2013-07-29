/**
  * @Author Nicholas Joerger
  * @Version 1.0
  * @License GPL V3.0
  * @Comment
  *    Please use to the full extent of the GPL, if used with other projects not associated with GitHub, please email me at my GitHub email.
 */
#ifndef _STORE_H 
#define _STORE_H
#include <vector>
#include <iostream>
using namespace std;

class Store{
	private:
		std::vector<std::string> stringVector;
	public:
		Store();
		Store(std::vector<std::string> & );

		std::vector<std::string> getVectorString();
		void getVectorString(std::vector<std::string> &);
		std::string getString(int);

		bool put(std::string);
		bool put(std::vector<std::string>&);

		int sizeMe();
};
#endif
