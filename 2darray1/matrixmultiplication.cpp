#include <iostream>
using namespace std;
int main() {
    int m, n, p;

    // Input dimensions for the matrices
    cout << "Enter the number of rows for matrix A: ";
    cin >> m;
    cout << "Enter the number of columns for matrix A (and rows for matrix B): ";
    cin >> n;
    cout << "Enter the number of columns for matrix B: ";
    cin >> p;

    // Declare the matrices
    int A[m][n], B[n][p], C[m][p];

    // Input elements for matrix A
    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }

    // Input elements for matrix B
    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> B[i][j];
        }
    }

    // Initialize the result matrix C with zeros
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
