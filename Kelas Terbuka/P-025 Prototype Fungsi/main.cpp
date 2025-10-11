#include <iostream>

using namespace std;

// Prototype ->

void log(double x);
double hitung_luas(double p,double l);

// <-

int main() {

    double panjang, lebar,luas;
    cin >> panjang;
    cin >> lebar;
    luas = hitung_luas(panjang, lebar);
    log(luas);
    return 0;
}

double hitung_luas (double p,double l) {
    return p * l;
};

void log (double x) {
    cout << "hasil : " << x << endl;
}