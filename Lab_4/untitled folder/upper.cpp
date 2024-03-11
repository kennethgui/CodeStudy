/*
Kenneth Guillont
Kenneth.guillont83@myhunter.cuny.edu
Lab 4E
*/

#include <iostream>
using namespace std;

int main() {
int inn; cin >> inn;

for(int i = 0; i < inn; i++) {
    for(int j = 0; j < inn; j++){
        if(j >= i) {
            cout << "*";
        } else {
            cout << " ";
        }
    }
    cout << endl;
}


return 0;
}