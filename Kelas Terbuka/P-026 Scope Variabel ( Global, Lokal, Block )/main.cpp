#include <iostream>

using namespace std;

int x = 20; // Variabel Global

int get_global() { // variabel get_global
    return x;
}

int get_local() { // variabel scope get_local
    int x = 25;
    return x;
}

int main() {

    cout << "v x : " << x << endl;
    int x = 8; // variabel local
    cout << "v local : " << x << endl;
    cout << "v global : " << get_global() << endl;
    cout << "v get local : " << get_local() << endl;
    cout << "v x : " << x << endl;
    {
        int x = 100; // bloxk scope
        cout << "v block : " << x << endl;
    }
    cout << "v x : " << x << endl;


    return 0;
}