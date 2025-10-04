#include <iostream>
#include <limits>

using namespace std;

int main() {

    // bilangan bulat
    int a = 1; // 4 byte
    long b = 1; // 8 byte 
    short c = 1; // 2 byte

    // bilangan decimal
    float d = 1.5;
    double e = 1.5;

    // character
    char f = 'a';

    // boolean
    bool g = true;

    cout << g << endl;
    cout << sizeof(g) << " byte" << endl;
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

    cin.get();
    return 0;

    
}