#include <stdio.h>
#include "queue.h"

int main() {
    Queue* q = createQueue(5);  // Membuat antrian dengan kapasitas 5

    // Menambahkan elemen ke antrian
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    // Menampilkan elemen di depan antrian
    printf("Elemen di depan antrian: %d\n", front(q));

    // Mengeluarkan elemen dari antrian
    printf("Mengeluarkan elemen: %d\n", dequeue(q));

    // Menampilkan elemen di depan antrian setelah dequeue
    printf("Elemen di depan antrian setelah dequeue: %d\n", front(q));

    // Mengeluarkan semua elemen dari antrian
    dequeue(q);
    dequeue(q);

    // Cek apakah antrian kosong
    if (isQueueEmpty(q)) {
        printf("Antrian kosong!\n");
    } else {
        printf("Antrian tidak kosong!\n");
    }

    return 0;
}
