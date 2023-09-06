#include <stdio.h>

int main() {
    int num, soma;

    soma = 0;

    printf("Digite um número: ");
    scanf("%i", &num);

    while(num != 0) {
        soma += num;
        printf("Digite um número: ");
        scanf("%i", &num);
    }

    printf("Resultado: %i\n", soma);

    return 0;
}