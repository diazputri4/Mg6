#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void createStack(Stack *s) {
    s->top = NULL;
}

boolean isEmpty(Stack s) {
    return (s.top == NULL);
}

void push(Stack *s, int data) {
    address newNode = (address)malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->info = data;
        newNode->next = s->top;
        s->top = newNode;
    } else {
        printf("Gagal menambahkan elemen ke stack, memori penuh!\n");
    }
}

int pop(Stack *s) {
    if (!isEmpty(*s)) {
        address temp = s->top;
        int data = temp->info;
        s->top = s->top->next;
        free(temp);
        return data;
    }
    printf("Stack kosong, tidak bisa pop!\n");
    return -1;
}

void printStack(Stack s) {
    address current = s.top;
    if (current == NULL) {
        printf("Stack kosong!\n");
    } else {
        while (current != NULL) {
            printf("%d -> ", current->info);
            current = current->next;
        }
        printf("NULL\n");
    }
}
