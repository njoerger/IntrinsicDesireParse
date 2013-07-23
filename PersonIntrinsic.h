#ifndef _PERSONINTRINSIC_H
#define _PERSONINTRINSIC_H
#include <string>
#include "Store.h"

class PersonIntrinsic{
	private:
		int inverseValue(int);
		bool setMotivator(int);
		int calcTotal(int, int, int, int);
		//int calcTotal(int, int, int, int, std::vector<int>);
		int calcTotal(int, int, int, int, int, bool);
		//int calcTotal(int, int, int, int, int, bool, std::vector<int>);
		int calcTotal(int, int, int, int, int, int, bool);
		//int calcTotal(int, int, int, int, int, int, bool, std::vector<int>);
		int calcTotal(int, int, int, int, int, int, int);
		//int calcTotal(int, int, int, int, int, int, int, std::vector<int>);
		void setHighest();
		std::string role, age, sex, date, motivator;

		int powerValue, independenceValue, curiosityValue, acceptanceValue, orderValue, savingValue, honorValue, idealismValue, socialContactValue, familyValue, statusValue, vengeanceValue, eatingValue, physicalActivityValue, tranquilityValue, motivatorValue;
/*
		std::vector<int> power, independence, curiosity, acceptance, order, saving, honor, idealism, socialContact, family, status, vengeance, eating, physicalActivity, tranquility, motivator;
*/
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
		bool getMotivatorValue(int);

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
