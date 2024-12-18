/*
Write a program to read input values for an integer array of size 15 and display the second largest integer
value in the array
*/

#include <stdio.h>

int SecondLargest(int numbers[], int arraySize) {
    int largest = numbers[0];
    int secondLargest = numbers[0];
    for (int i = 1; i < arraySize; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }

    return secondLargest;
}

int main(void) {
    int arraySize = 15;
    int numbers[arraySize];
    for (int i = 0; i < 15; i++) {
        printf("(%d) Enter an integer: ", i);
        scanf("%d", &numbers[i]);
    }

    int result = SecondLargest(numbers, arraySize);
    printf("Second largest integer in the array is: %d", result);
}