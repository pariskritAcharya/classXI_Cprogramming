// write a program to enter N values in the array and display it in ascending order
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

// Code to find or sorting the values in ascending order int j, temp;
for (i = 0; i < n - 1; i++)
{
for (int j = i + 1; j < n; j++)
{
if (arr[i] > arr[j])
{
int temp = arr[i];
arr[i] = arr[j]; 
arr[j] = temp;
}
}
}

printf("\nThe values stored in the array are : "); 
for (i = 0; i < n; i++)
{
printf("%d\t", arr[i]);
}

return 0;
}


/*

OUTPUT:

Ener the total number of values you want to store in the array: 5 Enter 5 values to store in array:
Enter the value for arr[0]: 67 Enter the value for arr[1]: 43

Enter the value for arr[2]: 23 Enter the value for arr[3]: 89 Enter the value for arr[4]: 43
The values stored in the array are : 23 43	43	67	89


*/