// Single Inheritance : Privat

#include <iostream>
using namespace std;

class B
{
private:
    // protected:
    int a;

public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};

class D : private B
{
private:
    int c;

public:
    void mul();
    void display();
};
void D::mul()
{
     get_ab();
    c = b * get_a(); // a can't be access directly
    // c = b*a;                // can be access directly when a is protected
}
void D::display()
{
    show_a();
    // cout<<"a = "<<a<<endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl
         << endl;
}

void B::get_ab()
{
    cout << "Enter the value of a and b : ";
    cin >> a >> b;
}
int B::get_a()
{
    return a;
}
void B::show_a()
{
    cout << "a = " << a << endl;
}

int main()
{
    D d;

    // d.get_ab();       // won't work
    d.mul();
    // d.show_a();           won't work
    d.display();
    // d.b = 20;              won't work
    d.mul();
    d.display();

    return 0;
}