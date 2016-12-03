#pragma once
#include <list>
#include "Automobile.h"
class LittleList
{
private:
	list<Automobile> *MyAutomobile;
	
public:
	LittleList();//1. Создание пустого списка
	~LittleList();//6. Уничтожение списка
	void AddStart(Automobile element); //2.1 Добавление элемента в начало списка
	void AddEnd(Automobile element); //2.2 Добавление элемента в конец списка
	void AddNumber(Automobile element, int number); //2.3 Добавление элемента после элемента с заданным номером
	void AddKey(Automobile element, int K); //2.4 Добавление элемента после элемента с заданным ключем
	void showLittleList(); //3. Печать списка
	void DeleteStart(); //4.1 Удаление элемента из начала списка
	void DeleteEnd(); //4.2 Удаление элемента из конца списка
	void DeleteByNumber(int number); //4.3 Удаление элемента с заданным номером
	void DeleteByKey(int K); //4.4 Удаление элемента с заданным ключом
	TiXmlElement* SaveLittleListXml(); //5 Запись списка в файл
	LittleList(TiXmlElement* element);
	void sorByMark();
};

