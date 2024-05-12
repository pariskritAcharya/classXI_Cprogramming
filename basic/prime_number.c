// Write a program to check prime number 
#include <stdio.h>
int main()
{
int num, i, isprime, isprime = 1;

printf("Enter a number : ");
scanf("%d", &num);

if (num < 2)
{
          printf("The number %d is less than 2 and cannot be a prime number\n", num);
}
else
{
for (i = 2; i * i <= num; i++)
{
if (num % i == 0)
{
isprime = 0; break;
}
}

if (isprime == 1)
{
printf("%d is a Prime Number", num);
}
else
{
printf("%d is not a prime number", num);
}
}
return 0;
}




/*
OUTPUT:

Enter a number : 7
7 is a Prime Number

Enter a number : 15
15 is not a prime number

Enter a number : 23
23 is a Prime Number

*/