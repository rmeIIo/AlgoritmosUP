#include <stdio.h>

int main() {
    int i;
    float numerador, denominador, soma;

    numerador = 1;
    denominador = 1;
    
    for(i = 1; i <=20; i++) {
        soma = soma + numerador / denominador;
        numerador += 2;
        denominador *=2;
    }

    printf("Resultado: %.2f\n", soma);

    return 0;
}