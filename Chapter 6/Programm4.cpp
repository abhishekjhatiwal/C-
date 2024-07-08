// Copy Constructor

#include<iostream>
using namespace std;

class code
{
private:
    int id;
public:
    code(){ }
    code(int a){ id = a;}
    code(code &x){
        id = x.id;
    }
    void disolay(){
        cout<<id;
    }
};

int main(){
    code A(100);
    code B(A);
    code C = A;

    code D;
    D = A;

    cout<<endl<<"id of A is : ";  A.disolay();
    cout<<endl<<"id of B is : ";  B.disolay();
    cout<<endl<<"id of C is : ";  C.disolay();
    cout<<endl<<"id of D is : ";  D.disolay();

    return 0;
}
