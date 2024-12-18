/*
Write a C function that takes two string arrays as input and returns 1 if they are equal and otherwise returns
0. Two arrays are considered equal if both arrays contain the same number of elements, and all
corresponding pairs of elements in the two arrays are equal in the same order
*/

#include <stdio.h>

int CompareTwoStrings(char string1[], char string2[]) {
    int i = 0;
    while (string1[i] != '\0' && string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            return 0;
        }
        i++;
    }

    if (string1[i] == '\0' && string2[i] == '\0') {
        return 1;
    }
    else {
        return 0;
    }
}

int main(void) {
    char string1[100], string2[100];
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);

    int result = CompareTwoStrings(string1, string2);
    if (result == 1) {
        printf("\"%s\" and \"%s\" are equal", string1, string2);
    }
    else {
        printf("\"%s\" and \"%s\" are not equal", string1, string2);
    }
}