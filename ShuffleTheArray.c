/*
Write a function that receives an array consisting of 2n integer elements in the form
[x1,x2,...,xn,y1,y2,...,yn], and its size, and it updates the array in the form [x1,y1,x2,y2,...,xn,yn]
*/

#include <stdio.h>

void RearangeArray(int array[], int arraySize) {
    int newArray[arraySize];
    int j = 0;
    for (int i = 0; i < arraySize / 2; i++) {
        newArray[j++] = array[i];
        newArray[j++] = array[i + arraySize / 2];
    }

    for (int i = 0; i < arraySize; i++) {
        array[i] = newArray[i];
    }
}

void PrintArray(int array[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(void) {
    int arraySize;
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);
    int array[arraySize];
    for (int i = 0; i < arraySize; i++) {
        printf("(%d) Enter an integer: ", i);
        scanf("%d", &array[i]);
    }

    printf("Array before rearranging: ");
    PrintArray(array, arraySize);

    RearangeArray(array, arraySize);

    printf("Array after rearranging: ");
    PrintArray(array, arraySize);
}