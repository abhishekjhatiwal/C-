// Constructors with new

#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
    char *name;
    int length;
public:
    String(){
        length = 0;
        name = new char[length+1];
    }
    String(char *s){
        length = strlen(s);
        name = new char[length+1];
        strcpy(name, s);
    }
    void display(){
        cout << name<< endl;
    }
    void joint(String &a, String &b);
};
 void String::joint(String &a, String &b)
{
    length = a.length + b.length;
    delete name; 
    name = new char[length+1];               // dynamic allocation

    strcpy(name, a.name);
    strcat(name, b.name);
}

int main(){
    char *first = " Joseph ";
    String name1(first), name2("Louis"), name3("Lagrange"), s1,s2;

    s1.joint(name1,name2);
    s2.joint(name1,name3);

    name1.display();
    name2.display();
    name3.display();

    s1.display();
    s2.display();

     return 0;
}
