#include "FactoryHumeur.h"
#include "Utilitaire.h"
#include "Marche.h"
Arme* FactoryHumeur::getRandomHumeur()
{
	//Humeur* humeur(0);

	Humeur typeH = (Humeur)Utilitaire::genererNb(1, 3);
	if (typeH == Humeur::HEUREUX)
		selPrix = 1;
	else if (typeH == Humeur::TRISTE)
		selPrix = 2;
	else
		selPrix = 3;

	return selPrix;
}