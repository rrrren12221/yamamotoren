#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

int main() {
    int i, array[ARRAY_SIZE];
    srand(time(NULL));
    for (i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand();
        printf("%d ", array[i]);
    }
    return 0;
}