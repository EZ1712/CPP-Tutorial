#include <iostream>

using namespace std;

int main() {

    // assignment
    int a = 10;
    cout << "nilai awal adalah : " << a << endl;

    // assignment operator
    // a = a + 3 
    // a += 3
    a += 3;
    cout << "ditambah 3 = " << a << endl;

    a -= 3;
    cout << "dikurangi 3 = " << a << endl;

    a *= 3;
    cout << "dikali 3 = " << a << endl;

    a /= 3;
    cout << "dibagi 3 = " << a << endl;

    return 0;
}