// Write a program in C to check a leap year 
#include <stdio.h>
int main()
{
int year;

printf("Enter year: "); scanf("%d", &year);

if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
{
printf("The year %d is Leap Year\n", year);
}
else
{
printf("The year %d is not a Leap Year \n", year);
}

return 0;
}


/*

OUTPUT:

Enter year: 2020
The year 2020 is Leap Year

Enter year: 2023
The year 2023 is not a Leap Year

Enter year: 2024
The year 2024 is Leap Year




*/