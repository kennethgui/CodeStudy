/*
Author: Kenneth Guillont
Course: CSCI-136
Instructor: their name
Assignment: L2C

Create an array, called myData, and each value to 1
then allow user to input index and value to change the values
of the array.
*/

#include <iostream>
using namespace std;

int main()
{
    int myData[10];
    int i; int v;
    for(int j=0; j < 10; j++)
        {myData[j] = 1;}
do {
    for(int j=0; j < 10; j++)
        cout << myData[j] << "  ";
    cout << endl;

    cout << "Input index: ";
    cin >> i;

    cout << "Input value: ";
    cin >> v;

    if(i >= 0 && i< 10)
        myData[i] = v;
    else
        cout << "Index out of range. Exit.";
    }
    while(i >= 0 && i < 10);

return 0;
}