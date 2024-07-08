#include <iostream>
#include <vector>
using namespace std;

void readMatrix(vector<vector<int>>& matrix, int m, int n) {
    cout << " Enter the matrix elements:\n ";

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << " Enter element at position (" << i << ", " << j << "):  ";
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(const std::vector<std::vector<int>>& matrix) {
// void displayMatrix(const vector<vector<int>>& matrix) {
    cout << "Matrix:\n";
    for (const auto& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << '\n';
    }
}

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
    readMatrix(matrix, m, n);

    displayMatrix(matrix);

    return 0;
}
