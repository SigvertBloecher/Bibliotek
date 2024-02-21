#include "Udlaan.h"



Udlaan::Udlaan()
{
}

Udlaan::Udlaan(Laaner enLaaner, Eksemplar etEksemplar, Dato enD)
{
	laaner = enLaaner;
	eksemplar = etEksemplar;
	dato = enD;
}

Laaner Udlaan::getLaaner()
{
	return laaner;
}

Eksemplar Udlaan::getEksemplar()
{
	return eksemplar;
}


Dato Udlaan::getDato()
{
	return dato;
}



Udlaan::~Udlaan()
{
}
