#include <stdio.h>

// Function to read a matrix from the user
void readMatrix(int rows, int cols, int matrix[][cols]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices
void addMatrices(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int resultMatrix[][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[][cols]) {
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input the dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], resultMatrix[rows][cols];

    // Input the elements of the first matrix
    printf("\nEnter elements for the first matrix:\n");
    readMatrix(rows, cols, matrix1);

    // Input the elements of the second matrix
    printf("\nEnter elements for the second matrix:\n");
    readMatrix(rows, cols, matrix2);

    // Add the matrices
    addMatrices(rows, cols, matrix1, matrix2, resultMatrix);

    // Display the result
    displayMatrix(rows, cols, resultMatrix);

    return 0;
}
