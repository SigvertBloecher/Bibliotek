#pragma once
#include <string>
#include "Dato.h"





using namespace std;
class Person
{
public:
	Person();
	Person(string etN, Dato enF);
	string getNavn();
	Dato getFoedselsdag();
	~Person();

protected:
	string navn;
	Dato foedselsdag;


};

