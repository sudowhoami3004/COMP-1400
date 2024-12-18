/*
    Write a program to read input values for an integer array of size 15 and display the second largest integer
    value in the array
*/

#include <stdio.h>

int main() {
    int arr[15];
    for (int i = 0; i < 15; i++) {
        printf("Enter an integer value: ");
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0];
    int secondLargest = arr[0];
    for (int i = 1; i < 15; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    printf("Second largest integer value in the array is: %d\n", secondLargest);
}