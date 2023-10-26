/*Escreva um programa alimente um vetor de 5 números inteiros distintos. Em seguida, leia um número qualquer do teclado e mostre na tela o índice em que o número se encontra no vetor, ou então a mensagem "Nâo encontrado", se o número não estiver presente no vetor. */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int vetor[5] = {11, 20, 34, 47, 58}, num, i;
    bool encontrado;

    encontrado = false;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 0; i < 5; i++) {
        if (vetor[i] == num) {
            printf("O número %d está na posição %d\n", num, i);
            encontrado = true;
        }
    }

    if(encontrado == false) {
        printf("Número não encontrado\n");
    }

    return 0;
}