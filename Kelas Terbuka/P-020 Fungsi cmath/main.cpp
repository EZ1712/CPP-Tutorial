#include <iostream>
#include <cmath>

using namespace std;

/*
    cppreference.com
    standert library cmath

    ceil(x)     = pembulatan ke atas
    cos(x)      = kosinus
    exp(x)      = eksponen
    fabs(x)     = nilai absolute dalam float 
    floor(x)    = pembulatan ke bawah
    fmod(x)     = modulus dalam float
    log(x)      = logaritma dalam basis natural
    log10(x)    = logaritma dalam basis 10
    pow(x, y)   = x pangkat y
    sin(x)      = sinus
    sqrt(x)     = akar kuadrat
    tan(x)      = tangen

*/

int main() {

    int x;

    cout << "Akar Kuadrat : ";
    cin >> x;

    double y = sqrt(x);
    cout << "Hasilnya adalah : " << y << endl;

    return 0;
}