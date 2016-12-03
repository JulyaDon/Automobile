#include "LittleList.h"
#include <iostream>

using namespace std;

LittleList::LittleList()
{
	MyAutomobile = new list<Automobile>();
}


LittleList::~LittleList()
{
	delete MyAutomobile;
}

void LittleList::AddStart(Automobile element)
{
	MyAutomobile->push_front(element);
}

void LittleList::AddEnd(Automobile element)
{
	MyAutomobile->push_back(element);
}

void LittleList::AddNumber(Automobile element, int number)
{
	auto insertPosition = MyAutomobile->begin();
	for (int i = 0; i < number; i++, insertPosition++) {

	}
	MyAutomobile->insert(insertPosition, element);
}

void LittleList::AddKey(Automobile element, int K)
{
	auto insertPosition = MyAutomobile->begin();
	for (int i = 0;insertPosition!=MyAutomobile->end(); i++, insertPosition++) {
		if (insertPosition->getK() == K) break;
	}
	if (insertPosition == MyAutomobile->end())
	{
		cout << "There is no key with the same number." << endl;
		return;
	}
	insertPosition++;
	MyAutomobile->insert(insertPosition, element);
}

void LittleList::showLittleList()
{
	auto it = MyAutomobile->begin();
	for (int i = 0; it != MyAutomobile->end(); it++, i++) {
		cout << i << endl; //3.1 ����� ��������
		it->showElement(); //3.2 ���������� ���� ������
		cout << it->getK() << endl;
		auto it1 = it;
		it1++;
		if (it1 != MyAutomobile->end())
		{
			cout << &(*(it1)) << endl; //3.3 �������� ��������� �� ��������� �������
		}
		else
		{
			cout << 0 << endl;
		}
		it1--;
		if (it != MyAutomobile->begin())
		{
			it1--;
			cout << &(*(it1)) << endl; //3.4 �������� ��������� �� ���������� �������
		}
		else
		{
			cout << 0 << endl;
		}
		cout << endl;
	}
}

void LittleList::DeleteStart()
{
	MyAutomobile->pop_front();
}

void LittleList::DeleteEnd()
{
	MyAutomobile->pop_back();
}

void LittleList::DeleteByNumber(int number)
{
	auto deletePosition = MyAutomobile->begin();
	for (int i = 0; i < number; i++, deletePosition++) {
	}
	MyAutomobile->erase(deletePosition);
}

void LittleList::DeleteByKey(int K)
{
	auto deletePosition = MyAutomobile->begin();
	for (int i = 0; deletePosition != MyAutomobile->end(); i++, deletePosition++) {
		if (deletePosition->getK() == K) break;
	}
	if (deletePosition == MyAutomobile->end())
	{
		cout << "There is no key with the same number." << endl;
		return;
	}
	MyAutomobile->erase(deletePosition);
}

TiXmlElement * LittleList::SaveLittleListXml()
{
	TiXmlElement* root = new TiXmlElement("LittleRoot");
	for (auto it = MyAutomobile->begin(); it !=MyAutomobile->end(); it++)
	{
		root->LinkEndChild(it->SaveXML());
	}
	return root;
}

LittleList::LittleList(TiXmlElement * element)
{
	MyAutomobile = new list<Automobile>();
	TiXmlElement *currentElement = element->FirstChildElement();
	for (; currentElement; currentElement=currentElement->NextSiblingElement())
	{
		MyAutomobile->push_back(Automobile(currentElement));
	}
}

void LittleList::sorByMark()
{
	
}
