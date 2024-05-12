// write a program to enter N values in the array. Enter a value to search in the array
#include <stdio.h> 
int main()
{
int n, i, arr[100];

     printf("Ener the total number of values you want to store in the array: ");
scanf("%d", &n);
printf("Enter %d values to store in array: \n", n); 
for (i = 0; i < n; i++)
{
printf("Enter the value for arr[%d]: ", i);
scanf("%d", &arr[i]);
}

printf("\nThe values stored in the array are : "); for (i = 0; i < n; i++)
{
printf("%d\t", arr[i]);
}

int key;
printf("\nEnter a value to search in the array : "); scanf("%d", &key);

for (i = 0; i < n; i++)
{
if (key == arr[i])
{
              printf("The value %d is present in the array at location %d\n", key, i + 1);
break;
}
}

if (i >= n)
{
printf("The value %d is not present in the array ", key);
}
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
Enter a value to search in the array : 56
The value 56 is present in the array at location 3


*/