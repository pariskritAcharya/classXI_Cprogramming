//Program to Enter Values in an Array, Calculate Total Sum, and Average
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

     // Finding the total sum of values present in the array and average
int sum = 0;
for (i = 0; i < n; i++)
{
sum = sum + arr[i];
}

float avg = sum / n;
     printf("\nThe total sum of values in the array is %d and average is %f\n", sum, avg);

return 0;
}


/*

Enter the total number of values you want to store in the array: 5
Enter 5 values to store in array:
Enter the value for arr[0]: 12
Enter the value for arr[1]: 34
Enter the value for arr[2]: 56
Enter the value for arr[3]: 78
Enter the value for arr[4]: 90

The values stored in the array are : 12    34    56    78    90    
The total sum of values in the array is 270 and average is 54.000000
    

*/
