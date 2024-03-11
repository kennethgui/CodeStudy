/*
Kenneth Guillont
Kenneth.guillont83@myhunter.cuny.edu
Lab 4 task F
*/

#include <iostream>
using namespace std;

int main() {

    int width; cin >> width;
    int height; cin >> height;
    int spaces = 0;
    int stars = width;

    if (height *2 > width) {
        cout << "Impossible shape!" << endl;
    } else {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < spaces; j++) {
                cout << " ";
            }
            for (int j = 0; j < stars; j++) {
                cout << "*";
            }

            cout << endl;

            spaces += 1;
            stars -= 2;
        }
    }

    return 0;
}