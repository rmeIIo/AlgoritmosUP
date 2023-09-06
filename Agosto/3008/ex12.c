#include <stdio.h>

int main() {
    int i;
    float numerador, denominador, soma;

    numerador = 1;
    denominador = 100;
    soma = 0;

    for(i = 1; i <= 100; i++) {
        soma = soma + numerador / denominador;
        numerador++;
        denominador--;
    }

    printf("Resultado: %.2f\n", soma);

    return 0;
}