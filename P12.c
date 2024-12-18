/*
Write a C program that reads an arbitrary number of integers that are in the range -50000 to 5000000 from
the user and a), displays them in the ascending order, b) displays the biggest value, and c) displays the
average of these numbers
*/

#include <stdio.h>

void AscendingOrder(int numbers[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        for (int j = i + 1; j < arraySize; j++) {
            if (numbers[i] > numbers[j]) {
                int temporary = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temporary;
            }
        }
    }

    printf("Numbers in ascending order: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

void Average(int numbers[], int arraySize) {
    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
        sum += numbers[i];
    }

    printf("Average of the numbers: %.2f\n", (float)sum / arraySize);
}

int main() {
    int arraySize;
    int numbers[arraySize];
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);
    printf("Enter integers in the range -50000 to 5000000:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("(%d) Enter an integer: ", i);
        scanf("%d", &numbers[i]);
    }

    AscendingOrder(numbers, arraySize);
    Average(numbers, arraySize);
}