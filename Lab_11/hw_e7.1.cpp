/*
Author: Kenneth Guillont
Course: CSCI-136
Instructor: Brandon Foster
Assignment: E7.1
*/

#include <iostream>
using namespace std;

void sort2(double* p, double* q) {
    if (*p > *q) {
        double temporary = *p;
        *p = *q;
        *q = temporary;
    }
}

int main() {
    double x = 14.2;
    double y = 7.8;

    sort2(&x, &y);

    return 0;
}