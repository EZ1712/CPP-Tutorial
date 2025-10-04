#include <iostream>

using namespace std;

int main() {

    float a,b,hasil;
    char aritmatika;

    cout << "Kalkulator Quantum \n \n";
    cout << "masukan nilai pertama : ";
    cin >> a ;
    cout << "masukan operator : ";
    cin >> aritmatika;
    cout << "masukan nilai kedua : ";
    cin >> b;

    cout << "hasil perhitungan ";
    cout << a << aritmatika << b;

    switch (aritmatika) {
        case '+' :
        hasil = a + b;
        break;

        case '-' :
        hasil = a - b;
        break;

        case '*' : 
        hasil = a * b;
        break;

        case '/' :
        hasil = a / b;
        break;
    } 

    cout << " = " << hasil << endl;

    return 0;
}