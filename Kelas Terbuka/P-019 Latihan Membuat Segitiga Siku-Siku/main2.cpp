#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Masukan panjang pola : ";
    cin >> n;

    cout << "POLA 5 \n";
    for(int i = 1; 1 <= n; i++) {
        for(int j = n; j > i; j--) {
            cout << " ";
        }
        for(int k = 1; k <= (2*i -1 );k++ ) {
            cout << "*";
        }
        cout << endl;
    } 

    cin.get();
    return 0;
}