// Multilevel Inheritance

#include <iostream>
using namespace std;

class student
{
protected:
    // private:
    int roll_number;

public:
    void get_Rollnumber(int);
    void put_number();
};
void student::get_Rollnumber(int a)
{
    roll_number = a;
}
void student::put_number()
{
    cout << "Roll number is : " << roll_number << endl;
}

class test : public student // First level inheritence
{
protected:
    float sub1;
    float sub2;

public:
    void get_marks(float, float);
    void put_marks();
};
void test::get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}
void test::put_marks()
{
    cout << "Marks in subject 1 is : " << sub1 << endl;
    cout << "Marks in subject 2 is : " << sub2 << endl;
}

class result : public test // second level inheritance
{
private:
    float total;

public:
    void display();
};
void result::display()
{
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout << "Total = " << total << endl;
}

int main()
{
    result student1;
    student1.get_Rollnumber(111);
    student1.get_marks(76.50, 72.20);
    student1.display();

    return 0;
}