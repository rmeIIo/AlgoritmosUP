#include <stdio.h>

float media(float vet[5]) {
    float resultado, soma = 0;

    for(int i = 0; i < 5; i++) {
        soma += vet[i];
    }

    resultado = soma / 5;

    return resultado;
}

int main() {
    float vetor[5] = {1, 2, 3, 4, 5};

    printf("A média dos elementos do vetor é: %.1f\n", media(vetor));

    return 0;
}