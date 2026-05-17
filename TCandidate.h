#pragma once

#include "TParam.h"

class TCandidate
{
private:

    // GENY OSOBNIKA

    TParam x1;
    TParam x2;

    // OCENA OSOBNIKA

    double rating;

public:

    TCandidate();

    void rate();

    void info();
};