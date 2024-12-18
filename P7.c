/*
    Write a C function that takes as input an integer and returns 1 if it is odd and returns 0 if it is even
*/

#include <stdio.h>

int CheckOddEven(int n) {
    if (n % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    int result = CheckOddEven(n);
    if (result == 1) {
        printf("%d is an odd number\n", n);
    } else {
        printf("%d is an even number\n", n);
    }
}