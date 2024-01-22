#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ARRAY_SIZE 100

void generateRandomArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100; 
    }
}

int main()
{
    int data[ARRAY_SIZE];

    
    srand((unsigned int)time(NULL));
    generateRandomArray(data, ARRAY_SIZE);

    
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        for (int j = ARRAY_SIZE - 1; j >= i + 1; --j) {
            int valueA = data[i];
            int valueB = data[j];

            if (valueA > valueB) {
                int max = valueA;
                int min = valueB;

                // Swap
                data[i] = min;
                data[j] = max;
            }
        }
    }

    
    printf("Sorted Array:\n");
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}