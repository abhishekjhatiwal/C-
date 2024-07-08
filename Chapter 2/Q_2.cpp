#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter two number : ";
    cin >> a >> b;

    // if (a > b)
    // {
    //     cout << "The large value is : ";
    //     cout << a << endl;
    // }
    // else if (b > a)
    // {
    //     cout << "The large value is : ";
    //     cout << b << endl;
    // }
    // else
    // {
    //     cout << "Both number are equal ";
    // }

    // The second method is 
    int large = (a > b) ? a : b;
    cout << "The large value is " << large <<endl;
    return 0;
}