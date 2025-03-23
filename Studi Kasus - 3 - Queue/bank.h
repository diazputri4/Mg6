#ifndef BANK_H
#define BANK_H

#include "queue.h"

// Fungsi untuk simulasi antrian di bank
void ambilAntrian(Queue *q, int *nomorSekarang);
void prosesAntrian(Queue *q);
void tampilkanAntrian(Queue *q);

#endif
