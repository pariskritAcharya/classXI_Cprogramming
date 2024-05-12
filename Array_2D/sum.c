// Write a program to create two 4 x 3 matrix using 2D array and find their sum

#include <stdio.h>

int main() {
    int rows = 4, cols = 3;
    
    // Declare the two 2D arrays
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
    
    // Input elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("\nEnter the elements of the second matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the two matrices
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Output the sum matrix
    printf("\nThe sum of the two matrices is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*
Enter the elements of the first matrix:
Enter element at position (0, 0): 1
Enter element at position (0, 1): 2
Enter element at position (0, 2): 3
Enter element at position (1, 0): 4
Enter element at position (1, 1): 5
Enter element at position (1, 2): 6
Enter element at position (2, 0): 7
Enter element at position (2, 1): 8
Enter element at position (2, 2): 9
Enter element at position (3, 0): 10
Enter element at position (3, 1): 11
Enter element at position (3, 2): 12

Enter the elements of the second matrix:
Enter element at position (0, 0): 5
Enter element at position (0, 1): 4
Enter element at position (0, 2): 3
Enter element at position (1, 0): 2
Enter element at position (1, 1): 1
Enter element at position (1, 2): 0
Enter element at position (2, 0): 9
Enter element at position (2, 1): 8
Enter element at position (2, 2): 7
Enter element at position (3, 0): 6
Enter element at position (3, 1): 5
Enter element at position (3, 2): 4

The sum of the two matrices is:
6    6    6    
6    6    6    
16    16    16    
16    16    16


*/