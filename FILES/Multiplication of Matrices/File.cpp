#include <iostream>
using namespace std;

// Function to perform matrix multiplication
void multiplyMatrices(int matrix1[][100], int rows1, int columns1, int matrix2[][100], int rows2, int columns2, int result[][100]) {
    // Initialize result matrix to zero
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to input matrix elements
void inputMatrix(int matrix[][100], int rows, int columns) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to display matrix
void displayMatrix(int matrix[][100], int rows, int columns) {
    cout << "The resultant matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows1, columns1, rows2, columns2;
    
    cout << "Enter the rows of the first matrix: ";
    cin >> rows1;
    cout << "Enter the columns of the first matrix: ";
    cin >> columns1;

    cout << "Enter the rows of the second matrix: ";
    cin >> rows2;
    cout << "Enter the columns of the second matrix: ";
    cin >> columns2;

    // Ensure matrix multiplication is possible
    if (columns1 != rows2) {
        cout << "Matrix multiplication is not possible with the given dimensions." << endl;
        return 1;
    }

    int matrix1[100][100], matrix2[100][100], result[100][100];

    cout << "Enter the elements of the first matrix:" << endl;
    inputMatrix(matrix1, rows1, columns1);

    cout << "Enter the elements of the second matrix:" << endl;
    inputMatrix(matrix2, rows2, columns2);

    multiplyMatrices(matrix1, rows1, columns1, matrix2, rows2, columns2, result);

    displayMatrix(result, rows1, columns2);

    return 0;
}
