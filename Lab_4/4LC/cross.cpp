/*
Kenneth Guillont
Kenneth.guillont83@myhunter.cuny.edu
Lab 4 C*/

#include <iostream>
using namespace std;

int  main() {
    int size; cin >> size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i + j == size - 1) {
                cout << "*";
            } else {
                cout << " ";
        }
        }
        cout << endl;
        }
return 0;
}