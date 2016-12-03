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
	/*TiXmlDocument doc;
	TiXmlDeclaration *decl = new TiXmlDeclaration("1.0", "", "");
	TiXmlElement *element = myLittleList.SaveLittleListXml();
	doc.LinkEndChild(decl);
	doc.LinkEndChild(element);
	doc.SaveFile("TestXML.txt");*/
	TiXmlDocument doc("TestXML.txt");
	doc.LoadFile();
	TiXmlHandle hDoc(&doc);
	TiXmlElement* element = hDoc.FirstChild("LittleRoot").ToElement();
	LittleList myNewLittleList(element);
	//Automobile autom(element);


	cout << "End!" << endl;

	int a = 0;
	_getch();
	return 0;
}