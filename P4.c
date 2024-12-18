/*
    Write a C function that takes two input parameters, an array of characters (a string), and its size (integer),
    and returns 1 if the first character of the given string is uppercase, returns 0 if it is lowercase, and returns -
    1 if it is a digit
*/

#include <stdio.h>

int CheckFirstCharacter(char str[], int size) {
    if (str[0] >= 'A' && str[0] <= 'Z') {
        return 1;
    } else if (str[0] >= 'a' && str[0] <= 'z') {
        return 0;
    } else if (str[0] >= '0' && str[0] <= '9') {
        return -1;
    }
}

int main() {
    char str[100];
    int size;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the size of the string: ");
    scanf("%d", &size);
    int result = CheckFirstCharacter(str, size);
    if (result == 1) {
        printf("First character of the string is uppercase\n");
    } else if (result == 0) {
        printf("First character of the string is lowercase\n");
    } else if (result == -1) {
        printf("First character of the string is a digit\n");
    }
}