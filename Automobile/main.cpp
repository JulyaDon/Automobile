#include <iostream>
#include <conio.h>
#include <list>
#include "Automobile.h"
#include "LittleList.h"


int main() {

	LittleList myLittleList;
	myLittleList.AddStart(Automobile("FirstA", "FirstNumber", 1, 1, 1));
	myLittleList.AddEnd(Automobile("SecondA1", "SecondNumber", 2, 2, 2));
	myLittleList.AddNumber(Automobile("ThirdA", "ThirdNumber", 3, 3, 3), 2);
	myLittleList.AddKey(Automobile("FourthA", "FourthNumber", 4, 4, 4), 18);
	myLittleList.showLittleList();
	//myLittleList.DeleteStart();
	//myLittleList.DeleteEnd();
	//myLittleList.DeleteByNumber(1);
	//myLittleList.DeleteByKey(55);
	int a = 0;
	_getch();
	return 0;
}