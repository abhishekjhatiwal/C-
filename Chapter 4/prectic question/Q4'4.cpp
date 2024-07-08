#include<iostream>
using namespace std;

int & fun (int &);

int & fun (int &x) {
      x++;
      return (x);
}

int main() {
    int a = 5;
    fun(a) = a;
    cout << a << endl;
    fun(a) = ++a;
    cout << a << endl;
    fun(a) = ++a;
    cout << a << endl;
    return 0;
}


// #include <iostream>  // Include the necessary header for using cout

// int & fun(int &);

// int & fun(int &x) {
//     x++;
//     return x;
// }

// int main() {
//     int a = 5;
//     fun(a) = a;
//     std::cout << a << std::endl;
//     fun(a) = ++a;
//     std::cout << a << std::endl;
//     fun(a) = ++a;
//     std::cout << a << std::endl;
//     return 0;
// }
