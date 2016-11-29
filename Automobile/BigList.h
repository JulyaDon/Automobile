#pragma once
#include "LittleList.h"

class BigList
{
private:
	BigList();
	LittleList* dataList;
	BigList* next;
public:
	~BigList();
};

