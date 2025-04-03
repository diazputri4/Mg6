#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// Membuat antrian dengan kapasitas tertentu
Queue* createQueue(int capacity) {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->capacity = capacity;
    q->arr = (int*)malloc(q->capacity * sizeof(int));
    q->front = q->rear = -1;
    return q;
}

// Memeriksa apakah antrian kosong
int isQueueEmpty(Queue* q) {
    return (q->front == -1);
}

// Memeriksa apakah antrian penuh
int isQueueFull(Queue* q) {
    return (q->rear == q->capacity - 1);
}

// Menambahkan elemen ke antrian
void enqueue(Queue* q, int item) {
    if (isQueueFull(q)) {
        printf("Antrian penuh!\n");
        return;
    }
    if (q->front == -1) q->front = 0;  // Jika antrian kosong, set front ke 0
    q->arr[++(q->rear)] = item;
}

// Mengeluarkan elemen dari antrian
int dequeue(Queue* q) {
    if (isQueueEmpty(q)) {
        printf("Antrian kosong!\n");
        return -1;
    }
    int item = q->arr[q->front];
    if (q->front == q->rear) {  // Antrian kosong setelah dequeue
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    return item;
}

// Mendapatkan elemen di depan antrian
int front(Queue* q) {
    if (isQueueEmpty(q)) {
        return -1;
    }
    return q->arr[q->front];
}
