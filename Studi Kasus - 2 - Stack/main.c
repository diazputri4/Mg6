#include <stdio.h>
#include "conversion.h"

int main() {
    int decimal;

    // Input bilangan desimal dari pengguna
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Harap masukkan bilangan desimal positif.\n");
        return 1;
    }

    // Panggil fungsi konversi
    convertDecimalToBinary(decimal);

    return 0;
}
