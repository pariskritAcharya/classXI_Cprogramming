
// Write a program to create 4 x 3 matrix using 2D array and find it's transpose

#include <stdio.h>

int main() {
    int rows = 4, cols = 3;
    
    // Declare the original 2D array
    int matrix[rows][cols];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Output the original matrix
    printf("\nThe original matrix is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Finding the transpose
    int transpose[cols][rows];
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Output the transpose matrix
    printf("\nThe transpose of the matrix is:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*
Enter the elements of the matrix:
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

The original matrix is:
1    2    3    
4    5    6    
7    8    9    
10    11    12    

The transpose of the matrix is:
1    4    7    10    
2    5    8    11    
3    6    9    12


*/