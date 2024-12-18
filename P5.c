/*
Write a function that takes an integer as input and returns the sum of all its digits
*/

#include <stdio.h>

int SumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main(void) {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    int result = SumOfDigits(number);
    printf("Sum of digits of %d is: %d", number, result);
}