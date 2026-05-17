#include <iostream>

#include "TCandidate.h"

using namespace std;

////////////////////////////////////////////////////////

TCandidate::TCandidate()
    :
    x1("x1", 1, 4, 1),
    x2("x2", 10, 20, 3)
{
    rating = 0;
}

////////////////////////////////////////////////////////

void TCandidate::rate()
{
    rating =
        x1.get_val() * x1.get_val()
        +
        x2.get_val();
}

////////////////////////////////////////////////////////

void TCandidate::info()
{
    cout << "====================\n";

    cout << "gens count: 2\n";

    x1.info();

    x2.info();

    cout << "rate: "
        << rating
        << "\n";

    cout << "====================\n";
}