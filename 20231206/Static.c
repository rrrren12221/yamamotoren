#include <stdio.h>
#include <stdlib.h>

#define ROW 8
#define COL 8

int arr[ROW][COL] = {0};
int visited[ROW][COL] = {0};

void dfs(int i, int j) {
    if (i < 0 || i >= ROW || j < 0 || j >= COL || visited[i][j]) {
        return;
    }
    visited[i][j] = 1;
    printf("%d ", arr[i][j]);
    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
}

int main() {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = rand() % 2;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("DFS traversal of the array: ");
    dfs(0, 0);
    return 0;
}
