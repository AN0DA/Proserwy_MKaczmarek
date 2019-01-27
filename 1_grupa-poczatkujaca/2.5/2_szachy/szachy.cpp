#include <iostream>

using namespace std;

int ilosc, wynik = 0, wartosc = -1000000;
int pole[200][200];

int main() {
        cin >> ilosc;

        for (int i = 0; i < ilosc; i++) {
                for (int j = 0; j < ilosc; j++) {
                        cin >> pole[i][j];
                }
        }

        for (int i = 0; i < ilosc; i++) {
                for (int j = 0; j < ilosc; j++) {
                        if (pole[i][j] > wartosc)
                                wartosc = pole[i][j];
                }
                if (wartosc > 0)
                        wynik += wartosc;
        }

        cout << wynik << endl;

        return 0;
}
