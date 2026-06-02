#pragma once

#include "TCandidate.h"

class TCandidateZad2 : public TCandidate {
    public:
    TCandidateZad2() : TCandidate() {
        init_vector();
    }
    TCandidateZad2(const TCandidateZad2& original) : TCandidate(original) {}

    TCandidate* create() {
        return new TCandidateZad2();
    }

    TCandidate* create_copy() const {
        return new TCandidateZad2( *this );
    }

    void rate() {
        double x1 = genotype[0].get_val();
        double x2 = genotype[1].get_val();

        mark = 2 * (x1 * x2);
    }

protected:
    void init_vector();

};
void TCandidateZad2::init_vector() {
    genotype.push_back({"x1", 0, 100, 1});
    genotype.push_back({"x2", 0, 100, 1});

    gens_count = genotype.size();
}