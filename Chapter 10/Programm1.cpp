// Character I/O with get() and put()

#include<iostream>
using namespace std;

int main(){
    int count = 0;
    char c;

    cout<<"INPUT TEXT \n";

    cin.get(c);

    while (c != '\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout<<"\n Number of characters = "<<count<<endl;

    return 0;
}