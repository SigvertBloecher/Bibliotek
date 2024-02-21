#include "Bibliotek.h"



Bibliotek::Bibliotek()
{
	udlaan.resize(0);
	forfattere.resize(0);
}

int Bibliotek::tjekOmBogErTilgaengelig(const string& bogtitel) 
{
	int dato = 0;
	for (int m = 0; m < udlaan.size(); m++)
	{
		
		
		
			if (udlaan[m].getEksemplar().getBog().getTitel() == bogtitel)
			{

				dato = udlaan[m].getDato().getDatoen() + 100;
			}
			
		}
	return dato;
	}


	



void Bibliotek::listLaanersLaan(const string& etNavn)
{
	cout << etNavn << endl;
	for (int i = 0; i < udlaan.size(); i++)
	{
		if (udlaan[i].getLaaner().getNavn() == etNavn)
		{
			cout << udlaan[i].getEksemplar().getBog().getForfatter().getNavn() << ", " << udlaan[i].getEksemplar().getBog().getTitel() << " " << "Udlaansdato: "<< udlaan[i].getDato().getDatoen() << endl;
		}
	}
}

void Bibliotek::fyldForfatter()
{	
	int forfatterSize;
	bool match = false;
	for (int i = 0; i < udlaan.size(); i++)
	
	{
		match = false;
		for (int j = 0; j < forfattere.size(); j++)
		{
			if (udlaan[i].getEksemplar().getBog().getForfatter().getNavn() == forfattere[j])
			{
				match = true;
			}
		}
		if (match == false)
		{
			forfatterSize = forfattere.size();
			forfattere.resize(forfatterSize + 1);
			forfattere[forfatterSize] = udlaan[i].getEksemplar().getBog().getForfatter().getNavn();
		}
	}
	forfatterSize = forfattere.size();
	pop.resize(forfatterSize);
}


void Bibliotek::tilfoejUdl(Udlaan etUdlaan)
{
	int str = udlaan.size() + 1;
	udlaan.resize(str);
	udlaan[str - 1] = etUdlaan;
}

void Bibliotek::findPopularitet()
{
	int popularitet = 0;
	for (int k = 0; k < forfattere.size(); k++)
	
	{
		popularitet = 0;
		for (int l = 0; l<udlaan.size(); l++)
		{
			if (forfattere[k] == udlaan[l].getEksemplar().getBog().getForfatter().getNavn())
			{
				popularitet++;
			}
		}
		pop[k] = popularitet;
	}
}

string Bibliotek::findMestPopulaereForfatter()
{
	fyldForfatter();
	findPopularitet();
	auto biggest = max_element(begin(pop), end(pop));
	int plads = distance(begin(pop), biggest);
	return forfattere[plads];
}

Bibliotek::~Bibliotek()
{
}
