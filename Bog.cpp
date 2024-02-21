#include "Bog.h"



Bog::Bog()
{
}

Bog::Bog(string enTitel, Forfatter enForfatter)
{
	titel = enTitel;
	forfatteren = enForfatter;
	
}

string Bog::getTitel()
{
	return titel;
}

Forfatter Bog::getForfatter()
{
	return forfatteren;
}

Bog::~Bog()
{
}
