#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    cout.setf(ios::showpos);

    cout<<setw(5)<<"n";
    cout<<setw(15)<<"Inverse_of_n";
    cout<<setw(15)<<"Sum_of_terms"<<endl<<endl;

    double term, sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        term = 1.0/float(i);
        sum = sum+term;

        cout<<setw(5)<<i;
        cout<<setw(14)<<setprecision(4);
        cout<<setiosflags(ios::scientific)<<term;
        cout<<setw(13)<<resetiosflags(ios::scientific);
        cout<<sum<<endl;
    }
    
    return 0;
}