// Hybrid Inheritance

#include<iostream>
using namespace std;

class student
{
protected:
    int roll_number;
public:
    void get_number(int a){
        roll_number = a;
    }
    void put_number(){
        cout<<"Roll Number : "<<roll_number<<endl;
    }
};

class test : public student
{
protected:
    float part1, part2;
public:
    void get_marks(float x, float y){
        part1 = x; part2 = y;
    }
    void put_marks(){
        cout<<"Marks Obtains : "<<endl;
        cout<<"Part 1 = "<<part1<<endl;
        cout<<"Part 2 = "<<part2<<endl;
    }
};

class sports
{
protected:
    float score;
public:
    void get_score(float s){
        score = s;
    }
    void put_score(){
        cout<<"Sport wt : "<<score<<endl<<endl;
    }
};

class result : public test, public sports
{
private:
    float total;
public:
    void display();
};

void result::display()
{
    total = part1+part2+score;

    put_number();
    put_marks();
    put_score();

    cout<<"Total Score : "<<total<<endl;
}


int main(){
    result student1;
    student1.get_number(1234);
    student1.get_marks(27.5,33.00);
    student1.get_score(6.0);
    student1.display();

    return 0;
}

