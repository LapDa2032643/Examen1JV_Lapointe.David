#include "FactoryArme.h"
#include "Arme.h"
#include "EpeeUneMain.h"
#include "EpeeDeuxMains.h"
#include "Hache.h"
#include "Utilitaire.h"
enum class TypeArme
{
	EPEEUNEMAIN = 1,
	EPEEDEUXMAINS = 2,
	HACHE = 3
};
Arme* FactoryArme::getRandomArme()
{
	Arme* arme(0);

	TypeArme typeA = (TypeArme)Utilitaire::genererNb(1, 3);
	if (typeA == TypeArme::EPEEUNEMAIN)
		arme = new EpeeUneMain();
	else if (typeA == TypeArme::EPEEDEUXMAINS)
		arme = new EpeeDeuxMains();
	else
		arme = new Hache();

	return arme;
}