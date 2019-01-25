#include "iostream"
#include "string"

using namespace std;

int ilosc, awers = 0;
bool strona[1000000];

int main() {

        cin >> ilosc;

        int temp[ilosc];
        //int * temp = new int[ilosc];
        scanf("%i", temp);

        for (int i = 0; i < ilosc; i++) {
                strona[i] = temp[i];
        }

        for (int i = 0; i < ilosc; i++) {
                if (strona[i] == 0)
                        awers++;
        }

        if (awers <= ilosc/2)
                cout << awers;
        else
                cout << ilosc-awers;

        return 0;
}
