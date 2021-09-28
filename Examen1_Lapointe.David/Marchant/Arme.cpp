#include "Arme.h"
Arme::Arme()
{
	valeur = 0;;
	attaque = 0;
	durabilite = 0;
	poids = 0.0F;
	nom = "";
	maRarete = Rarete::COMMUN;
}
Arme::~Arme()
{

}

int Arme::getValeur()
{
	return valeur;
}

int Arme::getAtt()
{
	return attaque;
}

int Arme::getDur()
{
	return durabilite;
}

int Arme::getPoids()
{
	return poids;
}

std::string Arme::getNom()
{
	return nom;
}
Rarete Arme::getRarete()
{
	return maRarete;
}