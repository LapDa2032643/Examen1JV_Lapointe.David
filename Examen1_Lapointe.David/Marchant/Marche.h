#pragma once
#include"arme.h"
#include <vector>
#include <string>
enum class Humeur
{
	HEUREUX = 1,
	TRISTE = 2,
	FACHE = 4
};
class Marche
{
public:
	Marche();
	~Marche();

	void init();

	void vendreArme(Arme* arme);
	int getPrix(Arme* arme);
	std::vector<Arme*> listeArme;
	virtual std::string to_string();

protected:
	Humeur humeur;
	int prixArme;
	int selPrix;
	
};

