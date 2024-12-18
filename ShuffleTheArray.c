/*
    Write a function that receives an array consisting of 2n integer elements in the form
    [x1,x2,...,xn,y1,y2,...,yn], and its size, and it updates the array in the form [x1,y1,x2,y2,...,xn,yn]
*/

#include <stdio.h>

void ShuffleTheArray(int arr[], int size) {
    int temp[size];
    for (int i = 0; i < size / 2; i++) {
        temp[2 * i] = arr[i];
        temp[2 * i + 1] = arr[size / 2 + i];
    }
    
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
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

    ShuffleTheArray(arr, size);
    printf("Shuffled array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}