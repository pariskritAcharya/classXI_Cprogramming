// Write a program to check a palindrome number 
#include <stdio.h>
int main()
{
int num, rev, n, org, rem; rev = 0;
printf("Enter a number: "); 
scanf("%d", &n);

org = n;
printf("The user entered number is : %d\n", n);

while (n != 0)
{
rem = n % 10;
rev = rev * 10 + rem; n = n / 10;
}

printf("the reverse of the number is %d\n", rev);

if (org == rev)
{
printf("The number %d is palindrome\n", org);
}
else
{
printf("The number %d is not palindrome.\n", org);
}

return 0;
}

/*

OUTPUT:

Enter a number: 456
The user entered number is : 456 the reverse of the number is 654 The number 456 is not palindrome.

Enter a number: 454
The user entered number is : 454 the reverse of the number is 454 The number 454 is palindrome






*/