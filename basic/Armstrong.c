// write a program to check Armstrong number

#include <stdio.h> 
#include <math.h>
int main()
{
int num, org, digit, arm; printf("Enter a number : "); scanf("%d", &num);

arm = 0, org = num; digit = log10(num) + 1;

     printf("The total number of digits in %d is %d\n", num, digit);

while (num != 0)
{
int rem = num % 10;
arm = arm + pow(rem, digit); num = num / 10;
}

if (org == arm)
{
printf("The number %d is Armstrong\n", org);
}
else
{
printf("The number %d is not Armstrong\n", org);
}
}


/*


OUTPUT:

Enter a number : 456
The total number of digits in 456 is 3 The number 456 is not Armstrong

Enter a number : 371
The total number of digits in 371 is 3 The number 371 is Armstrong

*/