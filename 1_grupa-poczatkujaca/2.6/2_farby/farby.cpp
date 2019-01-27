#include "iostream"

using namespace std;

int c, z, n;
double cc, zz, nn;
int sala[6];
/*
   0 - żółty
   1 - zielony
   2 - niebieski
   3 - fioletowy
   4 - czerowny
   5 - pomarańczowy
 */

int main() {

        cin >> c >> z >> n;

        for (int i = 0; i <= 5; i++) {
                cin >> sala[i];
        }

        cc = sala[4] + 0.5*sala[3] + 0.5*sala[5];
        zz = sala[0] + 0.5*sala[1] + 0.5*sala[5];
        nn = sala[2] + 0.5*sala[1] + 0.5*sala[3];

        cc = cc - c;
        zz = zz - z;
        nn = nn - n;

        if (cc > 0)
                cout << cc << " ";
        else
                cout << "0 ";
        if (zz > 0)
                cout << zz << " ";
        else
                cout << "0 ";
        if (nn > 0)
                cout << nn << endl;
        else
                cout << "0" << endl;


        return 0;
}
