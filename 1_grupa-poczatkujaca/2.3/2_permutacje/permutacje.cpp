#include "iostream"
#include "string"

using namespace std;

int ilosc, liczba;
int wartosc[1000000];

int main() {

        cin >> ilosc;

        for (int i = 0; i < ilosc; i++) {
                wartosc[i] = 0;
        }


        int liczba[ilosc];
        for (int i = 0; i < ilosc; i++) {
                cin >> liczba[i];

        }

        for (int i = 0; i < ilosc; i++) {
                wartosc[liczba[i]]++;
        }

        for (int i = 1; i <= ilosc; i++) {
                if (wartosc[i] != 1) {
                        cout << "NIE";
                        return 0;
                }
        }

        cout << "TAK";

        return 1;
}
