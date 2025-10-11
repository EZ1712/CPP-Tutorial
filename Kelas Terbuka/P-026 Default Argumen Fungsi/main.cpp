#include <iostream>

using namespace std;

// Default Argument Fungsi
double v_kubus(double p = 1, double l = 1, double t = 1) {
    return p * l * t;
}

int main() {

    double p,l,t;
    cout << "p = "; cin >> p;
    cout << "l = "; cin >> l;
    cout << "t = "; cin >> t;

    cout << "hitung kubus (p,l,t): " << v_kubus(p,l,t) << endl;
    cout << "hitung kubus (p,l)  : " << v_kubus(p,l) << endl;
    cout << "hitung kubus (p)    : " << v_kubus(p) << endl;
    cout << "hitung kubus ()     : " << v_kubus() << endl;
    return 0;
}