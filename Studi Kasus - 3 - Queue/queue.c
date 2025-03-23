#include "queue.h"

// Inisialisasi queue kosong
void initQueue(Queue *q) {
    q->front = q->rear = NULL;
}

// Cek apakah queue kosong
int isEmpty(Queue *q) {
    return q->front == NULL;
}

// Menambahkan elemen ke queue (enqueue)
void enqueue(Queue *q, int nomor) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Gagal menambahkan antrian! Memori penuh.\n");
        return;
    }
    newNode->nomorAntrian = nomor;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

// Menghapus elemen dari queue (dequeue)
int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Antrian kosong! Tidak ada yang dapat diproses.\n");
        return -1;
    }

    Node *temp = q->front;
    int nomor = temp->nomorAntrian;

    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
    return nomor;
}

// Menampilkan antrian
void printQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("Antrian kosong.\n");
        return;
    }

    Node *temp = q->front;
    printf("Daftar antrian: ");
    while (temp != NULL) {
        printf("%d ", temp->nomorAntrian);
        temp = temp->next;
    }
    printf("\n");
}
