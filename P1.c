/*
    Write a C function that takes as input an integer number, n, and displays the sum of integer numbers from
    1 to n-1. For example, n= 5, output: 10 (4+3+2+1
*/

#include <stdio.h>

void SumOfIntegers(int n) {
    int sum = 0;
    for (int i = n - 1; i > 0; i--) {
        sum += i;
    }
    printf("Sum of integers from 1 to %d is: %d\n", n, sum);
}

int main() {
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    SumOfIntegers(n);
}