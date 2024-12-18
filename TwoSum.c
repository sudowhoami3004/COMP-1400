#include <stdio.h>

void TwoSum(int arr[], int size, int target, int result[]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d integers for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target sum: ");
    scanf("%d", &target);

    int result[2];
    TwoSum(arr, size, target, result);
    printf("Indices of the two numbers in the array that add up to target are: %d %d\n", result[0], result[1]);
}