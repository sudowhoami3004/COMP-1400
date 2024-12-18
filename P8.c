/*
    Write a C program to read a lowercase character and convert it into the corresponding uppercase character
*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a lowercase character: ");
    scanf("%c", &ch);
    ch = ch - 32;
    printf("Uppercase character is: %c\n", ch);
}