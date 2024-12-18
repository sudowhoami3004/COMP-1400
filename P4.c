/*
Write a C function that takes two input parameters, an array of characters (a string), and its size (integer),
and returns 1 if the first character of the given string is uppercase, returns 0 if it is lowercase, and returns -
1 if it is a digit
*/

#include <stdio.h>

int CheckFirstCharacter(char string[], int arraySize) {
    if (string[0] >= 'A' && string[0] <= 'Z') {
        return 1;
    } else if (string[0] >= 'a' && string[0] <= 'z') {
        return 0;
    } else if (string[0] >= '0' && string[0] <= '9') {
        return -1;
    }

    return -1;
}
int main(void) {
    int arraySize;
    printf("Enter the size of the string: ");
    scanf("%d", &arraySize);
    getchar();
    
    char string[arraySize + 1];
    printf("Enter a string: ");
    scanf("%s", string);

    int result = CheckFirstCharacter(string, arraySize);

    if (result == 1) {
        printf("The first character of \"%s\" is uppercase", string);
    }
    else if (result == 0) {
        printf("The first character of \"%s\" is lowercase", string);
    }
    else if (result == -1) {
        printf("The first character of \"%s\" is a digit", string);
    }
}