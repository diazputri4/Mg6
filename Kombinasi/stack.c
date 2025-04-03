#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Membuat stack dengan kapasitas tertentu
Stack* createStack(int capacity) {
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->capacity = capacity;
    s->arr = (int*)malloc(s->capacity * sizeof(int));
    s->top = -1;
    return s;
}

// Memeriksa apakah stack kosong
int isStackEmpty(Stack* s) {
    return (s->top == -1);
}

// Memeriksa apakah stack penuh
int isStackFull(Stack* s) {
    return (s->top == s->capacity - 1);
}

// Menambahkan elemen ke stack
void push(Stack* s, int item) {
    if (isStackFull(s)) {
        printf("Stack penuh!\n");
        return;
    }
    s->arr[++(s->top)] = item;
}

// Mengeluarkan elemen dari stack
int pop(Stack* s) {
    if (isStackEmpty(s)) {
        printf("Stack kosong!\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

// Mendapatkan elemen di atas stack
int peek(Stack* s) {
    if (isStackEmpty(s)) {
        return -1;
    }
    return s->arr[s->top];
}
