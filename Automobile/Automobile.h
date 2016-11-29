#pragma once
#include <string>

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
public:
	~Automobile();
	Automobile(string mark, string regNumber, int doors, int year, double price);
};

