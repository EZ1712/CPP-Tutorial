#include <iostream>

using namespace std;

int main() {

    cout << "LOOP 1 \n"; 
    for (int counter = 1; counter <= 10; counter++) {
        cout << counter << endl;
    }

    cout << "\n LOOP 2 \n";
    for (int counter = 1; counter <= 10; counter += 2) {
        cout << counter << endl;
    }

    cout << "\n LOOP 3 \n";
    for (int counter = 1; counter >= -10;counter--) {
        cout << counter << endl;
    }
    
    cout << "\n LOOP 4 \n";
    int hasil = 0;
    for (int counter = 1; counter <= 10;hasil += counter, counter++) {
        cout << counter << " || " << hasil << endl;
    }

    return 0;
}