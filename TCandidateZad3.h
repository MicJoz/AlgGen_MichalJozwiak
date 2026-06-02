#pragma once

#include "TCandidate.h"

class TCandidateZad3 : public TCandidate {
    public:
    TCandidateZad3() : TCandidate()
    {
         init_vector();
    }

    TCandidateZad3(const TCandidateZad3& original) : TCandidate(original) {}

    TCandidate* create() {
        return new TCandidateZad3();
    }

    TCandidate* create_copy() const {
        return new TCandidateZad3( *this );
    }


    void rate() {
        double x1 = genotype[0].get_val();
        double x2 = genotype[1].get_val();
        double x3 = genotype[2].get_val();

        mark = 100 * x1 + 10 * x2 + x3;
    }

protected:
    void init_vector();
};

void TCandidateZad3::init_vector() {
    genotype.push_back({ "x1", 0, 10, 1});
    genotype.push_back({ "x2", 0, 10, 1});
    genotype.push_back({ "x3", 0, 10, 1});

    gens_count = genotype.size();
}