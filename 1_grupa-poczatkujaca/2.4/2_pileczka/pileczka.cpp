#include "iostream"

using namespace std;

int ilosc, wynik;
int x, w;

int main() {

        cin >> ilosc;

        for (int i = 0; i < ilosc; i++) {

                wynik = 1;
                cin >> x >> w;

                while (x <= w) {
                        x *= 2;

                        if (x >= w)
                                cout << wynik << endl;

                        wynik += 1;
                }
        }

        return 0;
}
