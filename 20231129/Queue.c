#include <stdio.h>

#define MAX_SIZE 26

struct Queue {
    char items[MAX_SIZE];
    int front, rear, size;
};

void initialize(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
    queue->size = 0;
}


int isEmpty(struct Queue *queue) {
    return queue->size == 0;
}


int isFull(struct Queue *queue) {
    return queue->size == MAX_SIZE;
}


void enqueue(struct Queue *queue, char item) {
    if (isFull(queue)) {
        printf("Queue is full\n");
    } else {
        if (queue->front == -1) {
            queue->front = 0;
        }
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->items[queue->rear] = item;
        queue->size++;
        printf("Enqueue: %c\n", item);
        printf("Queue: ");
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%c ", queue->items[i]);
        }
        printf("\n");
    }
}


void dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
    } else {
        char dequeuedItem = queue->items[queue->front];
        queue->front = (queue->front + 1) % MAX_SIZE;
        queue->size--;
        printf("Dequeue: %c\n", dequeuedItem);
        printf("Queue: ");
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%c ", queue->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue queue;
    initialize(&queue);

    
    enqueue(&queue, 'A');
    enqueue(&queue, 'B');
    enqueue(&queue, 'C');
   // dequeue(&queue);
   // dequeue(&queue);
    enqueue(&queue, 'D');
    enqueue(&queue, 'E');
    enqueue(&queue, 'F');
    enqueue(&queue, 'G');
    enqueue(&queue, 'H');
    enqueue(&queue, 'I');
    enqueue(&queue, 'J');
    enqueue(&queue, 'K');
    enqueue(&queue, 'L');
    enqueue(&queue, 'M');
    enqueue(&queue, 'N');
    enqueue(&queue, 'O');
    enqueue(&queue, 'P');
    enqueue(&queue, 'Q');
    enqueue(&queue, 'R');
    enqueue(&queue, 'S');
    enqueue(&queue, 'T');
    enqueue(&queue, 'U');
    enqueue(&queue, 'V');
    enqueue(&queue, 'W');
    enqueue(&queue, 'X');
    enqueue(&queue, 'Y');
    enqueue(&queue, 'Z');
    dequeue(&queue);

    return 0;
}