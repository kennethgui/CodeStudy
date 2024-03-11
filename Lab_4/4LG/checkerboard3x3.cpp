/*
kenneth guillont
kenneth.guillont83@myhunter.cuny.edu
lab 4 task g
*/

#include <iostream>

using namespace std;

int main() {
    int width; cin >> width;
    
    int height; cin >> height;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (((i / 3) % 2 == 0 && (j / 3) % 2 == 0) || ((i / 3) % 2 != 0 && (j / 3) % 2 != 0)) {
                cout << "*";
            } else {
                cout << " ";
            }

            if ((j + 1) % 3 == 0) {
                cout << " ";
            }
        }
        cout << endl;

        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

    return 0;
}
