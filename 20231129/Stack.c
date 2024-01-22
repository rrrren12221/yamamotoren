#include <stdio.h>
#define MAX_SIZE 26

struct Stack {
    char items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, char item) {
    if (isFull(stack)) {
        printf("stack is full\n");
    } else {
        stack->items[++stack->top] = item;
        printf("Push: %c\n", item);
        printf("stack: ");
        for (int i = 0; i <= stack->top; i++) {
            printf("%c ", stack->items[i]);
        }
        printf("\n");
    }
}

void pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("stack is enmpty\n");
    } else {
        char poppedItem = stack->items[stack->top--];
        printf("Pop: %c\n", poppedItem);
        printf("stack: ");
        for (int i = 0; i <= stack->top; i++) {
            printf("%c ", stack->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 'A');
    push(&stack, 'B');
    push(&stack, 'C');
  //  pop(&stack);
  //  pop(&stack);
    push(&stack, 'D');
    push(&stack, 'E');
    push(&stack, 'F');
    push(&stack, 'G');
    push(&stack, 'H');
    push(&stack, 'I');
    push(&stack, 'J');
    push(&stack, 'K');
    push(&stack, 'L');
    push(&stack, 'M');
    push(&stack, 'N');
    push(&stack, 'O');
    push(&stack, 'P');
    push(&stack, 'Q');
    push(&stack, 'R');
    push(&stack, 'S');
    push(&stack, 'T');
    push(&stack, 'U');
    push(&stack, 'V');
    push(&stack, 'W');
    push(&stack, 'X');
    push(&stack, 'Y');
    push(&stack, 'Z');
    pop(&stack);

    return 0;
}