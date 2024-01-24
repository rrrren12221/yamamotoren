#include<stdio.h>

#define MAX 10

int stack[MAX];
int top=-1;

void push(int x)
{
    if(top==MAX-1){
        printf("Stack overflow\n");
        return;
    }
    stack[++top]=x;
}

int pop(){
    if(top==-1){
        printf("stack underflow\n");
        return-1;
    }
    return stack[top--];
}


int main()
{
    char
}

