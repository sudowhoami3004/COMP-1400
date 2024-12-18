/*
Write a C function that takes as input an integer number, n, and displays all the positive factors of n
(excluding n itself) and returns the sum of them. For example: n=12, Output = 1, 2, 3, 4, 6 return 16
*/

#include <stdio.h>

int SumOfFactors(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main(void) {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    int result = SumOfFactors(number);

    printf("Sum of factors of %d is: %d", number, result);
}