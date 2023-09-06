#include <stdio.h>

int main() {
    int num, i;
    printf("Digite um número: ");
    scanf("%i", &num);

    int quantidadePares = 0;
    for (i = 1; i <= num; i++) {
        if(i % 2 == 0) {
            printf("%i ", i);
            quantidadePares++;
        }
    }

    printf("\n Quantidade de números apresentados : %i\n", quantidadePares);

    return 0;
}