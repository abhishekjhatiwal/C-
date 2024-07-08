#include<iostream>
using namespace std;

void ToH(int d, char tower1, char tower2, char tower3 ) {
    if (d == 1) {
        cout << "Disk shift " << tower1 << " to " << tower2 <<endl;
        return;
    }
    
    ToH( d-1, tower1, tower3, tower2);
        cout << "Disk shift to tower " << tower1 << " to tower" << tower2 <<endl;
        

    ToH( d-1, tower3, tower2, tower1);
}

int main() {
    int disk; 
    cout << "Enter the number of disk : ";
    cin >> disk;

    if (disk < 1)
    {
        cout << "There are no disk to shift " <<endl;
    }
    else {
        cout << "There are " << disk << " in tower 1 " << endl;
    }

    ToH(disk, '1', '2', '3');
    cout << endl << disk << " Disk in tower 1 is sifted to tower 2 ";

    return 0;
}