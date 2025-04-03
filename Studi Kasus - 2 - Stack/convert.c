#include <stdio.h>
#include "convert.h"
#include "stack.h"

// Fungsi untuk mengonversi desimal ke biner
void decimalToBinary(int n) {
    Stack stack;
    initStack(&stack);

    if (n == 0) {
        printf("0");
        return;
    }

    // Proses konversi desimal ke biner
    while (n > 0) {
        push(&stack, n % 2);
        n = n / 2;
    }

    // Menampilkan hasil biner dari stack
    while (!isEmpty(&stack)) {
        printf("%d", pop(&stack));
    }
}
