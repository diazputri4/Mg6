#ifndef QUEUE_H
#define QUEUE_H

typedef struct Node {
    int id;
    char namaPesanan[50];
    struct Node *next;
} Node;

typedef struct {
    Node *front;
    Node *rear;
} Queue;

void initQueue(Queue *q);
void enqueue(Queue *q, int id, char *namaPesanan);
void dequeue(Queue *q);
void printQueue(Queue *q);
int isQueueEmpty(Queue *q);

#endif