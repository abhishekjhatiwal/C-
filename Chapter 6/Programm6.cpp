// Constructing Matrix Object

#include<iostream>
using namespace std;

class Matrix
{
private:
    int **p;              // pointer to matrix
    int d1,d2;           // dimensions
public:
    Matrix(int x, int y);
    void get_element(int i, int j, int value){
        p[i][j] = value;
    }
    int &put_element(int i, int j){
        return p[i][j];
    }
};
Matrix::Matrix(int x, int y)
{
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for (int i = 0; i < d1; i++)
    {
        p[i] = new int[d2];
    }
    
}

int main(){
    int m, n;

    cout<<"Enter size of matrix : ";
    cin>>m>>n;
    Matrix A(m,n);

    cout<<"Enter matrix element row by row :"<<endl;
    int i,j, value;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin>>value;
            A.get_element(i,j,value);
        }
    }
        cout<<endl;
        cout<<A.put_element(1,2);

        return 0;
}
