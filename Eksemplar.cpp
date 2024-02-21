#include "Eksemplar.h"



Eksemplar::Eksemplar()
{
}

Eksemplar::Eksemplar(Bog enBog, int etEksemplarID)
{
	bog = enBog;
	eksemplarID = etEksemplarID;
}

Bog Eksemplar::getBog()
{
	return bog;
}

int Eksemplar::getEksemplar()
{
	return eksemplarID;
}

Eksemplar::~Eksemplar()
{
}
