
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Udlaan.h"
#include "Eksemplar.h"
#include "Laaner.h"
#include "Bog.h"


using namespace std;

class Bibliotek : public Dato

{

public:

	Bibliotek();
	
	int   tjekOmBogErTilgaengelig(const string& bogtitel);
	void  listLaanersLaan(const string& etNavn);
	void fyldForfatter();
	void tilfoejUdl(Udlaan etUdlaan);
	void findPopularitet();
	string findMestPopulaereForfatter();
	~Bibliotek();

protected:
	vector<Eksemplar> eksemplarer; 
	vector<Udlaan> udlaan;
	vector<int> pop;
	vector<string> forfattere;

	
};

