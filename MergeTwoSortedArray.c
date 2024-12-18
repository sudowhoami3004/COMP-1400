/*
Write a function that receives two sorted array of integers, and their sizes. The function should create a
new sorted array including all the elements of the two array parameters
*/

#include <stdio.h>

int MergeTwoSortedArray(int array1[], int arraySize1, int array2[], int arraySize2, int newArray[]) {
    int i = 0, j = 0, k = 0;
    while (i < arraySize1 && j < arraySize2) {
        if (array1[i] < array2[j]) {
            newArray[k++] = array1[i++];
        } else {
            newArray[k++] = array2[j++];
        }
    }

    while (i < arraySize1) {
        newArray[k++] = array1[i++];
    }

    while (j < arraySize2) {
        newArray[k++] = array2[j++];
    }

    return k;
}

int main(void) {
    int arraySize1, arraySize2, newArraySize;
    printf("Enter the size of the first array: ");
    scanf("%d", &arraySize1);
    int array1[arraySize1];
    for (int i = 0; i < arraySize1; i++) {
        printf("(%d) Enter an integer: ", i);
        scanf("%d", &array1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &arraySize2);
    int array2[arraySize2];
    int newArray[arraySize1 + arraySize2];
    for (int i = 0; i < arraySize2; i++) {
        printf("(%d) Enter an integer: ", i);
        scanf("%d", &array2[i]);
    }

    newArraySize = MergeTwoSortedArray(array1, arraySize1, array2, arraySize2, newArray);
    printf("New sorted array is: ");
    for (int i = 0; i < newArraySize; i++) {
        printf("%d ", newArray[i]);
    }
}