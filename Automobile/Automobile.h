#pragma once
#include <string>
#include "tinyxml.h"

using namespace std;

class Automobile
{
private:
	Automobile();
	string mark;
	string regNumber;
	int doors;
	int year;
	double price;
	int K;
	void setK();
public:
	void showElement();
	int getK();
	~Automobile();
	Automobile(string m, string rN, int d, int y, double p);
	Automobile(TiXmlElement* element);
	TiXmlElement* SaveXML();
	string getMark();
};

