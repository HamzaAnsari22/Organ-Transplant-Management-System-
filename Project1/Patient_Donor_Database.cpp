#include <iostream>
#include <fstream>
#include <sstream>
//#include <limits.h>
#include <string>
#include <vector>
//#include <stdlib.h>
#include "Patient_Donor_Database.h"
using namespace std;

string arr[100];
donor* m[20];
patient* m1[20];
donor *head = NULL, *tail = NULL, *best = NULL;
patient *head1 = NULL, *tail1 = NULL,*best1=NULL;
cities *s = NULL, *e = NULL;
string opp = "not";
string opd = "not";

int PatientDonor::countPatients() {
	patient* x=head1;
	int count = 0;
	while (x)
	{
		count++;
		x = x->next;
	}
	return count;
}

int PatientDonor::countDonors() {
	donor* x = head;
	int count = 0;
	while (x)
	{
		count++;
		x = x->next;
	}
	return count;
}

patient* PatientDonor::printPatients() {
	return head1;
}

patient * PatientDonor::updatePatients(string ID)
{
	int id = atoi(ID.c_str());
	if (!id)
		return false;
	patient *x = head1;
	while (x != NULL) {
		if (x->id == id)
		{
			return x;
		}
		else
		{
			x = x->next;
		}
	}
	return NULL;
}

donor * PatientDonor::updateDonors(string ID)
{
	int id = atoi(ID.c_str());
	if (!id)
		return false;
	donor *x = head;
	while (x != NULL) {
		if (x->id == id)
		{
			return x;
		}
		else
		{
			x = x->next;
		}
	}
	return NULL;
}

void PatientDonor::write(std::string wr, std::string op, std::string domain)
{
	if (op == "new")
	{
		ofstream myfile(domain+".txt", ios::app);
		if (myfile.is_open())
		{
			myfile << wr << "\n";

			myfile.close();
		}
		else cout << "Unable to open file";
	}
	if (op == "clr")
	{
		ofstream myfile(domain + ".txt", ios::trunc);
		if (myfile.is_open())
		{
			myfile.close();
		}
		else cout << "Unable to open file";
	}
	if(op!="new"&&op!="clr")
	{
		ofstream myfile(domain+".txt");
		if (myfile.is_open())
		{
			myfile << wr << "\n";

			myfile.close();
		}
		else cout << "Unable to open file";
	}
}

donor* PatientDonor::printDonors() {
	return head;
}

patient *PatientDonor::addPatient1(string ID,string name, string organ, string blood_type, string city,string time_left, string survivability)
{
	int id = atoi(ID.c_str());
	int timeleft = atoi(time_left.c_str());
	int ssrate = atoi(survivability.c_str());
	if (!timeleft || !ssrate)
	{
		return NULL;
	}
	int i = 1 * ((organ == "heart" || organ == "lungs" || organ == "pancreas" || organ == "kidney" || organ == "head" || organ == "intestines" || organ == "liver" || organ == "eyes"));
	if (i == 0) {
		return NULL;
	}
	int j = 1 * (blood_type == "A" || blood_type == "B" || blood_type == "O" || blood_type == "AB" || blood_type == "A-" || blood_type == "A+" || blood_type == "B+" || blood_type == "B-" || blood_type == "O-" || blood_type == "O+") ;
	if (j == 0) {
		return NULL;
	}
	patient *temp;
	patient *obj = new patient;
	if (head1 == NULL)
	{	
		obj->id = id;
		obj->name = name;
		obj->organ = organ;
		obj->blood_type = blood_type;
		obj->location = city;
		obj->survivability = survivability;
		obj->time_left = time_left;
		obj->next = NULL;
		obj->prev = NULL;
		head1 = obj;
		tail1 = head1;
		return head1;
	}
	else
	{
		obj->id = id;
		obj->name = name;
		obj->organ = organ;
		obj->blood_type = blood_type;
		obj->location = city;
		obj->survivability = survivability;
		obj->time_left = time_left;
		obj->next = NULL;
		obj->prev = NULL;
		temp = head1;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = obj;
		obj->prev = temp;
		tail1 = obj;
	}
	return obj;
}

donor *PatientDonor::addDonor1(string ID,string name, string organ, string blood_type, string city)
{
	int id = atoi(ID.c_str());
	int i = 1 * ((organ == "heart" || organ == "lungs" || organ == "pancreas" || organ == "kidney" || organ == "head" || organ == "intestines" || organ == "liver" || organ == "eyes"));
	if (i == 0) {
		return NULL;
	}
	int j = 1 * (blood_type == "A" || blood_type == "B" || blood_type == "O" || blood_type == "AB" || blood_type == "A-" || blood_type == "A+" || blood_type == "B+" || blood_type == "B-" || blood_type == "O-" || blood_type == "O+");
	if (j == 0) {
		return NULL;
	}
	donor *temp;
	donor *obj = new donor;
	if (head == NULL)
	{
	
		obj->id = id;
		obj->name = name;
		obj->organ = organ;
		obj->blood_type = blood_type;
		obj->location = city;
		obj->next = NULL;
		obj->prev = NULL;
		head = obj;
		tail = head;
		return head;
	}
	else
	{
		obj->id = id ;
		obj->name = name;
		obj->organ = organ;
		obj->blood_type = blood_type;
		obj->location = city;
		obj->next = NULL;
		obj->prev = NULL;
		temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = obj;
		obj->prev = temp;
		tail = obj;	
	}
	return obj;
}

