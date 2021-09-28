#pragma once
#include "Arme.h"
#include <vector>
class Aventurier
{
public:
	Aventurier();
	~Aventurier();

	int getAtt();
	void acheterArme(Arme* arme);
	void ajouterArme(Arme* arme);
	void changerArme(Arme* arme);

	int perdreOr(int orPerdu);

	virtual std::string to_string();

protected:
	int attaque;
	int force;
	int orDispo;
	std::string nom;
	Arme* monArme;
	std::vector<Arme*> vecArme;
};

