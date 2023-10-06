/*Escreva um programa que calcule o produto escalar entre dois vetores de inteiros de tamanho igual a 5. Exemplo: {0, 2, 4, 6, 8} X {1, 3, 5, 7, 9} = 0 * 1 + 2 * 3 + 4 * 5 + 6 * 7 + 8 * 9 = 140*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

int main()
{
    setlocale(LC_ALL, "pt_BR");

    int vetor1[TAM], vetor2[TAM];

    printf("Digite %d números inteiros para o primeiro vetor: ", TAM);

    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite %d números inteiros para o segundo vetor: ", TAM);


    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor2[i]);
    }

    int soma = 0;

    for (int i = 0; i < TAM; i++)
    {
        soma += vetor1[i] * vetor2[i];
    }

    printf("O produto escalar entre esses dois vetores é: %d", soma);

    return 0;
}