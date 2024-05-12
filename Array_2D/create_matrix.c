// Write a program to create N x M matrix using 2D array 
#include <stdio.h>

int main() {
    int N, M;
    
    // Input the dimensions of the matrix
    printf("Enter the number of rows (N): ");
    scanf("%d", &N);
    printf("Enter the number of columns (M): ");
    scanf("%d", &M);

    // Declare the 2D array
    int matrix[N][M];

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Output the matrix
    printf("\nThe matrix is:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*

Enter the number of rows (N): 2
Enter the number of columns (M): 3
Enter the elements of the matrix:
Enter element at position (0, 0): 1
Enter element at position (0, 1): 2
Enter element at position (0, 2): 3
Enter element at position (1, 0): 4
Enter element at position (1, 1): 5
Enter element at position (1, 2): 6

The matrix is:
1    2    3    
4    5    6


*/