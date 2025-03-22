#include <stdio.h>
#include "conversion.h"

// Fungsi untuk mengonversi bilangan desimal ke biner
void convertDecimalToBinary(int decimal) {
    Stack s;
    initStack(&s);

    // simpan sisa hasil bagi ke stack
    while (decimal > 0) {
        push(&s, decimal % 2);
        decimal /= 2;
    }

    printf("Bilangan biner: ");
    while (!isEmpty(&s)) {
        printf("%d", pop(&s));
    }
    printf("\n");
}
