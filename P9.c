/*
    Write a C function that takes two string arrays as input and returns 1 if they are equal and otherwise returns
    0. Two arrays are considered equal if both arrays contain the same number of elements, and all
    corresponding pairs of elements in the two arrays are equal in the same order.
*/

#include <stdio.h>

int CheckEqual(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    int result = CheckEqual(str1, str2);
    if (result == 1) {
        printf("Both strings are equal\n");
    } else {
        printf("Both strings are not equal\n");
    }
}