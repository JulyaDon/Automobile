#include "Automobile.h"
#include <iostream>



Automobile::Automobile()
{
}


void Automobile::setK()
{
	K = 0;
	
	for (int i = 0; i < mark.length(); i++) {
		K += mark[i];
	}
}

void Automobile::showElement()
{
	cout << mark << endl;
	cout << regNumber << endl;
	cout << doors << endl;
	cout << year << endl;
	cout << price << endl;

}

int Automobile::getK()
{
	return K;
}

Automobile::~Automobile()
{
}

Automobile::Automobile(string m, string rN, int d, int y, double p)
{
	this->mark = m;
	this->regNumber = rN;
	this->doors = d;
	this->year = y;
	this->price = p;
	setK();
}
