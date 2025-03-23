#include "stack_sll.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Inisialisasi Stack
void initStack(Stack *s) {
    s->top = NULL;
}

// Mengecek apakah Stack kosong
int isStackEmpty(Stack *s) {
    return s->top == NULL;
}

// Menambahkan pesanan ke Stack (push)
void push(Stack *s, int id, char *namaPesanan) {
    StackNode *newNode = (StackNode*)malloc(sizeof(StackNode));
    if (newNode == NULL) {
        printf("Gagal menyelesaikan pesanan! Memori penuh.\n");
        return;
    }
    newNode->id = id;
    strcpy(newNode->namaPesanan, namaPesanan);
    newNode->next = s->top;
    s->top = newNode;
}

// Menghapus pesanan terakhir dari Stack (pop)
void pop(Stack *s) {
    if (isStackEmpty(s)) {
        printf("Tidak ada pesanan untuk di-undo!\n");
        return;
    }
    StackNode *temp = s->top;
    printf("Pesanan %d - %s di-undo.\n", temp->id, temp->namaPesanan);
    s->top = s->top->next;
    free(temp);
}

// Menampilkan pesanan yang telah selesai
void printStack(Stack *s) {
    if (isStackEmpty(s)) {
        printf("Belum ada pesanan selesai.\n");
        return;
    }
    StackNode *temp = s->top;
    printf("Pesanan yang telah selesai:\n");
    while (temp != NULL) {
        printf("- ID %d: %s\n", temp->id, temp->namaPesanan);
        temp = temp->next;
    }
}

// Inisialisasi Histori Pesanan
void initHistori(Histori *h) {
    h->head = NULL;
}

// Menambahkan pesanan ke histori
void addHistori(Histori *h, int id, char *namaPesanan) {
    HistoriNode *newNode = (HistoriNode*)malloc(sizeof(HistoriNode));
    if (newNode == NULL) {
        printf("Gagal menambahkan ke histori! Memori penuh.\n");
        return;
    }
    newNode->id = id;
    strcpy(newNode->namaPesanan, namaPesanan);
    newNode->next = h->head;
    h->head = newNode;
}

// Menampilkan histori semua pesanan
void printHistori(Histori *h) {
    if (h->head == NULL) {
        printf("Histori pesanan kosong.\n");
        return;
    }
    HistoriNode *temp = h->head;
    printf("Histori semua pesanan:\n");
    while (temp != NULL) {
        printf("- ID %d: %s\n", temp->id, temp->namaPesanan);
        temp = temp->next;
    }
}
