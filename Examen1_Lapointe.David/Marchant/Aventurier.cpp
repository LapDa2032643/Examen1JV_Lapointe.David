#include "Aventurier.h"
#include "Arme.h"
#include "Marche.h"
std::string Aventurier::to_string()
{
	std::string message = Aventurier::to_string();

	message.append("Je suis "+nom+", J'ai "+attaque+" d'attaque et je suis équipé de "+monArme+"\n");
	return message;
}
Aventurier::Aventurier()
{
	attaque = 10;
	force = 10;
	orDispo = 20;
	nom = "Alfred";
	monArme;
}
Aventurier::~Aventurier()
{

}

int Aventurier::getAtt()
{
	return attaque + monArme->attaque;
}

void Aventurier::acheterArme(Arme* arme)
{
	orDispo = perdreOr(Marche::getPrix());
	ajouterArme(arme);
}

void Aventurier::ajouterArme(Arme* arme)
{
	vecArme.push_back(arme);
}

void Aventurier::changerArme(Arme* arme)
{
	monArme=arme;
}

int Aventurier::perdreOr(int orPerdu)
{
	return orDispo-orPerdu;
}
