#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Enter the three number a,b,c : ";
    cin >> a >> b >> c;

    int x = a/b-c;

    cout << "The value of x is : " << x << endl;
    return 0;
}