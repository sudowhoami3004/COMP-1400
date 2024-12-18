/*
    Write a function that takes an integer as input and returns the sum of all its digits
*/

#include <stdio.h>

int SumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    
    return sum;
}

int main() {
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d is: %d\n", n, SumOfDigits(n));
}