#include "iostream"

using namespace std;

int k, x; // k - kula śnieżna, x - litry śniegu w parku

int main() {

        cin >> x >> k;

        if (k*7 <= x) {
                cout << k*7*1000 << endl;
        }
        else {
                if (k*3.5 <= x) {
                        cout << k*3.5*1000 << endl;
                }
                else {
                        if (k*1.75 <=x)
                                cout << k*1.75*1000 <<endl;
                        else
                                cout << "0" << endl;
                }
        }



        return 0;
}
