#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main(void) {

    srand(time(NULL));

    int data[10];

    for (int i = 0; i <= 10; i++) {
        data[i] = rand() % 100; 
    }


    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
        printf("data[%d]=%d\n", i, data[i]);
    }

    return 0;
}
