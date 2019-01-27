#include "iostream"

using namespace std;

int a, b, n;
int stan, wynik = 0, aa, bb;


int main() {

        cin >> a >> b >> n;
        aa = a;
        bb = b;

        while (stan < n) {
                if (aa < bb) {
                        stan = aa;
                        aa += a;
                        wynik += 1;
                }
                else {
                        stan = bb;
                        bb += b;
                        wynik += 1;
                }
        }
        cout << wynik << endl;

        return 0;
}
