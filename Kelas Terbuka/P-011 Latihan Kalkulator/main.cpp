#include <iostream>

using namespace std;

int main() {

    float a,b,hasil;
    char aritmatika;

    cout << "Kalkulator Quantum \n \n"; 
    cout << "Masukan nilai pertama : ";
    cin >> a;
    cout << "Masukan Operator : ";
    cin >> aritmatika;
    cout << "Masukan nilai kedua : ";
    cin >> b;

    cout << "\n Hasil perhitungan : ";
    cout << a << aritmatika << b;

    if (aritmatika == '+') {
        hasil = a + b;
    } else if (aritmatika == '-') {
        hasil = a - b;
    } else if (aritmatika == '*') {
        hasil = a * b;
    } else if (aritmatika == '/') {
        hasil = a / b;
    } else {
        cout << "oprator gagal" << endl;
    }

    cout << " = " << hasil << endl;

    return 0;
}