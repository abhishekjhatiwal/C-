// Memory Allocation to an Object Using Distructor
#include <iostream>
using namespace std;

class Test
{
private:
    int *a;

public:
    Test(int size)
    {
        a = new int[size];
        cout << endl
             << endl
             << "Constructor Msg: Integer array of size" << size << "Created...";
    }
    ~Test()
    {
        delete a;
        cout << "Destructor Msg: Freed up the memory allocated for integer array ";
    }
};

int main()
{
    int s;
    cout << "Enter the size of the array : ";
    cin >> s;
    cout << endl
         << endl
         << "Creating an Object of Test class ...";
    Test t(s);
    cout << endl
         << endl
         << "Press aney Key to end the program...";

    return 0;
}