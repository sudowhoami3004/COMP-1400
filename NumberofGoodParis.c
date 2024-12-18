/*
Write a function that receives an array of integers. The function should return the number of good pairs. A
pair (i,j) is called good if nums[i] == nums[j] and i < j
*/

#include <stdio.h>

int GoodPairs(int numbers[], int arraySize) {
    int count = 0;
    for (int i = 0; i < arraySize; i++) {
        for (int j = i + 1; j < arraySize; j++) {
            if (numbers[i] == numbers[j]) {
                count++;
            }
        }
    }

    return count;
}

int main(void) {
    int arraySize;
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);
    int numbers[arraySize];
    for (int i = 0; i < arraySize; i++) {
        printf("(%d) Enter an integer: ", i);
        scanf("%d", &numbers[i]);
    }

    int result = GoodPairs(numbers, arraySize);
    printf("Number of good pairs: %d", result);
}