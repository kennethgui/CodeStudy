/*
Author: Kenneth Guillont
Course: CSCI-136
Instructor: Brandon Foster
Assignment: E7.16
*/

#include <iostream>
#include <cmath>

using namespace std;

// Define the Point structure
struct Point {
    double x;
    double y;
};

// Function to compute the distance between two points
double distance(Point a, Point b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point pointA, pointB;

    cout << "X-coordinate of point A: ";
    cin >> pointA.x;
    cout << "Y-coordinate of point A: ";
    cin >> pointA.y;

    cout << "X-coordinate of point B: ";
    cin >> pointB.x;
    cout << "Y-coordinate of point B: ";
    cin >> pointB.y;

    double dist = distance(pointA, pointB);
    cout << "Distance between points is: " << dist << endl;

    return 0;
}
