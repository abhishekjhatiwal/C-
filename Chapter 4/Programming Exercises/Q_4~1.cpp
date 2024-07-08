// write a function to read a matrix of size m*n from the keybord

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> readMatrix(int m, int n) {
    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter the matrix elements:\n";

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }

    return matrix;
}

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    vector<vector<int>> matrix = readMatrix(m, n);

    cout << "Matrix you entered:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
