#include "iostream"

using namespace std;

int ilosc, pg, pj, og, oj;

int main() {

        cin >> ilosc;

        int sad[ilosc];

        for (int i = 0; i < ilosc; i++)
                cin >> sad[i];

        for (int i = 0; i < ilosc; i++) {
                if (sad[i] == 0) {
                        pg = i;
                        break;
                }
        }
        for (int i = 0; i < ilosc; i++) {
                if (sad[i] == 1) {
                        pj = i;
                        break;
                }
        }
        for (int i = ilosc; i > 0; i--) {
                if (sad[i] == 0) {
                        og = i;
                        break;
                }
        }
        for (int i = ilosc; i > 0; i--) {
                if (sad[i] == 1) {
                        oj = i;
                        break;
                }
        }

        if (oj - pg > og - pj)
                cout << oj - pg << endl;
        else
                cout << og - pj << endl;


        return 0;
}
