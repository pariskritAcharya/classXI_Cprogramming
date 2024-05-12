#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "University";
    char str2[100] = "League";
    char str3[100];

    printf("The string is %s\n", str1);
    printf("The length of the string is %lu\n", strlen(str1));
    
    // Converting to upper case
    char temp_str1_upper[100];
    strcpy(temp_str1_upper, str1);
    for (int i = 0; temp_str1_upper[i]; i++) {
        temp_str1_upper[i] = toupper(temp_str1_upper[i]);
    }
    printf("Upper case of string is %s\n", temp_str1_upper);
    
    // Converting to lower case
    char temp_str1_lower[100];
    strcpy(temp_str1_lower, str1);
    for (int i = 0; temp_str1_lower[i]; i++) {
        temp_str1_lower[i] = tolower(temp_str1_lower[i]);
    }
    printf("Lower case of string is %s\n", temp_str1_lower);
    
    // Reversing the string
    char temp_str1_reverse[100];
    int len = strlen(str1);
    for (int i = 0; i < len; i++) {
        temp_str1_reverse[i] = str1[len - i - 1];
    }
    temp_str1_reverse[len] = '\0';
    printf("Reverse of the string is %s\n", temp_str1_reverse);
    
    // Concatenating two strings
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("Adding two strings is %s\n", str3);
    
    // Copying string to new variable
    printf("Copying string to new variable str3: %s\n", strcpy(str3, str1));
    
    // Comparison of strings
    printf("Comparison of string %s and %s is %d\n", str1, str3, strcmp(str1, str3));

    return 0;
}




/*

The string is University
The length of the string is 10
Upper case of string is UNIVERSITY
Lower case of string is university
Reverse of the string is ytisrevinU
Adding two strings is UniversityLeague
Copying string to new variable str3: University
Comparison of string University and University is 0



*/