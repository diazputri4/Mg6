#include <stdio.h>
#include "stack.h"

int main() {
    Stack s;
    createStack(&s);
    int choice, value;

    do {
        printf("\nMenu:\n");
        printf("1. Push (Tambahkan data)\n");
        printf("2. Pop (Hapus data teratas)\n");
        printf("3. Cetak Stack\n");
        printf("4. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan nilai: ");
                scanf("%d", &value);
                push(&s, value);
                break;
            case 2:
                if (!isEmpty(s)) {
                    printf("Data %d dihapus dari stack.\n", pop(&s));
                } else {
                    printf("Stack kosong!\n");
                }
                break;
            case 3:
                printf("Isi Stack: ");
                printStack(s);
                break;
            case 4:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
    } while (choice != 4);

    return 0;
}
