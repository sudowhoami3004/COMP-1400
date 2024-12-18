/*
    Write a C program that reads ten integer numbers from the user and stores them in an array of size 10. Then
    counts and displays the sum of the odd numbers which are in the even index positions of the array.
*/

#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter an integer value: ");
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < 10; i += 2) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    
    printf("Sum of odd numbers which are in the even index positions of the array is: %d\n", sum);
}