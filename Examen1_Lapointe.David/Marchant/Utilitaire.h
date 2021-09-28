#pragma once
#include <stdlib.h>
class Utilitaire
{
public:
	static inline int genererNb(int min, int max)
	{
		return(rand() % (max - min + 1)) + min;
	}
};

