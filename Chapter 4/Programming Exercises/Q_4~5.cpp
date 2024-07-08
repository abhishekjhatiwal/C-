#include <iostream>
using namespace std;

int findLargest(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int num1, num2, num3;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    int largest = findLargest(num1, num2, num3);
    
    cout << "The largest number is: " << largest << endl;
    
    return 0;
}




// The Second method is ----->>

// #include <iostream>
// using namespace std;

//  #define MAX3(a, b, c) ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)) 

// int main() {
//     int num1, num2, num3;
    
//     cout << "Enter three numbers: ";
//     cin >> num1 >> num2 >> num3;
    
//     int largest = MAX3(num1, num2, num3);
    
//     cout << "The largest number is: " << largest << endl;
    
//     return 0;
// }
