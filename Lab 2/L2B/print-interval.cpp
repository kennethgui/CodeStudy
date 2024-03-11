/*
Author: Kenneth Guillont
Course: CSCI-136
Instructor: their name
Assignment: L2B

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter L: ";
    int L; cin >> L;

    cout << "Please enter U: ";
    int U; cin >> U;

    for(int i = L; i < U; i++)
        cout << i << " ";
    return 0;
}