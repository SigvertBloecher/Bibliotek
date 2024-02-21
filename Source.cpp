#include "Forfatter.h"
#include "Bog.h"
#include "Eksemplar.h"
#include "Laaner.h"
#include "Udlaan.h"
#include "Bibliotek.h"
#include "Dato.h"
#include "Person.h"
#include <iostream>
#include <vector>

using namespace std;

int   main()
{
	Bibliotek bib1;
	Dato d1(20161101);
	Dato d2(20160303);
	Dato d3(20160910);
	Laaner l1("Lotte Jensen", 101);
	Laaner l2("Poul Nyrup", 102);
	Laaner l3("Erik Madsen", 103);
	Forfatter f1("Peter Nielsen");
	Forfatter f2("Stephen King");
	Bog b1("Du tror det er loegn!", f1);
	Bog b2("Under the Dome", f2);
	Bog b3("Soevnloes", f2);
	Eksemplar e1(b1, 1234);
	Eksemplar e2(b2, 1235);
	Eksemplar e3(b3, 1236);
	Udlaan u1(l1, e1, d1); 
	Udlaan u2(l3, e2, d2);
	Udlaan u3(l2, e3, d3);

	bib1.tilfoejUdl(u1);
	bib1.tilfoejUdl(u2);
	bib1.tilfoejUdl(u3);

	cout << "Laaner: " << endl;
	bib1.listLaanersLaan("Lotte Jensen");
	cout << endl;
	cout << "Laaner: " << endl;
	bib1.listLaanersLaan("Erik Madsen");
	cout << endl;
	cout << "Laaner: " << endl;
	bib1.listLaanersLaan("Poul Nyrup");
	cout << endl;
	cout << "Mest populaere forfatter baseret pa udlaan: " << bib1.findMestPopulaereForfatter() << endl;
	cout << endl;
	cout << "Bogen er tilgaengelig: " << endl;
	string bogtitel;
	cin >> bogtitel;
	cout << bib1.tjekOmBogErTilgaengelig(bogtitel) << endl;
	
	/*cout << "Peter Nielsen, Du tror det er loegn!, er tilgaengelig fra: " << endl;
	cout << bib1.tjekOmBogErTilgaengelig("Du tror det er loegn!") << endl;
	cout << endl;
	
	cout << "Stephen King, Under the Dome, er tilgaengelig fra: " << endl;
	cout << bib1.tjekOmBogErTilgaengelig("Under the Dome") << endl;
	cout << endl;

	cout << "Stephen King, Soevnloes, er tilgaengelig fra: " << endl;
	cout << bib1.tjekOmBogErTilgaengelig("Soevnloes") << endl;
	cout << endl;

	cout << "JEG er konge på slottet, er tilgaengelig fra: " << endl;
	cout << bib1.tjekOmBogErTilgaengelig("JEG er konge på slottet");
	cout << endl;*/
	

	
	
}