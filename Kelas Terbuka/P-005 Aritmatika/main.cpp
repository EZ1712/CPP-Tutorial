#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 4;
    int hasil;
    // Operator +, -, *, /, %

    // penjumlahan
    hasil = a + b;    
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian 
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;

    // pembagian gunakan float jika hasilnya bukan decimal
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;
    
    // urutan eksekusi
    hasil = (a + b) * a ;
    cout << hasil << endl;

    return 0;


}