// write a program to enter N values in the array and find the highest and the lowest values.
#include <stdio.h> 
int main()
{
int n, i, arr[100];
int highest=0,lowest=0;

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

// Finding the highest value present in the array int highest = arr[0];
for (i = 0; i < n; i++)
{
if (arr[i] > highest)
{
highest = arr[i];
}
}
     printf("The highest value present in the array is %d\n", highest);

// Finding the lowest value present in the array int lowest = arr[0];
for (i = 0; i < n; i++)
{
if (arr[i] < lowest)
{
lowest = arr[i];
}
}
     printf("The lowest value present in the array is %d\n", lowest);

return 0;
}



/*


OUTPUT:

Ener the total number of values you want to store in the array: 5 Enter 5 values to store in array:
Enter the value for arr[0]: 34 Enter the value for arr[1]: 32 
Enter the value for arr[2]: 89
Enter the value for arr[3]: 65 
Enter the value for arr[4]: 15
The values stored in the array are : 34 32	89	65	15
The highest value present in the array is 89 
The lowest value present in the array is 15


*/
