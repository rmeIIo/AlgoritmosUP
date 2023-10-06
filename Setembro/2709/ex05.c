/*Escreva um programa que alimente um vetor com 5 números. Apresente na tela o menor valor do vetor, o maior valor do vetor, a soma dos valores do vetor e a média dos valores do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

int main() {
    setlocale(LC_ALL, "portuguese");

    int vetor[TAM];
    int menor, maior, soma, media;
    int i;
    
    for (i = 0; i < TAM; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];
    maior = vetor[0];
    soma = 0;
    media = 0;

    for (i = 0; i < TAM; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }

        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        
        soma += vetor[i];
        media += vetor[i];

    }
    
    media = soma / TAM;
    
    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Soma: %d\n", soma);
    printf("Média: %d\n", media);

    return 0;
}