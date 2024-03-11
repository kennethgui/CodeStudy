/*
Author: Kenneth Guillont
Course: CSCI-136
Instructor: Brandon Foster
Assignment: Task B: A Happy Filter
*/

#include <vector>
#include <iostream>
using namespace std;

vector<int> goodVibes(const vector<int> v)
{
    vector<int> newV;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= 0)
        {
            newV.push_back(v[i]);
        }
    }

    return newV;
}

int main()
{
    vector<int> v {1, 2, -1, 3, 4, -1, 6};

    vector<int> newV = goodVibes(v);

    for (int i = 0; i < newV.size(); i++)
    {
        if (i == newV.size() - 1)
            cout << newV[i] << endl;
        else
            cout << newV[i] << " | ";
    }

    return 0;
}
