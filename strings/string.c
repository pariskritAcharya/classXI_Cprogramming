// Write a program in C to enter a character and string also display them

#include <stdio.h>

int main() {
    char name[100];
    char gender;

    printf("Enter name of a person: ");
    scanf("%s", name);

    printf("Enter gender of a person: ");
    scanf(" %c", &gender);

    printf("The name of the person is %s and %c.\n", name, gender);

    return 0;
}


/*

Enter name of a person: John
Enter gender of a person: M
The name of the person is John and M.


*/