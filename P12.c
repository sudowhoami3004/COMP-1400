/*
    Write a C program that reads an arbitrary number of integers that are in the range -50000 to 5000000 from
    the user and a), displays them in the ascending order, b) displays the biggest value, and c) displays the
    average of these numbers
*/

#include <stdio.h>

void Sort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[100], size = 0;
    while (1) {
        int num;
        printf("Enter an integer value: ");
        scanf("%d", &num);
        if (num < -50000 || num > 5000000) {
            break;
        }
        arr[size++] = num;
    }
    
    Sort(arr, size);
    printf("Numbers in ascending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nBiggest value is: %d\n", arr[size - 1]);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Average of these numbers is: %lf\n", (double)sum / size);
}