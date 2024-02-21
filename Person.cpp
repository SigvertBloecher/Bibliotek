#include "Person.h"



Person::Person()
{
}
Person::Person(string etN, Dato enF)
{
	navn = etN;
	foedselsdag = enF;
}

string Person::getNavn()
{
	return navn;
}

Dato Person::getFoedselsdag()
{
	return foedselsdag;
}

Person::~Person()
{
}
