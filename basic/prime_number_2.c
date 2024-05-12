// Write a program to print all the prime numbers from 1 to n 

#include <stdio.h>
int main()
{
int n, i, j, isprime;

printf("Enter a number : "); 
scanf("%d", &n);

printf("All the prime numbers from 1 to %d are : \n", n); for (j = 2; j <= n; j++)
{
isprime = 1;
for (i = 2; i * i <= j; i++)
{
if (j % i == 0)
{
isprime = 0; break;
}
}

if (isprime == 1)
{
printf("%d\t", j);
}
}
}


/*


OUTPUT:




Enter a All the
number : 100
prime numbers from
1 to
100 are :

2
3	5	7

11	13
17
19
23
29
31	37	41

43	47
53
59

61
67	71	73

79	83
89
97
*/
