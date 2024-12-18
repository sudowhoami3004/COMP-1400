/*
    Write a function that receives an array of integers, and its size. The function should print out each unique
    element and its frequency to the screen.
*/

#include <stdio.h>

void FrequencyOfElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        
        if (arr[i] != -1) {
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d integers for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    FrequencyOfElements(arr, size);
}