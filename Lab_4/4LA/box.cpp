/*
kenenth guillont
kenneth.guillont83@myhunter.cuny.edu
Lab 3A
*/

#include <iostream>
using namespace std;

int main() {
    cout << "input width: ";
    int width; cin >> width;

    cout << "input height: ";
    int height; cin >> height; cout << endl;

for(int j = 0; j < height; j++) {
    for(int i = 0; i < width; i++)
        cout << "*";
    cout << endl;
}
return 0;
}