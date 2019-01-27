#include "iostream"

using namespace std;

int ilosc, wynik = 0, status, temp = 0;

int main() {

        cin >> ilosc;

        for (int i = 0; i < ilosc; i++) {
                cin >> status;

                if (status == 1)
                        temp = temp + 1;

                else {
                        if (temp > wynik)
                                wynik = temp;

                        temp = 0;
                }
        }
        if (temp > wynik)
                wynik = temp;

        cout << wynik << endl;

        return 0;
}
