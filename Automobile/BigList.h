#pragma once
#include <list>
#include "LittleList.h"

class BigList
{
private:
	list<LittleList> AllAutomobiles;
	BigList();
	LittleList* dataList;
	BigList* next;
	/*void showList();
	void writeToFile();
	LittleList readFromFile();
	void sortElements();
	void showStructureOfList();*/
public:
	~BigList();
};

