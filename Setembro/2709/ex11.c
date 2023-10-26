/*Escreva um programa que preencha um vetor com 5 elementos inteiros. Após o término do preenchimento, trocar todos os valores negativos do vetor por 0 e apresentar o vetor atualizado na tela.*/

#include <stdio.h>

int main() {
    int vetor[5], i;

    for (i = 0; i < 5; i++) {
        printf("Informe elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i + 1, vetor[i]);
    }

    return 0;
}