#include <iostream>

using namespace std;

int ilosc, odstep;

int main() {
        cin >> ilosc >> odstep;

        int kartka[2][ilosc];

        for (int i = 0; i < ilosc; i++) {
                cin >> kartka[1][i] >> kartka[2][i]; // długość, szerokość
        }

/*
    ???

   - w jakiej jednostce są wymiary kartki?
   - czy pomiędzy linią a bokiem może być odległość < odstep?

 */

        return 0;
}
