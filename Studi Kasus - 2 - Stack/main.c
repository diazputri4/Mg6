#include <stdio.h>
#include "convert.h"

int main() {
    int num;

    // Input bilangan desimal
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &num);

    // Menampilkan hasil konversi ke biner
    printf("Bilangan biner: ");
    decimalToBinary(num);

    return 0;
}
