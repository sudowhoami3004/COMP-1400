/*
Write a C program to read a lowercase character and convert it into the corresponding uppercase character
*/

#include <stdio.h>

char ConvertToUppercase(char character) {
    return character - 32;
}

int main(void) {
    char character;
    printf("Enter a lowercase character: ");
    scanf("%c", &character);

    printf("Lowercase character of \"%c\" is UpperCase character of \"%c\"", character, ConvertToUppercase(character));
}