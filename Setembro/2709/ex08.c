/*Escreva um programa que armazene 5 números em um vetor e apresente uma listagem contendo o índice do elemento e uma das mensagens: par ou ímpar*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[5];
    int i;

    printf("Digite 5 números: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++) {
        switch (vetor[i] % 2) {
            case 0:
                printf("%d - par\n", i);
                break;
            case 1:
                printf("%d - ímpar\n", i);
                break;
    }
  }

    return 0;
}