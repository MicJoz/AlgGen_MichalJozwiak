#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>

#include "TCandidate.h"
#include "TCandidateZad1.h"
#include "TCandidateZad2.h"
#include "TCandidateZad3.h"
#include "TPopulation.h"

using namespace std;

int main()
{
    srand(time(0));

    TCandidate* pattern;
    int count = 0;
    int _type = -1;

    cout << "Który osobnik [1-3]: ";
    cin >> _type;
    cout << "Ilu osobników utworzyć? ";
    cin >> count;

    switch (_type) {
        case 1:
            pattern = new TCandidateZad1{};
            break;
        case 2:
            pattern = new TCandidateZad2{};
            break;
        case 3:
            pattern = new TCandidateZad3{};
            break;
        default:
            pattern = new TCandidateZad1{};
    }

    TPopulation pop(count, pattern);
    pop.calculate();
    pop.info();
    TCandidate* best = pop.get_best_candidate();
    best->info();

    std::cout << "\n\n\n";
    return 0;

}