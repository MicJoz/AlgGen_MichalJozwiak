#pragma once

#include "TCandidate.h"

class TCandidateZad1 : public TCandidate {
public:
    TCandidateZad1(): TCandidate() {}
    TCandidateZad1(const TCandidateZad1 &original): TCandidate(original) {}

    void rate() {
        double x1 = genotype[0].get_val();
        double x2 = genotype[0].get_val();

        mark = 2 * (x1 * x2);
    }

};