#include <iostream>
using namespace std;

// Function to input matrix elements
void inputMatrix(int matrix[3][3]) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[3][3]) {
    cout << "The matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to transpose a matrix
void transposeMatrix(int matrix[3][3], int transpose[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[3][3];
    int transpose[3][3];

    inputMatrix(matrix);

    cout << "The original matrix is:" << endl;
    displayMatrix(matrix);

    transposeMatrix(matrix, transpose);

    cout << "The matrix after transpose is:" << endl;
    displayMatrix(transpose);

    return 0;
}
