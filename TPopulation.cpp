#include <iostream>
#include <algorithm>

#include "TPopulation.h"

using namespace std;

unsigned int TPopulation::_id = 0;

TPopulation::TPopulation(unsigned int cands_count) {

    _id++;
    candidate_count = cands_count;

    for (int i = 0; i < cands_count; i++) candidates.push_back({});
    // for (int i = 0; i < cands_count; i++) candidates.push_back(TCandidate{});
}
void TPopulation::calculate() {

    double best_val = 0.0;

    for (int i = 0; i < candidate_count; i++) {
        candidates[i].rate();
        double val = candidates[i].get_mark();

        if (i == 0) best_val = val;
        else best_val = max(best_val, val);
    }

    this->best_val = best_val;
}
TCandidate TPopulation::get_best_candidate() {
    int i = 0;
    while (candidates[i].get_mark() != best_val) i++;
    return candidates[i];
}

void TPopulation::info() {
    cout << "\n\n";
    cout << "====== POPULATION #" << _id << "===========\n";

    for (int i = 0; i < candidate_count; i++) {
        cout << "== candidate#" << i << ": " << candidates[i].get_mark() << "\n";
    }
    cout << "==========================\n\n";

}

