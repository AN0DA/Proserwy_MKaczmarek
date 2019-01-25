#include "iostream"
#include "cmath"

using namespace std;

int ilosc, suma1 = 0, suma2 = 0, temp, wynik;

int main() {

        cin >> ilosc;
        wynik = ilosc;

        int liczba[ilosc];
        for (int i = 0; i < ilosc; i++) {
                cin >> liczba[i];
        }

        for (int i = 0; i < ilosc-1; i++) {
                for (int j = i; j >= 0; j--) {
                        suma1 = suma1+liczba[j];
                }

                for(int j = i+1; j <= ilosc-1; j++) {
                        suma2 =suma2+ liczba[j];
                }

                temp = abs(suma1-suma2);
                if (temp < wynik)
                        wynik = temp;

                suma1 = 0;
                suma2 = 0;
        }
        cout << wynik;

        return 0;
}
