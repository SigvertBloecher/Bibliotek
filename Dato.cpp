//Metoder
#include "Dato.h"



Dato::Dato()
{
}




Dato::Dato(int enD)
{
	datoen = enD;
}

int Dato::getDatoen()
{
	return datoen;
}

int Dato::getAarstal()
{
	return(datoen / 10000);
}

int Dato::getMaaned()
{
	return((datoen % 10000) / 100);
	// % retunerer resten af en division
}

int Dato::getDag()
{
	return (datoen % 100);
}

int Dato::getKvartal()
{
	return ((getMaaned() + 2) / 3);
}
bool Dato::getLeapYear()
{
	if ((getAarstal() % 4 == 0 && getAarstal() % 100 != 0) || getAarstal() % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Dato::validate()
{
	if (getMaaned() <= 12 && getMaaned() > 0 && getDag() > 0)
	{
		if (getMaaned() == 1 || 3 || 5 || 7 || 10 || 12)
		{
			if (getDag() <= 31)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (getMaaned() == 2)
		{
			if (getLeapYear())
			{
				if (getDag() <= 29)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (getDag() <= 28)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		else
		{
			if (getDag() <= 30)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}

}
int Dato::dagIAaret()
{
	if (validate())
	{
		if (getLeapYear())
		{
			x = 1;
		}
		else
		{
			x = 0;
		}
		if (getMaaned() == 1)
		{
			return getDag();
		}
		else if (getMaaned() == 2)
		{
			return (getDag() + 31);
		}
		else if (getMaaned() == 3)
		{
			return(getDag() + x + 59);
		}
		else if (getMaaned() == 4)
		{
			return(getDag() + x + 90);
		}
		else if (getMaaned() == 5)
		{
			return (getDag() + x + 120);
		}
		else if (getMaaned() == 6)
		{
			return (getDag() + x + 151);
		}
		else if (getMaaned() == 7)
		{
			return (getDag() + x + 181);
		}
		else if (getMaaned() == 8)
		{
			return(getDag() + x + 212);
		}
		else if (getMaaned() == 9)
		{
			return(getDag() + x + 243);

		}
		else if (getMaaned() == 10)
		{
			return(getDag() + x + 273);
		}
		else if (getMaaned() == 11)
		{
			return(getDag() + x + 304);
		}
		else
		{
			return (getDag() + x + 334);
		}
	}

}
int Dato::restDageIAaret()
{
	if (getLeapYear())
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return ((365 + x) - dagIAaret());
}
void Dato::setDatoPlusEn()
{
	datoen++;
	while ((validate() == false))
	{
		datoen++;
	}

}
void Dato::setDatoMinusEn()
{
	datoen--;
	while ((validate() == false))
	{
		datoen--;
	}
}
/*void Dato::setDatoPlusEn()
{
int newDag = getDag() + 1;
int newMaaned = getMaaned() + 1;
int newYear = getAarstal() + 1;

if(newDag <= 31)
{
datoen++;
}
else
{
newDag = 1;
if (newMaaned <= 12)
{
datoen = (getAarstal() * 10000) + (newMaaned * 100) + newDag;
}
else
newMaaned = 1;
datoen = ((newYear * 10000) + (newMaaned * 100) + newDag);
}
}*/
Dato::~Dato()
{
}


