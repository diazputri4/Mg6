#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Inisialisasi stack (stack kosong)
void initStack(Stack* stack) {
    stack->top = NULL;
}

// Memeriksa apakah stack kosong
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// Menambahkan elemen ke stack
void push(Stack* stack, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Menghapus elemen dari stack
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");
        exit(1);
    }
    Node* temp = stack->top;
    int value = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return value;
}
