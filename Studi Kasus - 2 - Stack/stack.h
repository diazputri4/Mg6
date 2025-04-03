#ifndef STACK_H
#define STACK_H

// Struktur node untuk stack
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Struktur stack
typedef struct {
    Node* top;  // Pointer ke elemen atas stack
} Stack;

// Fungsi untuk inisialisasi stack
void initStack(Stack* stack);

// Fungsi untuk memeriksa apakah stack kosong
int isEmpty(Stack* stack);

// Fungsi untuk menambah elemen ke stack
void push(Stack* stack, int value);

// Fungsi untuk menghapus elemen dari stack
int pop(Stack* stack);

#endif
