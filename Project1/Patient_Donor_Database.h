#ifndef PATIENTLIST_H
#define PATIENTLIST_H
#include "string"
#include <vector>
#include <fstream>

struct donor {
	int id;
	std::string name;
	std::string organ;
	std::string blood_type;
	std::string location;
	donor* next;
	donor* prev;
};

struct cities {
	std::string city;
	int distancetonext;
	int distancetoprev;
	cities* next;
	cities* prev;
};

struct patient {
	int id;
	std::string name;
	std::string organ;
	std::string blood_type;
	std::string survivability;
	std::string location;
	std::string time_left;
	patient* next;
	patient* prev;
};

class PatientDonor
{

public:
	donor* test;
	patient* getbest1();
	void setbest1(patient* a);
	donor* getbest();
	void setbest(donor* a);
	cities* getcity(std::string city);
	donor* findd(patient *p);
	patient* findp(donor *p);
	void updatedeletep();
	void updatedeleted();
	void loadp();
	void loadd();
	void setcities();
	patient* addPatient1(std::string ID,std::string name, std::string organ, std::string blood_type, std::string city, std::string time_left, std::string survivability);
	donor* addDonor1(std::string ID,std::string name, std::string organ, std::string blood_type, std::string city);
	int gettailid(int a);
	int getphead();
	int getdhead();
	bool deletePatient(std::string ID);
	bool deleteDonor(std::string ID);
	int countPatients();
	int countDonors();
	donor* printDonors();
	patient* printPatients();
	patient* updatePatients(std::string ID);
	donor* updateDonors(std::string ID);
	void write(std::string wr, std::string op, std::string domain);
	donor* search(std::string a);
	patient* search1(std::string a);

};
#endif 