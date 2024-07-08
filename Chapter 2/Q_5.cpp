#include<iostream>
using namespace std;

int main() {
    float Fahrenheit;
    cout << "Enter temprature in Fahrenheit :-- ";
    cin >> Fahrenheit;

    // The Formula of converting Fahrenheit into celsius is °C = (°F - 32) × 5/9

    float celsius = (Fahrenheit-32) * 5/9;

    cout << " The temprature in celsius is " << celsius << endl;

   return 0;
}