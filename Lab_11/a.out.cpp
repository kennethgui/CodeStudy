/*
Author: Kenneth Guillont
Course: CSCI-136
Instructor: Brandon Foster
Assignment: e7.18
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Triangle {
    Point p1;
    Point p2;
    Point p3;
};

double distance(Point p1, Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

void perimeter(const Triangle& triangle) {
    double side1 = distance(triangle.p1, triangle.p2);
    double side2 = distance(triangle.p2, triangle.p3);
    double side3 = distance(triangle.p3, triangle.p1);
    double p = side1 + side2 + side3;
    cout << p << endl;
}

int main() {
    Triangle Triangle;
    
    Triangle.p1.x = 0.0; Triangle.p1.y = 0.0;

    Triangle.p2.x = 4.0; Triangle.p2.y = 0.0;

    Triangle.p3.x = 0.0; Triangle.p3.y = 6.0;

    perimeter(Triangle);

    return 0;
}
