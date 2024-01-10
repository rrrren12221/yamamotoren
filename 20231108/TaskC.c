#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int arr[10];
    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        arr[i] = rand();
    }
    for (i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    return 0;
}