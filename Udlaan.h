#pragma once
#include <iostream>
#include "Dato.h"
#include "Eksemplar.h"
#include "Laaner.h"
#include <string>


using namespace std; 

class Udlaan 
{
public:
	Udlaan();
	Udlaan(Laaner enLaaner, Eksemplar etEksemplar, Dato enD);
	Laaner getLaaner();
	Eksemplar getEksemplar();
	Dato getDato();

	~Udlaan();

protected:
	Laaner laaner;
	Eksemplar eksemplar;
	Dato dato;
};

