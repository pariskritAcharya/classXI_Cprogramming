// 2. Method 2 
#include <stdio.h> #include <math.h>

int main()
{
int num, digit; printf("Enter a number : "); scanf("%d", &num);

digit = log10(num) + 1;
     printf("The total number of digit present in %d is %d\n", num, digit);

return 0;
}


/*

OUTPUT:
Enter a number : 452
The total number of digit present in 452 is 3

Enter a number : 7854
The total number of digit present in 7854 is 4

*/