#include<stdio.h>
#include <stdlib.h>

#define SIZE 8

// キューの定義
typedef struct {
    int front, rear, size;
    unsigned capacity;
    int* array;
} Queue;

// キューの作成
Queue* createQueue(unsigned capacity) {
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int*) malloc(queue->capacity * sizeof(int));
    return queue;
}

// キューが空かどうかを判定
int isEmpty(Queue* queue) {
    return (queue->size == 0);
}

// キューに要素を追加
void enqueue(Queue* queue, int item) {
    if (queue->size == queue->capacity) return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
}

// キューから要素を取り出し
int dequeue(Queue* queue) {
    if (isEmpty(queue)) return -1;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

// 幅優先探索
void BFS(int graph[SIZE][SIZE], int start) {
    int visited[SIZE];
    for (int i = 0; i < SIZE; i++) visited[i] = 0;

    Queue* queue = createQueue(SIZE);
    visited[start] = 1;
    enqueue(queue, start);

    while (!isEmpty(queue)) {
        int currentVertex = dequeue(queue);
        printf("Visited %d\n", currentVertex);

        for (int i = 0; i < SIZE; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                queue->array[queue->rear] = i;
                visited[i] = 1;
                enqueue(queue, i);
            }
        }
    }
}

int main() {
    int graph[SIZE][SIZE] = {
  {0, 1, 1, 0, 0, 0, 0, 1},  // A
  {1, 0, 1, 1, 0, 0, 0, 1},  // B
  {1, 1, 0, 0, 1, 0, 0, 0},  // C
  {0, 1, 0, 0, 1, 1, 0, 1},  // D
  {0, 0, 1, 1, 0, 0, 1, 1},  // E
  {0, 0, 0, 1, 0, 0, 0, 1},  // F
  {0, 0, 0, 0, 1, 0, 0, 0},  // G
  {0, 0, 1, 0, 1, 1, 1, 0},
    };

    BFS(graph, 0);  // 0から探索を開始

    return 0;
}