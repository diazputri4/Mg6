#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"  // Menyertakan file node.h untuk menggunakan Node

// Struktur Queue
typedef struct {
    Node* front;  // Elemen pertama dalam antrian
    Node* rear;   // Elemen terakhir dalam antrian
} Queue;

// Fungsi untuk inisialisasi queue
void initQueue(Queue* q);

// Fungsi untuk memeriksa apakah queue kosong
int isEmpty(Queue* q);

// Fungsi untuk menambahkan elemen ke queue
void enqueue(Queue* q, int value);

// Fungsi untuk menghapus elemen dari queue
int dequeue(Queue* q);

// Fungsi untuk menampilkan seluruh isi queue
void printQueue(Queue* q);

#endif
