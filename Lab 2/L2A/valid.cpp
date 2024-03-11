/*
Author: Kenneth Guillont
Course: CSCI-136
Instructor: Brandon Foster
Assignment: title, e.g., Lab1A

this lab ask the user for a number then prints out the square of the number
as long as it is in the range 0 < n < 100
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter an integer between o < n < 100: ";
    int num; cin >> num;

    while(num < 1 || num > 99)
    {
        cout << "Please re-enter: ";
        cin >> num;
    }
    double numpow2 = pow(num,2);
    cout << "Number squared is" << " " << numpow2;
    return 0;
}