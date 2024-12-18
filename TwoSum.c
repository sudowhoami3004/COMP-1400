/*
Write a function that receives an array of integers, its size, an integer target and an empty array of two
integers. The function should update the empty array with indices of the two numbers in the first array
such that they add up to target. You may assume that each input would have exactly one solution, and you
may not use the same element twice. You can return the answer in any order
*/

#include <stdio.h>
#include <stdlib.h>

void TwoSum(int numbers[], int arraySize, int target, int result[]) {
    int hashMap[100000] = {0};
    int offset = 5000;
    for (int i = 0; i < arraySize; i++) {
        int complement = target - numbers[i];
        if (hashMap[complement + offset] != 0) {
            result[0] = hashMap[complement + offset] - 1;
            result[1] = i;
            return;
        }
        hashMap[numbers[i] + offset] = i + 1;
    }
}

int main(void) {
    int arraySize;
    int numbers[arraySize];
    int target;
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);
    for (int i = 0; i < arraySize; i++) {
        printf("(%d) Enter an integer: ", i);
        scanf("%d", &numbers[i]);
    }
    printf("Enter the target: ");
    scanf("%d", &target);

    int result[2] = {0};
    TwoSum(numbers, arraySize, target, result);
    printf("Indices of the two numbers that add up to target are: %d, %d", result[0], result[1]);
}