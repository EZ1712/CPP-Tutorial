#include <iostream>

using namespace std;

// Reporter (fungsi kembalian)
int kuadrat(int x) {
    
    int y;
    y = x * x;

    return y;
}

// Worker
void tampilkan(int input) {
    cout << "Void" << endl;
    cout << input << endl;
}

int main() {

    int input, nilai_1, nilai_2;

    cout << "Kuadrat : ";
    cin >> input;

    // versi biasa
    cout << kuadrat(input) << endl;

    // versi Void
    tampilkan(kuadrat(input));
    return 0;
}