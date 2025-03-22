#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100  // Ukuran maksimum stack

// Struktur Stack
typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

// operasi stack
void initStack(Stack *s);
int isEmpty(Stack *s);
int isFull(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);

#endif
