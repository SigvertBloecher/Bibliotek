#pragma once
#include <string>
#include <iostream>
#include "Person.h"

using namespace std;
class Laaner : public Person
{
public:
	Laaner();
	Laaner(string etNavn, int etID);
	

	int getLaanerID();
	~Laaner();

protected:
	int laanerID;
	

	
};

