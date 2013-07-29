/**
  * @Author Nicholas Joerger
  * @Version 1.0
  * @License GPL V3.0
  * @Comment
  *    Please use to the full extent of the GPL, if used with other projects not associated with GitHub, please email me at my GitHub email.
 */
#ifndef _PERSONINTRINSIC_H
#define _PERSONINTRINSIC_H
#include <string>
#include "Store.h"

class PersonIntrinsic{
	private:
		int calcTotal(int, int, int, int);
		int calcTotal(int, int, int, int, int, bool);
		int calcTotal(int, int, int, int, int, int, bool);
		int calcTotal(int, int, int, int, int, int, int);
		void setHighest();
		std::string role, age, sex, date, motivator;

		int powerValue, independenceValue, curiosityValue, acceptanceValue, orderValue, savingValue, honorValue, idealismValue, socialContactValue, familyValue, statusValue, vengeanceValue, eatingValue, physicalActivityValue, tranquilityValue, motivatorValue;
		//romanceValue;
	public:
		PersonIntrinsic();
		~PersonIntrinsic();
		PersonIntrinsic(std::vector<std::string> &);

		bool setRole(std::string);
		bool setDate(std::string);
		bool setAge(std::string);
		bool setSex(std::string);
		bool setPower(int, int, int, int, int);
		bool setIndependence(int, int, int, int);
		bool setCuriosity(int, int, int, int, int);
		bool setAcceptance(int, int, int, int, int);
		bool setOrder(int, int, int, int);
		bool setSaving(int, int, int, int, int);
		bool setHonor(int, int, int, int);
		bool setIdealism(int, int, int, int, int);
		bool setSocialContact(int, int, int, int, int);
		bool setFamily(int, int, int, int);
		bool setStatus(int, int, int, int, int, int);
		bool setVengeance(int, int, int, int, int, int, int);
//		bool setRomance(int, int, int, int, int, int);
		bool setEating(int, int, int, int);
		bool setPhysicalActivity(int, int, int, int);
		bool setTranquility(int, int, int, int, int);

		std::string getRole();
		std::string getAge();
		std::string getSex();
		int getPower();
		int getIndepedence();
		int getCuriosity();
		int getIdealism();
		int getAcceptance();
		int getOrder();
		int getSocialContact();
		int getSaving();
		int getHonor();
		int getFamily();
		int getStatus();
		int getVengeance();
//		int getRomance();
		int getEating();
		int getPhysicalActivity();
		int getTranquility();
		int getMotivatorValue();
		std::string getMotivator();
		std::vector<int> getAllVector();
};
#endif
