#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    int divisor = 1;
    while (numero / divisor > 0) {
        int algarismo = (numero / divisor) % 10;
        printf("Algarismo: %d | Valor Absoluto: %d\n", algarismo, algarismo * divisor);
        divisor *= 10;
    }

    return 0;
}
