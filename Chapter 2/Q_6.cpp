#include <iostream>
using namespace std;

class Temp {
private:
    double fahrenheit;

public:
    void inputFahrenheit() {
        cout << "Enter temperature in °Fahrenheit: ";   // ° this is made by press "alt + 0176" 
        cin >> fahrenheit;
    }

    double convertToFahrenheit() {
        return (fahrenheit - 32.0) * 5.0 / 9.0;
    }
};

int main() {
    Temp temperature;

    temperature.inputFahrenheit();
    double celsius = temperature.convertToFahrenheit();

    cout << "Temperature in Celsius: " << celsius << "°C" << endl;

    return 0;
}
