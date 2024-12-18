/*
    Write a function that receives two arrays of integers nums and index. The function should create a target
    array and print out its elements under the following rules:
        1. Initially target array is empty.
        2. From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
        3. Repeat the previous step until there are no elements to read in nums and index.
        4. eturn the target array

    Example:
    Input: nums = [0, 1, 2, 3, 4], index = [0, 1, 2, 2, 1]
    Output: [0, 4, 1, 3, 2]
    
    Explanation:
    nums: 0 1 2 3 4
    index: 0 1 2 2 1
    target: [0] [0, 1] [0, 1, 2] [0, 1, 3, 2] [0, 4, 1, 3, 2]
*/

#include <stdio.h>

void CreateTargetArray(int nums[], int index[], int size) {
    int target[100]; // Assuming a maximum size of 100 for simplicity
    int i, j;

    // Keep track of the current length of the target array
    int currentLength = 0;

    for (i = 0; i < size; i++) {
        // If the insertion index is less than the current length, shift elements to the right
        if (index[i] < currentLength) {
            for (j = currentLength; j > index[i]; j--) {
                target[j] = target[j - 1];
            }
        }
        // Insert the current number at the specified index
        target[index[i]] = nums[i];
        currentLength++;
    }

    // Print the target array
    printf("Target array: [");
    for (i = 0; i < size; i++) {
        printf("%d", target[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int nums[100]; // Assuming a maximum size of 100 for simplicity
    int index[100];

    printf("Enter elements of nums array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter elements of index array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &index[i]);
    }

    CreateTargetArray(nums, index, size);
}