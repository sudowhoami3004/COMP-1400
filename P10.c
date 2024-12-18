/*
Write a C program that reads ten integer numbers from the user and stores them in an array of size 10. Then
counts and displays the sum of the odd numbers which are in the even index positions of the array
*/

#include <stdio.h>

int SumOfOdd(int numbers[], int arraySize) {
    int sum = 0;
    for (int i = 0; i < arraySize; i += 2) {
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }

    return sum;
}

int main(void) {
    int arraySize = 10;
    int numbers[arraySize];
    for (int i = 0; i < arraySize; i++) {
        printf("(%d) Enter an integer: ", i);
        scanf("%d", &numbers[i]);
    }

    int result = SumOfOdd(numbers, arraySize);
    printf("Sum of odd is: %d", result);
}