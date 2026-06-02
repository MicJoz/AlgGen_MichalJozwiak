#include <iostream>
#include <algorithm>

#include "TPopulation.h"

using namespace std;

unsigned int TPopulation::population_count = 0;

TPopulation::TPopulation(unsigned int cands_count, TCandidate* pattern) {

    _id=population_count++;
    candidate_count = cands_count;

    for (int i = 0; i < cands_count; i++) candidates.push_back(pattern->create());
    // for (int i = 0; i < cands_count; i++) candidates.push_back(TCandidate{});
}
void TPopulation::calculate() {

    double best_val = 0.0;

    for (int i = 0; i < candidate_count; i++) {
        candidates[i]->rate();
        double val = candidates[i]->get_mark();

        if (i == 0) best_val = val;
        else best_val = max(best_val, val);
    }

    this->best_val = best_val;
}
TCandidate* TPopulation::get_best_candidate() {
    int i = 0;
    while (candidates[i]->get_mark() != best_val) i++;
    return candidates[i];
}
const TCandidate* TPopulation::get_candidate_wsk(int _id) const
{
    const TCandidate* wsk = candidates[_id];
    return wsk;
}
TPopulation::TPopulation(const TPopulation& original)
{
    _id = population_count++;
    candidate_count = original.candidate_count;
    best_val = original.best_val;

    for (int i = 0; i < candidate_count; i++)
    {
        const TCandidate* wsk_os_org =
            original.get_candidate_wsk(i);

        TCandidate* copy =
            wsk_os_org->create_copy();

        candidates.push_back(copy);
    }
    cout << "liczba osobników: " << candidates.size() << endl;
}

void TPopulation::info() {
    cout << "\n\n";
    cout << "====== POPULATION #" << _id << "===========\n";

    for (int i = 0; i < candidate_count; i++) {
        cout << "== candidate#" << i << ": " << candidates[i]->get_mark() << "\n";
    }
    cout << "==========================\n\n";

}

