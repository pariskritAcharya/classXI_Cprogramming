
//pyramid

#include <stdio.h>

int main() {
    int rows, spaces;

    // Input the number of rows
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Loop to print the pyramid
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/*

    *
   ***
  *****
 *******
*********


*/