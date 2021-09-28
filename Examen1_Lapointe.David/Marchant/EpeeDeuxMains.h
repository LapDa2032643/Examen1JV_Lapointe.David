#pragma once
#include "Arme.h"
#include <string>
class EpeeDeuxMains :
    public Arme
{
public:
    EpeeDeuxMains();
    ~EpeeDeuxMains();

    virtual std::string to_string();
};

