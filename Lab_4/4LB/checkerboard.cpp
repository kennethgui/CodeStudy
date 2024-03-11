/*
kenneth guillont
kenneth.guillont83@myhunter.cuny.edu
Lab 3B
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int width; cin >> width;

    int height; cin >> height;

    for (int row = 0; row < height; row++) {
         for (int col = 0; col < width; col++) {
            if ((row + col) % 2 == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}