

// write a program to enter N values in the array and find the higest and the lowest valeus also enter a value to search in the array

#include <stdio.h>

int main() {
    int n, i, arr[100];

    // Input the number of elements
    printf("Enter the total number of values you want to store in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d values to store in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter the value for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Finding the highest value present in the array
    int highest = arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }
    printf("The highest value present in the array is %d\n", highest);

    // Finding the lowest value present in the array
    int lowest = arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i] < lowest) {
            lowest = arr[i];
        }
    }
    printf("The lowest value present in the array is %d\n", lowest);

    // Search for a value in the array
    int key;
    printf("Enter a value to search in the array: ");
    scanf("%d", &key);
    int found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("The value %d is present in the array at location %d\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("The value %d is not present in the array\n", key);
    }

    return 0;
}


/*
Enter the total number of values you want to store in the array: 5
Enter 5 values to store in the array:
Enter the value for arr[0]: 12
Enter the value for arr[1]: 32
Enter the value for arr[2]: 56
Enter the value for arr[3]: 33
Enter the value for arr[4]: 78
The highest value present in the array is 78
The lowest value present in the array is 12
Enter a value to search in the array: 56
The value 56 is present in the array at location 3


*/