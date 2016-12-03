#pragma once
#include <list>
#include "Automobile.h"
class LittleList
{
private:
	list<Automobile> *MyAutomobile;
	
public:
	LittleList();//1. �������� ������� ������
	~LittleList();
	void AddStart(Automobile element); //2.1 ���������� �������� � ������ ������
	void AddEnd(Automobile element); //2.2 ���������� �������� � ����� ������
	void AddNumber(Automobile element, int number); //2.3 ���������� �������� ����� �������� � �������� �������
	void AddKey(Automobile element, int K); //2.4 ���������� �������� ����� �������� � �������� ������
	void showLittleList(); //3. ������ ������
	void DeleteStart(); //4.1 �������� �������� �� ������ ������
	void DeleteEnd(); //4.2 �������� �������� �� ����� ������
	void DeleteByNumber(int number); //4.3 �������� �������� � �������� �������
	void DeleteByKey(int K); //4.4 �������� �������� � �������� ������
};

