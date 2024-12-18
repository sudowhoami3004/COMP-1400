/*
Write a C function that takes as input an integer number, n, and displays the sum of integer numbers from
1 to n-1. For example, n= 5, output: 10 (4+3+2+1)
*/

#include <stdio.h>

int SumOfIntegers(int number) {
    int sum = 0;
    for (int i = number - 1; i > 0; i--) {
        sum += i;
    }

    return sum;
}

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    int result = SumOfIntegers(number);

    printf("Sum of integers from 1 to %d is: %d", number, result);
}