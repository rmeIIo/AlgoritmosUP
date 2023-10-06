#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAM];
    int soma = 0;

    for(int i = 0; i < TAM; i++) {
        printf("Insira o %iº numero: ", i + 1);
        scanf("%d", &vetor[i]); 
        soma += vetor[i];
    }

    double media = (double)soma / TAM;

    printf("Valores iguais ou superiores à média: ");

    for(int i = 0; i < TAM; i++) {
        if(vetor[i] >= media) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
