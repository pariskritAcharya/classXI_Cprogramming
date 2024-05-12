// write a program to enter N values in the array and display it 
#include <stdio.h>
int main()
{
int n, i, arr[100];

     printf("Ener the total number of values you want to store in the array: ");
scanf("%d", &n);
printf("Enter %d values to store in array: \n", n); for (i = 0; i < n; i++)
{
printf("Enter the value for arr[%d]: ", i); scanf("%d", &arr[i]);
}

printf("\nThe values stored in the array are : "); for (i = 0; i < n; i++)
{
printf("%d\t", arr[i]);
}

return 0;
}


/*

OUTPUT:

Ener the total number of values you want to store in the array: 5 
Enter 5 values to store in array:
Enter the value for arr[0]: 12 
Enter the value for arr[1]: 32 
Enter the value for arr[2]: 56 
Enter the value for arr[3]: 33 
Enter the value for arr[4]: 78
The values stored in the array are : 12 32	56	33	78



*/