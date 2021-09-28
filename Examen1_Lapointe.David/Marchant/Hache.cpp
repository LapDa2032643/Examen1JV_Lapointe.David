#include "Hache.h"
std::string Hache::to_string()
{
	std::string message = Arme::to_string();

	message.append("Je suis une hache de guerre \n");
	return message;
}
Hache::Hache()
{
	valeur = 8;
	attaque = 8;
	durabilite = 8;
	poids = 30.27F;
	nom = "Hache";
	maRarete = Rarete::COMMUN;
}
Hache::~Hache()
{

}