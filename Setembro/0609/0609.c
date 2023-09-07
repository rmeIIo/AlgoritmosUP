#include <stdio.h>

int main() {
    int inicio, fim, mult;

    while(1) {
        printf("Digite um número inicial: ");
        scanf("%i", &inicio);

        printf("Digite o intervalo: ");
        scanf("%i", &fim);

        if(inicio <= fim) {
            break;
        } else {
            printf("ERRO! Entradas inválidas! Tente novamente...\n");
        }
    }
    
    printf("Digite o múltiplo desejado: ");
    scanf("%i", &mult);
    if(mult > 0) {
        
    } else {
        printf("ERRO! Entradas inválidas! Tente novamente...\n");
    }

    for(int count = inicio; count <= fim; count++) {
        if(count % mult == 0) {
            printf("%i\n", count);
        }
    }
}