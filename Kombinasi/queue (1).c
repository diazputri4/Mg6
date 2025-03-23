#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Inisialisasi Queue
void initQueue(Queue *q) {
    q->front = q->rear = NULL;
}

// Mengecek apakah Queue kosong
int isQueueEmpty(Queue *q) {
    return q->front == NULL;
}

// Menambahkan pesanan ke antrian (enqueue)
void enqueue(Queue *q, int id, char *namaPesanan) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Gagal menambahkan pesanan! Memori penuh.\n");
        return;
    }
    newNode->id = id;
    strcpy(newNode->namaPesanan, namaPesanan);
    newNode->next = NULL;

    if (isQueueEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

// Menghapus pesanan dari antrian (dequeue)
void dequeue(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Antrian kosong!\n");
        return;
    }

    Node *temp = q->front;
    printf("Pesanan %d - %s sedang diproses...\n", temp->id, temp->namaPesanan);

    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
}

// Menampilkan daftar pesanan dalam antrian
void printQueue(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Antrian kosong.\n");
        return;
    }
    Node *temp = q->front;
    printf("Pesanan dalam antrian:\n");
    while (temp != NULL) {
        printf("- ID %d: %s\n", temp->id, temp->namaPesanan);
        temp = temp->next;
    }
}
