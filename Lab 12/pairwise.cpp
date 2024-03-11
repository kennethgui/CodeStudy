/*
Author: Kenneth Guillont
Course: CSCI-136
Instructor: Brandon Foster
Assignment: Task D: Pairwise sum
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPairWise(vector<int>& v1, vector<int>& v2)
{
    vector<int> sum;

    int maxSize = max(v1.size(), v2.size());

    for (int i = 0; i < maxSize; i++)
    {
        int num1, num2;
        if (i < v1.size())
            num1 = v1[i];
        else
            num1 = 0;

        if (i < v2.size())
            num2 = v2[i];
        else
            num2 = 0;

        sum.push_back(num1 + num2);
    }

    return sum;
}


int main()
{
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    sumPairWise(v1, v2); // returns [5, 7, 3]
}