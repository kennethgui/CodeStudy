/*
Author: Kenneth Guillont
Course: CSCI-136
Instructor: Brandon Foster
Assignment: Task A: The easy one
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n)
{
    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        vec.push_back(i);
    }

    return vec;
}

int main()
{
    int num;

    cout << "Select size of vector: ";
    cin >> num;

    vector<int> v = makeVector(num);

    for(int i = 0; i < num; i++)
    {
        if(i == num-1)
            cout << v[i] << endl;
        else
            cout << v[i] << " | "; 
    }

    return 0;
}
