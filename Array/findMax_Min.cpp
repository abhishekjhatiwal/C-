#include<iostream>
// #include<climits>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of array :";
    cin >> n;

    int mat[10];

    for (int i = 0; i < n; i++)
    {
        cin >> mat[i];
    }
    
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (mat[i] > max)
        {
            max = mat[i];
        }
        else if (mat[i] < min)
        {
            min = mat[i];
        }
        
            cout << max << " Is maximum number ";
            cout << endl;
            cout << min << " is Minimum Number " << endl;
    }
    return 0;
}
