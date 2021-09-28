#pragma once
#include "Arme.h"
#include <string>
class Hache :
    public Arme
{
public:
    Hache();
    ~Hache();

    virtual std::string to_string();
};

