#include<iostream>
using namespace std;

int area(int);
int area(int, int);
float area(float);

int main() {
    cout << "Calling the area() function for computing the area of square (side = 5) - " << area(5) << endl;
    cout << "Calling the area() function for computing the area of rectangle (length = 5, breadth = 15) - " << area(5, 15) << endl;
    cout << "Calling the area() function for computing the area of circle (radius = 5.5) - " << area(2.00) << "\n";
    
    return 0;
}

int area(int side) {
    return (side * side);
}

int area(int length, int breadth) {
    return (length * breadth);
}

float area(float radius) {
    return (3.14 * radius * radius);
}
