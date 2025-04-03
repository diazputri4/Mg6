#ifndef STACK_H
#define STACK_H

// Struktur data untuk Stack
typedef struct Stack {
    int *arr;         // Array untuk menyimpan elemen
    int top;          // Indeks elemen paling atas stack
    int capacity;     // Kapasitas maksimal stack
} Stack;

// Fungsi untuk membuat stack
Stack* createStack(int capacity);

// Fungsi untuk memeriksa apakah stack kosong
int isStackEmpty(Stack* s);

// Fungsi untuk memeriksa apakah stack penuh
int isStackFull(Stack* s);

// Fungsi untuk menambahkan elemen ke stack
void push(Stack* s, int item);

// Fungsi untuk mengeluarkan elemen dari stack
int pop(Stack* s);

// Fungsi untuk mendapatkan elemen paling atas stack
int peek(Stack* s);

#endif
