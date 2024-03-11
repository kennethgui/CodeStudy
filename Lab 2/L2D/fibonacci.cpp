/*
Author: Kenneth GUillont
Course: CSCI-136
Instructor: their name
Assignment: L2D

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
using namespace std;

int main()
{
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    
    cout << fib[0] << endl << fib[1] << endl;

    for(int i = 2; i < 60; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << endl;
    }
    return 0;
}