#pragma once
#include "Bog.h"

class Eksemplar 
{
public:
	Eksemplar();
	Eksemplar(Bog enBog, int etEksemplarID);
	Bog getBog();
	int getEksemplar();


	~Eksemplar();
protected:
	Bog bog;
	int eksemplarID;
};

