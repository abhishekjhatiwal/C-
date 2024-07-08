#include<iostream>
using namespace std;

inline float multiple(float x,float y) {
    return x*y;
}

inline double divisible(double p,double q) {
    return p/q;
}

int main() {
    float a;
    double b;
    cout << "Enter two float number : ";
    cin >> a >> b ;

    cout << multiple(a,b) << endl;
    cout << divisible(a,b) << endl;
}