#include <iostream>

using namespace std;

int kuadrat(int x) {
    
    int y;
    y = x * x;

    return y;
}

int sum(int x, int y) {

    int z;
    z = x + y;

    return z;

}

int main() {

    int input, nilai_1, nilai_2;

    cout << "Kuadrat : ";
    cin >> input;

    cout << kuadrat(input) << endl;

    cout << "Penjumlahan" << endl;
    cout << "nilai 1 : ";
    cin >> nilai_1;
    cout << "nilai 2 : ";
    cin >> nilai_2;
    cout << sum(nilai_1, nilai_2); 

    return 0;
}