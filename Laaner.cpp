#include "Laaner.h"




Laaner::Laaner()
{
}

Laaner::Laaner(string etNavn, int etID)
{
	navn = etNavn;
	laanerID = etID;
}



int Laaner::getLaanerID()
{
	return laanerID;
}

Laaner::~Laaner()
{
}
