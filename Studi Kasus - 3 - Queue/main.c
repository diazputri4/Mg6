#include <stdio.h>
#include "bank.h"

int main() {
    Queue antrian;
    int pilihan, nomorSekarang = 0;

    initQueue(&antrian);

    do {
        // Menampilkan menu pilihan
        printf("\n=== Sistem Antrian Bank ===\n");
        printf("1. Ambil Antrian\n");
        printf("2. Proses Antrian\n");
        printf("3. Cetak Antrian\n");
        printf("4. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                ambilAntrian(&antrian, &nomorSekarang);
                break;
            case 2:
                prosesAntrian(&antrian);
                break;
            case 3:
                tampilkanAntrian(&antrian);
                break;
            case 4:
                printf("Terima kasih! Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 4);

    return 0;
}
