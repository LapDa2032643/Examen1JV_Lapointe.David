#include "EpeeDeuxMains.h"
std::string EpeeDeuxMains::to_string()
{
	std::string message = Arme::to_string();

	message.append("Je suis une �p�e deux mains \n");
	return message;
}
EpeeDeuxMains::EpeeDeuxMains()
{
	valeur = 6;
	attaque = 7;
	durabilite = 5;
	poids = 50.18F;
	nom = "�p�e deux mains";
	maRarete = Rarete::COMMUN;
}
EpeeDeuxMains::~EpeeDeuxMains()
{

}