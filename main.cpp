#include <iostream>
#include <vector>
#include "TKlasa.h"


using namespace std;

int main() {
  vector <TKlasa> obiekty;
    unsigned int count;
    cout << "Podaj liczbe obiektow do utworzenia: ";
    cin >> count;
    cout << "\n";

    for (int i = 0; i <count; i++) {
       // obiekty.push_back(TKlasa{i}); to samo co nizej
         obiekty.push_back({ i });
    }
    for (int i = 0; i < count; i++) {
        obiekty[i].info();
    }

    return 0;
}