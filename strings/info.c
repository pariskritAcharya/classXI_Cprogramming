// Write a program in C to enter name, gender and mark of a student and display it. ask the user if they want to add the inormation of more students if yes add it otherwrise terminate the program.
#include <stdio.h>

int main() {
    char name[100];
    char gender;
    float mark;
    char choice;

    do {
        printf("Enter name of the student: ");
        scanf("%s", name);

        printf("Enter gender of the student: ");
        scanf(" %c", &gender);

        printf("Enter mark of the student: ");
        scanf("%f", &mark);

        printf("Name: %s\n", name);
        printf("Gender: %c\n", gender);
        printf("Mark: %.2f\n", mark);

        printf("Do you want to add information of another student? (y/n): ");
        scanf(" %c", &choice);
    } while(choice == 'y' || choice == 'Y');

    printf("Program terminated.\n");

    return 0;
}


/*

Enter name of the student: John
Enter gender of the student: M
Enter mark of the student: 85
Name: John
Gender: M
Mark: 85.00
Do you want to add information of another student? (y/n): y
Enter name of the student: Alice
Enter gender of the student: F
Enter mark of the student: 90
Name: Alice
Gender: F
Mark: 90.00
Do you want to add information of another student? (y/n): n
Program terminated.


*/
