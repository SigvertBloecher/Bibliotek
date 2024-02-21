#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Forfatter.h"


using namespace std;
class Bog
{
public:
	Bog();
	Bog(string enTitel, Forfatter enForfatter);
	string getTitel();
	Forfatter getForfatter();
	~Bog();

protected:
	string titel;
	Forfatter forfatteren;
};

