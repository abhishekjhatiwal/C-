// Compile-time Polymorphism

#include<iostream>
using namespace std;

class B
{
public:
    void show(){
        cout<<"Base"<<endl;
    }
};

class D : public B
{
public:
     void show(){
        cout<<"Drived"<<endl;
    }
};


int main(){
     D d;
     d.show();
     d.B::show();

     return 0;
}