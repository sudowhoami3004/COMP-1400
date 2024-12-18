/*
Write a C function that takes as input an integer number, n, and converts it to a string and display it
*/

#include <stdio.h>
#include <string.h>

void IntToString(int number, char string[]) {
    int i = 0;
    int sign = number;
    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        string[i++] = number % 10 + '0';
        number /= 10;
    }

    if (sign < 0) {
        string[i++] = '-';
    }

    string[i] = '\0';

    for (int j = 0, k = i - 1; j < k; j++, k--) {
        char temporary = string[j];
        string[j] = string[k];
        string[k] = temporary;
    }
}

int main() {
    int number;
    char string[100];
    printf("Enter an integer number: ");
    scanf("%d", &number);
    
    IntToString(number, string);
    printf("%d as string is: \"%s\"", number, string);
}