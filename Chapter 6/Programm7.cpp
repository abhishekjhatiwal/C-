// Implementation of Destructors

#include <iostream>
using namespace std;

int count = 0;

class Test
{
public:
    Test()
    {
        count++;
        cout << endl
             << endl
             << "Constructor Msg : Object numbrt : " << count << " Created..";
    }
    ~Test()
    {
        cout << endl
             << endl
             << "Dustructor Msg : Object numbrt : " << count << " Destoryed..";
        count--;
    }
};

int main()
{
    cout << "Inside the main block ...";
    cout << endl
         << endl
         << "Creating first object ...";

    Test T1;

    {
        // Block 1
        cout << endl
             << endl
             << "Inside Block 1...";
        cout << endl
             << endl
             << "Creating two more object T1 and T2....";
        Test T2, T3;
        cout << endl
             << endl
             << "Leaving block 1 ";
    }
    cout << endl
         << endl
         << "Back inside the main Block";

    return 0;
}