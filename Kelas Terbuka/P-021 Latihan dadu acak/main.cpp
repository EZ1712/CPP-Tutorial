#include <iostream>
#include <cstdlib> // library untuk random

using namespace std;

int main() {

    /*
    cara buat tau bekerja atau tidak

    for(int i = 0; i < 10; i++) {
        cout << 1 + (rand() % 6) << endl;
    }
    */

    char lanjut;

    while (true) {

        cout << "Lempar dadu (y/n) ";
        cin >> lanjut;

        if (lanjut == 'y') {
            cout << 1 + (rand() % 6) << endl;
        } else if (lanjut == 'n') {
            break;
        } else {
            cout << "Lu dongo apa gimana" << endl;
        }
    }


    return 0;
}

