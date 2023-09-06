#include <stdio.h>

int main() {
    int copias;

    printf("Digite o número de cópias a serem impressas: ");
    scanf("%i", &copias);

    float valor100 = copias * 0.25;
    float valor101 = copias * 0.2;

    if(copias <= 100) {
        printf("O custo de %i cópias é de R$%.2f.\n", copias, valor100);
    } else {
        printf("O custo de %i cópias é de R$%.2f.\n", copias, valor101);
    }

    return 0;
}