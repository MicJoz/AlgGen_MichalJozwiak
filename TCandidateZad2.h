#pragma once

#include "TCandidate.h"

class TCandidateZad2 : public TCandidate {
    public:
    TCandidateZad2() : TCandidate() {
        set_gens_range();
        rand_gens_val();
    }
    TCandidateZad2(const TCandidateZad2& original) : TCandidate(original) {}
        private:
            void set_gens_range();
};
void TCandidateZad2::set_gens_range() {
    genotype[0].set_range(0, 10, 1);
    genotype[1].set_range(11, 20, 2);
}