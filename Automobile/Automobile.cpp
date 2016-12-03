#include "Automobile.h"
#include <iostream>
#include <stdio.h>


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

Automobile::Automobile(TiXmlElement * element)
{
	this->K=atoi(element->Attribute("key"));
	this->mark=string(element->FirstChild("mark")->ToElement()->GetText());
	this->regNumber = string(element->FirstChild("regNumber")->ToElement()->GetText());
	this->doors = atoi(element->FirstChild("doors")->ToElement()->GetText());
	this->year = atoi(element->FirstChild("year")->ToElement()->GetText());
	this->price = atof(element->FirstChild("price")->ToElement()->GetText());
}

TiXmlElement * Automobile::SaveXML()
{
	TiXmlElement* element = new TiXmlElement("Automobile");
	element->SetAttribute("key", getK());

	TiXmlElement* xmlMark = new TiXmlElement("mark");
	xmlMark->LinkEndChild(new TiXmlText(mark.c_str()));
	element->LinkEndChild(xmlMark);

	TiXmlElement* xmlRegNumber = new TiXmlElement("regNumber");
	xmlRegNumber->LinkEndChild(new TiXmlText(regNumber.c_str()));
	element->LinkEndChild(xmlRegNumber);

	TiXmlElement* xmlDoors = new TiXmlElement("doors");
	char d[10];
	_itoa_s(doors, d, 10);
	xmlDoors->LinkEndChild(new TiXmlText(d));
	element->LinkEndChild(xmlDoors);

	TiXmlElement* xmlYear = new TiXmlElement("year");
	_itoa_s(year, d, 10);
	xmlYear->LinkEndChild(new TiXmlText(d));
	element->LinkEndChild(xmlYear);

	char cprice[21];
	sprintf_s(cprice, "%f", price);
	TiXmlElement* xmlPrice = new TiXmlElement("price");
	xmlPrice->LinkEndChild(new TiXmlText(cprice));
	element->LinkEndChild(xmlPrice);

	return element;
}

string Automobile::getMark()
{
	return mark;
}
