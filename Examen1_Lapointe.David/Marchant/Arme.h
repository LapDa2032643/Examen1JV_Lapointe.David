#pragma once
#include <string>
enum class Rarete
{
	COMMUN = 1,
	RARE = 2,
	EPIQUE = 3,
	LEGENDAIRE = 4
};
class Arme
{
public:
	Arme();
	~Arme();

	int getValeur();
	int getAtt();
	int getDur();
	int getPoids();
	std::string getNom();
	Rarete getRarete();
	virtual std::string to_string();

protected:
	int valeur;
	int attaque;
	int durabilite;
	float poids;
	std::string nom;
	Rarete maRarete;
};

