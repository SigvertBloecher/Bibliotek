#pragma once
class Dato
{
public:
	Dato();
	Dato(int enD);
	int getDatoen();
	int getAarstal();
	int getMaaned();
	int getDag();
	int getKvartal();
	bool getLeapYear();
	bool validate();
	int dagIAaret();
	int restDageIAaret();
	void setDatoPlusEn();
	void setDatoMinusEn();
	//int forskelIDage(Dato, enD); //Forskel mellem to dage
	//int ugedag;

	~Dato();

protected:
	int datoen;
	int x;
};
