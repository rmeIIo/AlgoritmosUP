#include <stdio.h>

int main() {
    int anterior, atual, auxiliar, i;

    anterior = 1;
    atual = 1;

    printf("%d %d ", anterior, atual);

    for(i = 3; i <= 10; i++) {
        auxiliar = atual;
        atual = atual + anterior;
        anterior = auxiliar;

        printf("%d ", atual);
    }

    printf("\n");

    return 0;
}   