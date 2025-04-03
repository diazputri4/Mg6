#ifndef QUEUE_H
#define QUEUE_H

// Struktur data untuk Queue
typedef struct Queue {
    int *arr;         // Array untuk menyimpan elemen
    int front, rear;  // Indeks depan dan belakang antrian
    int capacity;     // Kapasitas maksimal antrian
} Queue;

// Fungsi untuk membuat antrian
Queue* createQueue(int capacity);

// Fungsi untuk memeriksa apakah antrian kosong
int isQueueEmpty(Queue* q);

// Fungsi untuk memeriksa apakah antrian penuh
int isQueueFull(Queue* q);

// Fungsi untuk menambahkan elemen ke antrian
void enqueue(Queue* q, int item);

// Fungsi untuk mengeluarkan elemen dari antrian
int dequeue(Queue* q);

// Fungsi untuk mendapatkan elemen di depan antrian
int front(Queue* q);

#endif
