/*
    Write a C function that takes as input an integer number, n, and converts it to a string and display it.
*/

#include <stdio.h>

void IntToString(int n) {
    char str[100];
    sprintf(str, "%d", n);
    printf("String representation of %d is: %s\n", n, str);
}

int main() {
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    IntToString(n);
}