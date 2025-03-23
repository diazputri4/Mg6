#include <stdio.h>
#include "queue.h"
#include "stack_sll.h"

int main() {
    Queue antrian;
    Stack pesananSelesai;
    Histori historiPesanan;
    int pilihan, idPesanan = 0;
    char namaPesanan[50];

    initQueue(&antrian);
    initStack(&pesananSelesai);
    initHistori(&historiPesanan);

    do {
        printf("\n=== Sistem GrabFood ===\n");
        printf("1. Tambah Pesanan\n");
        printf("2. Proses Pesanan\n");
        printf("3. Lihat Antrian\n");
        printf("4. Lihat Pesanan Selesai\n");
        printf("5. Lihat Histori Pesanan\n");
        printf("6. Undo Pesanan Terakhir\n");
        printf("7. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        getchar();

        switch (pilihan) {
            case 1:
                idPesanan++;
                printf("Masukkan nama pesanan: ");
                fgets(namaPesanan, 50, stdin);
                namaPesanan[strcspn(namaPesanan, "\n")] = '\0';
                enqueue(&antrian, idPesanan, namaPesanan);
                break;
            case 2:
                if (!isQueueEmpty(&antrian)) {
                    push(&pesananSelesai, antrian.front->id, antrian.front->namaPesanan);
                    addHistori(&historiPesanan, antrian.front->id, antrian.front->namaPesanan);
                    dequeue(&antrian);
                }
                break;
            case 3:
                printQueue(&antrian);
                break;
            case 4:
                printStack(&pesananSelesai);
                break;
            case 5:
                printHistori(&historiPesanan);
                break;
            case 6:
                pop(&pesananSelesai);
                break;
            case 7:
                printf("Terima kasih telah menggunakan GrabFood!\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
    } while (pilihan != 7);

    return 0;
}
