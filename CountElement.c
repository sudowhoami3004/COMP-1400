/*
Write a function that receives an array of integers, and its size. The function should print out each unique
element and its frequency to the screen
*/

#include <stdio.h>

void FrequencyOfElements(int numbers[], int arraySize) {
    printf("Elements----------Frequency\n");
    for (int i = 0; i < arraySize; i++) {
        if (numbers[i] == -1) continue;
        
        int frequency = 1;
        for (int j = i + 1; j < arraySize; j++) {
            if (numbers[i] == numbers[j]) {
                frequency++;
                numbers[j] = -1;
            }
        }
        printf("%d-----------------%d\n", numbers[i], frequency);
    }
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

    FrequencyOfElements(numbers, arraySize);
}