/*
    Write a C function that takes as input an integer number, n, and displays all the positive factors of n
    (excluding n itself) and returns the sum of them. For example: n=12, Output = 1, 2, 3, 4, 6 return 16
*/

#include <stdio.h>

int SumOfFactors(int n) {
    int sum = 0;
    printf("Factors of %d are: ", n);
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);
    printf("\nSum of factors of %d is: %d\n", n, SumOfFactors(n));
}