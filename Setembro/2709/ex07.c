/*Escreva um prorgrama que facilite a inicialização de um vetor de 10 números niteiros de modo que os elmentos de índices ímpares recebam o valor -2 e os elementos de índices pares recebam o valor 7. Apresente o vetor na tela*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int i;

    for (i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            vetor[i] = -2;
        } else {
            vetor[i] = 7;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}