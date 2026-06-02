#pragma once

#include "TCandidate.h"

class TCandidateZad1 : public TCandidate {
public:
    TCandidateZad1(): TCandidate() {
        init_vector();
    }
    TCandidateZad1(const TCandidateZad1 &original): TCandidate(original) {}

    TCandidate* create() {
        return new TCandidateZad1();
    }

    TCandidate* create_copy() const {
        return new TCandidateZad1( *this );
    }

    void rate() {
        double x1 = genotype[0].get_val();
        double x2 = genotype[1].get_val();

        mark = 2 * (x1 * x2);
    }

protected:
    void init_vector();

};

void TCandidateZad1::init_vector() {
    genotype.push_back({"x1", 0, 100, 1});
    genotype.push_back({"x2", 0, 100, 1});

    gens_count = genotype.size();
}