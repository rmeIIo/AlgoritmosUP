/*Escreva um programa que alimente um vetor A com 5 números inteiros. Em um vetor B, armazene o dobro de cada um dos números veotr A e apresente o vetor B na tela*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int A[5];
    int B[5];

    printf("Digite 5 números inteiros: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++) {
        B[i] = A[i] * 2;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", B[i]);
    }
    
    return 0;
}