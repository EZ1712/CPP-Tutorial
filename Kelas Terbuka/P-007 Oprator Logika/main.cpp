#include <iostream>

using namespace std;

int main() {

    int a = 3;
    int b = 2;

    bool hasil;

    // oprator logika not, and, or

    // not
    hasil = !(a == 3);

    // and && = kedua nilai harus benar
    cout << "ini untuk and" << endl;
    hasil = (a == 3) and (b == 2); // true and true
    cout << hasil << endl;
    hasil = (a == 3) and (b == 1); // true and false
    cout << hasil << endl;
    hasil = (a == 4) && (b == 2); // false and true
    cout << hasil << endl;
    hasil = (a == 4) && (b == 4); // false and false
    cout << hasil << endl;

    // or
    cout << "ini untuk or" << endl;
    hasil = (a == 3) or (b == 2); // true and true
    cout << hasil << endl;
    hasil = (a == 3) or (b == 1); // true and false
    cout << hasil << endl;
    hasil = (a == 4) || (b == 2); // false and true
    cout << hasil << endl;
    hasil = (a == 4) || (b == 4); // false and false
    cout << hasil << endl;

    return 0;
}