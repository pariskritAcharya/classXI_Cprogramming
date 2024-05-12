
// WAP in C to find the total sum of the digit present in the number
#include <stdio.h> 
int main()
{
int num, sum = 0, digit = 0, rem;

printf("Enter a number: "); scanf("%d", &num);

int n = num;
printf("The number is %d\n", num);

while (num != 0)
{
rem = num % 10; sum = sum + rem; digit = digit + 1; num = num / 10;
}

     printf("The number is %d which has %d digit and its sum of digit is %d\n", n, digit, sum);

return 0;
}

/*

OUTPUT:

Enter a number: 456 The number is 456
The number is 456 which has 3 digit and its sum of digit is 15

*/