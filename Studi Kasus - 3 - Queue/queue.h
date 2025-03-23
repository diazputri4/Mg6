#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

// Struktur untuk node antrian
typedef struct Node {
    int nomorAntrian;
    struct Node *next;
} Node;

// Struktur untuk queue
typedef struct {
    Node *front;
    Node *rear;
} Queue;

// Fungsi untuk operasi queue
void initQueue(Queue *q);
int isEmpty(Queue *q);
void enqueue(Queue *q, int nomor);
int dequeue(Queue *q);
void printQueue(Queue *q);

#endif
