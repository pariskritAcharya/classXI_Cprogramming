//triangle


#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the left-right angled triangle
    for (int i = 1; i <= rows; i++) {
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


/*

* 
* * 
* * * 
* * * * 
* * * * * 


*/