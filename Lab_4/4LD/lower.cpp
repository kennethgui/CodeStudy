/*
kenneth guillont
kenneth.guillont83@myhunter.cuny.edu
Lab 4 D
*/

#include <iostream>
using namespace std;

int main() {
    int inn; cin >> inn; 

    for(int i = 1; i <= inn; i++) {
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}