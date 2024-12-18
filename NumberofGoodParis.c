/*
    Write a function that receives an array of integers. The function should return the number of good pairs. A
    pair (i,j) is called good if nums[i] == nums[j] and i < j
*/

#include <stdio.h>

int NumOfGoodPairs(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    }
    
    return count;
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

    printf("Number of good pairs in the array is: %d\n", NumOfGoodPairs(arr, size));
}