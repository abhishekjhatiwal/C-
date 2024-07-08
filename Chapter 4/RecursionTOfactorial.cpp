#include<iostream>
using namespace std;

long fact(int n) {

    if (n == 0){
      return 1;
    }
    else{
      return (n*fact(n-1));   // recursive function call
      }
}

int main() {

    int num;
    cout<<"Enter a positive number : ";
    cin >> num;

    cout<<"The factorial of number "<<num << " is " <<fact(num);

    return 0;
}