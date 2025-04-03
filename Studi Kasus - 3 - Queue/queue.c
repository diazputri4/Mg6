#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// Inisialisasi queue
void initQueue(Queue* q) {
    q->front = q->rear = NULL;
}

// Memeriksa apakah queue kosong
int isEmpty(Queue* q) {
    return q->front == NULL;
}

// Menambahkan elemen ke queue
void enqueue(Queue* q, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    
    if (isEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

// Menghapus elemen dari queue
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        exit(1);
    }
    
    Node* temp = q->front;
    int value = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
    return value;
}

// Menampilkan seluruh isi queue
void printQueue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    Node* temp = q->front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
