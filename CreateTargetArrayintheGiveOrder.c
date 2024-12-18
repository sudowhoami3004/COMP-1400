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

void CreateTargetArray(int nums[], int index[], int size, int target[]) {
    for (int i = 0; i < size; i++) {
        for (int j = size - 1; j > index[i]; j--) {
            target[j] = target[j - 1];
        }
        target[index[i]] = nums[i];
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int nums[size], index[size];
    printf("Enter %d integers for the nums array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter %d integers for the index array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &index[i]);
    }

    int target[size];
    CreateTargetArray(nums, index, size, target);
    printf("Target array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", target[i]);
    }
    printf("\n");
}