int PatientDonor::gettailid(int a)
{
	if (a && tail1)
	{
		return tail1->id+1;
	}
	else if(!a && tail)
	{
		return tail->id+1;
	}
	else
	{
		return 1;
	}
}

int PatientDonor::getphead()
{
	return head1->id;
}

int PatientDonor::getdhead()
{
	return head->id;
}

bool PatientDonor::deletePatient(string ID) {
	//for (int i = 0; i < 7; i++) {
		//for (int j = 0; j < 4; j++) {
	int id = atoi(ID.c_str());
	if (!id)
		return false;
	patient *x=head1;
			while (x != NULL) {
				if (x->id == id) {
					if (x->next == NULL && x->prev == NULL) {
						head1 = NULL;
						tail1 = NULL;
						delete x;
						return true;
					}
					if (x->next == NULL) {
						x->prev->next = NULL;
						tail1 = x->prev;
						delete x;
						return true;
					}
					if (x->prev == NULL) {
						x->next->prev = NULL;
						head1 = x->next;
						delete x;
						return true;
					}
					else {
						x->prev->next = x->next;
						x->next->prev = x->prev;
						delete x;
						return true;
					}
				}
				x = x->next;
			}
		//}
	//}
	return false;
}

bool PatientDonor::deleteDonor(string ID) {
	int id = atoi(ID.c_str());
	if (!id)
		return false;
	donor *x = head;
	while (x != NULL) {
		if (x->id == id) {
			if (x->next == NULL && x->prev == NULL) {
				head = NULL;
				tail = NULL;
				delete x;
				return true;
			}
			if (x->next == NULL) {
				x->prev->next = NULL;
				tail = x->prev;
				delete x;
				return true;
			}
			if (x->prev == NULL) {
				x->next->prev = NULL;
				head = x->next;
				delete x;
				return true;
			}
			else {
				x->prev->next = x->next;
				x->next->prev = x->prev;
				delete x;
				return true;
			}
		}
		x = x->next;
	}
	return false;
}

patient * PatientDonor::getbest1()
{
	if (best1)
		return best1;
	else
		return NULL;
}

void PatientDonor::setbest1(patient * a)
{
	best1 = a;
}

donor * PatientDonor::getbest()
{
	if (best)
		return best;
	else
		return NULL;
}

void PatientDonor::setbest(donor * a)
{
	best = a;
}

cities* PatientDonor::getcity(string city)
{
	cities *temp = s;
	while (temp)
	{
		if (temp->city == city)
		{
			return temp;
		}
		temp = temp->next;
	}

	return NULL;
}

donor * PatientDonor::findd(patient * p)
{
	string organ = p->organ;
	string btype = p->blood_type;
	string city = p->location;
	cities* cur;
	cur=getcity(city);
	if (!cur)
		return NULL;
	donor *temp = head;
	int i = 0, k = 0;
	if (temp == NULL)
	{
		return temp;
	}
	else
	{
		while (temp)
		{
			if (temp->organ == organ&&temp->blood_type == btype)
			{
				m[i] = temp;
				i++;
			}
			temp = temp->next;
		}		
		for (int p = 0; p < i; p++)
		{
			if (cur->city == m[p]->location)
			{
				return m[p];
			}
		}
		if (cur->distancetonext < cur->distancetoprev)
		{
			if (cur->distancetonext == 0)
			{
				for (int p = 0; p < i; p++)
				{
					if (cur->prev->city == m[p]->location)
					{
						return m[p];
					}
				}
			}
			else
			{
				for (int p = 0; p < i; p++)
				{
					if (cur->next->city == m[p]->location)
					{
						return m[p];
					}
				}
				for (int p = 0; p < i; p++)
				{
					if (cur->prev->city == m[p]->location)
					{
						return m[p];
					}
				}
			}
		}
		if (cur->distancetoprev < cur->distancetonext)
		{
			if (cur->distancetoprev == 0)
			{
				for (int p = 0; p < i; p++)
				{
					if (cur->next->city == m[p]->location)
					{
						return m[p];
					}
				}
			}
			else
			{
				for (int p = 0; p < i; p++)
				{
					if (cur->prev->city == m[p]->location)
					{
						return m[p];
					}
				}
				for (int p = 0; p < i; p++)
				{
					if (cur->next->city == m[p]->location)
					{
						return m[p];
					}
				}
			}
		}

	}
	return NULL;
}

