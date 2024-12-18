/*
Write a C function that takes as input an integer and returns 1 if it is odd and returns 0 if it is even
*/

#include <stdio.h>

int CheckOddEven(int number) {
    if (number % 2 == 0) {
        return 0;
    } 
    else {
        return 1;
    }
}

int main(void) {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    int result = CheckOddEven(number);
    if (result == 1) {
        printf("%d is an odd number", number);
    }
    else {
        printf("%d is an even number", number);
    }
}