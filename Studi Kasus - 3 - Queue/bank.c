#include "bank.h"

// Fungsi untuk mengambil nomor antrian baru
void ambilAntrian(Queue *q, int *nomorSekarang) {
    (*nomorSekarang)++; // Nomor antrian bertambah
    enqueue(q, *nomorSekarang);
    printf("Nomor antrian %d berhasil diambil.\n", *nomorSekarang);
    printQueue(q);
}

// Fungsi untuk memproses antrian (menghapus antrian pertama)
void prosesAntrian(Queue *q) {
    int nomor = dequeue(q);
    if (nomor != -1) {
        printf("Nomor antrian %d sedang diproses.\n", nomor);
    }
    printQueue(q);
}

// Fungsi untuk menampilkan antrian saat ini
void tampilkanAntrian(Queue *q) {
    printQueue(q);
}