patient* PatientDonor::findp(donor * p)
{
	string organ = p->organ; 
	string btype = p->blood_type; 
	string city = p->location;
	cities* cur;
	cur = getcity(city);
	if (!cur)
		return NULL;

	patient *temp = head1;
	int i = 0, k = 0;
	if (temp == NULL)
	{
		return temp;
	}
	else
	{
		while (temp)
		{
			if (temp->organ == organ&&temp->blood_type == btype)
			{
				m1[i] = temp;
				i++;
			}
			temp = temp->next;
		}

		for (int p = 0; p < i; p++)
		{
			if (cur->city == m1[p]->location)
			{
				return m1[p];
			}
		}
	
		if (cur->distancetonext < cur->distancetoprev)
		{
			if (cur->distancetonext == 0)
			{
				for (int p = 0; p < i; p++)
				{
					if (cur->prev->city == m1[p]->location)
					{
						return m1[p];
					}
				}
			}
			else
			{
				for (int p = 0; p < i; p++)
				{
					if (cur->next->city == m1[p]->location)
					{
						return m1[p];
					}
				}
				for (int p = 0; p < i; p++)
				{
					if (cur->prev->city == m1[p]->location)
					{
						return m1[p];
					}
				}
			}
		}
		if (cur->distancetoprev < cur->distancetonext)
		{
			if (cur->distancetoprev == 0)
			{
				for (int p = 0; p < i; p++)
				{
					if (cur->next->city == m1[p]->location)
					{
						return m1[p];
					}
				}
			}
			else
			{
				for (int p = 0; p < i; p++)
				{
				
					if (cur->prev->city == m1[p]->location)
					{
						return m1[p];
					}
				}
				for (int p = 0; p < i; p++)
				{
					if (cur->next->city == m1[p]->location)
					{
						return m1[p];
					}
				}
			}
		}

	}
	return NULL;
}

void PatientDonor::setcities() { 
	string cname[5] = { "karachi","hyderabad","sukkur","lahore","islamabad" };
	int cdis[10] = { 4,6,12,5,0,0,4,6,12,5 };
	for (int i = 0; i < 5; i++)
	{
		cities *temp;
		temp = s;
		cities *n = new cities();
		n->city = cname[i];
		n->distancetonext = cdis[i];
		n->distancetoprev = cdis[i + 5];
		n->next = NULL;
		n->prev = NULL;
		if (temp == NULL)
		{
			s = n;
		}
		else
		{
			while (temp->next!=NULL)
			{
				temp = temp->next;
			}
			temp->next = n;
			n->prev = temp;
		}
	}
}

donor * PatientDonor::search(string a)
{

	int id = atoi(a.c_str());
	if (!id)
		return false;
	donor *x = head;
	while (x != NULL) {
		if (x->id == id)
		{
			return x;
		}
		else
		{
			x = x->next;
		}
	}
	return NULL;
}

patient * PatientDonor::search1(string a)
{

	int id = atoi(a.c_str());
	if (!id)
		return false;
	patient *x = head1;
	while (x != NULL) {
		if (x->id == id)
		{
			return x;
		}
		else
		{
			x = x->next;
		}
	}
	return NULL;
}

void PatientDonor::updatedeletep()
{
	patient *p = head1;
	if (p == NULL)
	{
		write("", "clr", "plist");
	}
	else
	{
		while (p)
		{
			string a;
			string k = to_string(p->id);
			a = k + "," + p->name + "," + p->organ + "," + p->blood_type + "," + p->location + "," + p->survivability + "," + p->time_left;
			write(a, opp, "plist");
			opp = "new";
			p = p->next;
		}
		opp = "not";
	}
}

void PatientDonor::updatedeleted()
{
	donor *p = head;
	if (p == NULL)
	{
		write("", "clr", "dlist");
	}
	else
	{
		while (p)
		{
			string a;
			string k = to_string(p->id);
			a = k + "," + p->name + "," + p->organ + "," + p->blood_type + "," + p->location ;
			write(a, opd, "dlist");
			opd = "new";
			p = p->next;
		}
		opd = "not";
	}
}

void PatientDonor::loadp()
{
	ifstream textFile;
	textFile.open("plist.txt");
	string line;
	string tempLine;
	string name;
	string id;
	string organ;
	string blood_type;
	string city;
	string successRate;
	string time;
	while (!textFile.eof()) {

		getline(textFile, line, ',');
		id = line;

		getline(textFile, line, ',');
		name = line;

		getline(textFile, line, ',');
		organ = line;

		getline(textFile, line, ',');
		blood_type = line;

		getline(textFile, line, ',');
		city = line;

		getline(textFile, line, ',');
		successRate = line;

		getline(textFile, line);
		time = line;

		if (!textFile.eof()) {
				addPatient1(id,name, organ, blood_type, city, time, successRate);
		}
	}
}

void PatientDonor::loadd()
{
	ifstream textFile;
	textFile.open("dlist.txt");
	string line;
	string tempLine;
	string name;
	string id;
	string organ;
	string blood_type;
	string city;
	while (!textFile.eof()) {

		getline(textFile, line, ',');
		id = line;

		getline(textFile, line, ',');
		name = line;

		getline(textFile, line, ',');
		organ = line;

		getline(textFile, line, ',');
		blood_type = line;

		getline(textFile, line);
		city = line;
	

		if (!textFile.eof()) {
			addDonor1(id, name, organ, blood_type, city);			
		}
	}
}
