#include "EpeeUneMain.h"
std::string EpeeUneMain::to_string()
{
	std::string message = Arme::to_string();

	message.append("Je suis une �p�e\n");
	return message;
}
EpeeUneMain::EpeeUneMain()
{
	valeur = 4;
	attaque = 5;
	durabilite = 3;
	poids = 10.57F;
	nom = "�p�e";
	maRarete = Rarete::COMMUN;
}
EpeeUneMain::~EpeeUneMain()
{

}