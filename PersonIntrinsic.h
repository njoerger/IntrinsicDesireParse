#ifndef _PERSONINTRINSIC_H
#define _PERSONINTRINSIC_H
#include <string>
#include "Store.h"

class PersonIntrinsic{
	private:
		int inverseValue(int);
		bool setMotivator(double);
		double calcTotal(int, int, int, int);
		double calcTotal(int, int, int, int, int, bool);
		double calcTotal(int, int, int, int, int, int, bool);
		double calcTotal(int, int, int, int, int, int, int);
		std::string role, age, sex, date, motivator;
		double powerValue, independenceValue, curiosityValue, acceptanceValue, orderValue, savingValue, honorValue, idealismValue, socialContactValue, familyValue, statusValue, vengeanceValue, eatingValue, physicalActivityValue, tranquilityValue, motivatorValue;
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
		double getPower();
		double getIndepedence();
		double getCuriosity();
		double getAcceptance();
		double getOrder();
		double getSaving();
		double getHonor();
		double getIdealism();
		double getSocialContact();
		double getFamily();
		double getStatus();
		double getVengeance();
//		double getRomance();
		double getEating();
		double getPhysicalActivity();
		double getTranquility();
		double getMotivatorValue();
		std::string getMotivator();
};
#endif
