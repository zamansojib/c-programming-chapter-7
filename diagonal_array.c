#include<stdio.h>

int isDiagonalMatrix(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Check if non-diagonal elements are zero
            if (i != j && matrix[i][j] != 0) {
                return 0; // Not a diagonal matrix
            }
        }
    }
    return 1; // It is a diagonal matrix
}


int main(void){

   

    int n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isDiagonalMatrix(matrix, n)) {
        printf("The matrix is a diagonal matrix.\n");
    } else {
        printf("The matrix is not a diagonal matrix.\n");
    }








    return 0;
}