// Write a program to enter a number and count the total number of digit and find the sum of the digit

// 1. Method 1 
#include <stdio.h>

int main()
{
int num, digit = 0, sum = 0;

printf("Enter a number: "); scanf("%d", &num);

while (num != 0)
{
digit = digit + 1; num = num / 10;
}

printf("The total number of digit in %d is %d\n", num, digit);

return 0;
}



/*

OUTPUT:
Enter a number : 452
The total number of digit present in 452 is 3

Enter a number : 7854
The total number of digit present in 7854 is 4

*/