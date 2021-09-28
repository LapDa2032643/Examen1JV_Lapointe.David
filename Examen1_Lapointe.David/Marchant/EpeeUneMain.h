#pragma once
#include "Arme.h"
#include <string>
class EpeeUneMain :
    public Arme
{
public:
    EpeeUneMain();
    ~EpeeUneMain();

    virtual std::string to_string();
};

