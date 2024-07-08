// new Programm

#include <iostream>
#include <cstring>
using namespace std;

char *allocateMemory();

int main()
{
    char *str;
    str = allocateMemory();
    cout << str;
    delete[] str;      // Use delete[] for dynamic arrays
    str = new char[3]; // Allocate memory for new string
    str[0] = ' ';
    str[1] = ' ';
    str[2] = '\0'; // Null-terminate the string
    cout << str;
    delete[] str; // Deallocate memory
    return 0;     // Return 0 to indicate successful completion
}

char *allocateMemory()
{
    // int n;
    // cout<<"Enter the number of character in the string : ";
    // cin>>n;
    char *str = new char[24]; // Allocate memory for the string
    strcpy(str, " Memory allocation test");
    return str;
}
