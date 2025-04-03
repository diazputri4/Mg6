#include <stdio.h>
#include "queue.h"

int main() {
    Queue q;
    initQueue(&q);
    int choice, num;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Ambil Antrian\n");
        printf("2. Proses Antrian\n");
        printf("3. Cetak Antrian\n");
        printf("4. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Ambil antrian
                printf("Masukkan nomor antrian: ");
                scanf("%d", &num);
                enqueue(&q, num);
                printf("Antrian sekarang: ");
                printQueue(&q);
                break;
            case 2:
                // Proses antrian
                if (!isEmpty(&q)) {
                    num = dequeue(&q);
                    printf("Proses antrian nomor: %d\n", num);
                } else {
                    printf("Tidak ada antrian untuk diproses.\n");
                }
                break;
            case 3:
                // Cetak antrian
                printf("Antrian saat ini: ");
                printQueue(&q);
                break;
            case 4:
                printf("Program selesai.\n");
                return 0;
            default:
                printf("Pilihan tidak valid!\n");
        }
    }

    return 0;
}
