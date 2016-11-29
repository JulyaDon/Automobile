#pragma once
#include "Automobile.h"
class LittleList
{
private:
	LittleList();
	Automobile autoData;
	LittleList* next;
public:
	~LittleList();
};

