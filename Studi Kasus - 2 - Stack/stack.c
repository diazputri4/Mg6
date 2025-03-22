#include <stdio.h>
#include "stack.h"

// Inisialisasi stack
void initStack(Stack *s) {
    s->top = -1;
}

// Cek apakah stack kosong
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Cek apakah stack penuh
int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Menambahkan elemen ke stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack penuh! Tidak dapat menambahkan elemen.\n");
        return;
    }
    s->data[++(s->top)] = value;
}

// Menghapus dan mengambil elemen dari stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong! Tidak dapat mengambil elemen.\n");
        return -1;
    }
    return s->data[(s->top)--];
}
