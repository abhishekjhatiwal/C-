#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

double area(double base, double height) {
    return 0.5 * base * height; // Area of a triangle
}

double area(double radius) {
    return PI * radius * radius; // Area of a circle
}

int main() {
    double base, height, radius;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double triangleArea = area(base, height);
    double circleArea = area(radius);

    cout << "Area of the triangle: " << triangleArea << endl;
    cout << "Area of the circle: " << circleArea << endl;

    return 0;
}
