#include "Marche.h"
#include <string>
#include "FactoryHumeur.h"
#include "FactoryArme.h"
std::string Marche::to_string()
{
	std::string message = Marche::to_string();

	message.append("Je suis le marchant. \n");
	return message;
}
Marche::Marche()
{
	selPrix = getRandomHumeur();
}
Marche::~Marche()
{

}
void Marche::vendreArme(Arme* arme)
{
	listeArme.clear(arme);
}
void Marche::init()
{
	for (int i = 0; i < 10; i++)
	{
		listeArme.push_back(FactoryArme::getRandomArme());
	}
}

int Marche::getPrix(Arme* arme)
{
	return arme->getValeur() + selPrix;
}
void vendreArme(Arme* arme);
int getPrix();