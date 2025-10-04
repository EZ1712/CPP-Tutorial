#include <iostream>

using namespace std;

int main() {

    int a;

    cout << "Masukan angka : ";
    cin >> a;

    if (a == 5) {
        cout << "nilai 5" << endl;
    } else if (a == 3) {
        cout << "nilai 3" << endl;
    } else if (a == 2) {
        cout << "nilai 2" << endl;
    } else {
        cout << "bukan 5,3,2" << endl;
    }

    cout << "woilah" << endl;

    return 0;
}