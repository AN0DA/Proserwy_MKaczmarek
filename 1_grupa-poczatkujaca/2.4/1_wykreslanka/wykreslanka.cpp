#include "iostream"

using namespace std;

int ilosc, liczba = 1, wynik = 0;
unsigned int ciag[1000000];

int main() {

        cin >> ilosc;

        for (int i = 0; i < ilosc; i++) {
                cin >> ciag[i];
        }


        for (int i = 0; i < ilosc; i++) {
                if (ciag[i] == liczba)
                        liczba += 1;
                else
                        wynik += 1;
        }

        cout << wynik;
        return 0;
}
