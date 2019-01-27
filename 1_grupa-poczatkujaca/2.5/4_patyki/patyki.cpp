#include <iostream>
#include <cmath>

using namespace std;

double a, b, c;

int main() {
        cin >> a >> b >> c;

        if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2) || pow(c, 2) + pow(a, 2) == pow(b, 2))
                cout << "1" << endl;
        else {
                if (a == b && b == c)
                        cout << "2" << endl;
                else
                        cout << "0" << endl;
        }

        return 0;
}
