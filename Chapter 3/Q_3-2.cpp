/*
#include<iostream>
using namespace std;

#define pi 3.14;

int squareArea(int &);
double circleArea(int &);

int main(){
    int a = 10;

    cout<< squareArea(a) << " ";
    cout<< circleArea(a) << " ";
    cout<< a <<endl;
    return 0;
}

int squareArea(int &a) {
    return a * a;
}

// int circleArea(int &r) {
//     return pi * r * r;
// }
   double circleArea(int &r) {
    return pi*r*r;
}
         */


#include <iostream>
using namespace std;

#define pi 3.14 // Remove the semicolon here

int squareArea(int &);
double circleArea(int &); // Change the return type to double

int main() {
    int a = 10;

    cout << "The area of squre " << squareArea(a) << " " << endl;
    cout << "The area of circule " << circleArea(a) << " " << endl;
    cout << "radious is " << a << endl;
    return 0; // Return 0 to indicate successful completion
}

int squareArea(int &a) {
    return a*a;           // Remove the unnecessary '==' symbol
}

double circleArea(int &r) {
    return pi*r*r;
}
