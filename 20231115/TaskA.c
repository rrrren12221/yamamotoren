#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 11 

void shuffleArray(int arr[], int size) {
    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    int data[ARRAY_SIZE];
    int result = -1;
    int target = 5;

    
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        data[i] = i;
    }

    
    srand((unsigned int)time(NULL));
    shuffleArray(data, ARRAY_SIZE);

    
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        if (data[i] == target) {
            result = i;
            printf(" result = %d\n", result);
            break;
        }
    }
                                                                                                                                                                                                                                                                                                                                                                                        

    return 0;
}