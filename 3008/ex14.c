#include <stdio.h>

int main() {
    float numerador, denominador, soma;
    int i;

    numerador = 1000;
    denominador = 1;

    for(i = 1; i <=50; i++) {
        if(i % 2 != 0) {
            soma = soma + numerador / denominador;
        } else {
            soma = soma - numerador / denominador;
        }
        
        numerador -= 3;
        denominador += 1;
    }

    printf("A soma é %.2f\n", soma);

    return 0;
}