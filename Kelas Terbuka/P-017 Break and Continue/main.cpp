#include <iostream>

using namespace std;

int main() {

    // continue = men skip
    // break = memberhentikan

    for(int i = 0; i < 10; i++) {

        if(i == 5){
            continue;
            // break;
        }

        cout << i << endl;
    }
    cout << "selesai" << endl;

    // while version

    cout << "\n While \n";
    int i = 0;
    while(i <= 10) {
        i++;
        if( i == 5) {
            continue;
            // break;
        }
        cout << i << endl;
        
    }
    

    return 0;
}