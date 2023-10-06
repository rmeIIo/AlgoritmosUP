#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int vetor[5];

    printf("Digite 5 números inteiros: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Valores ímpares do vetor: ");

    for (int i = 0; i < 5; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}