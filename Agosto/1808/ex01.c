#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite um número: ");
    scanf("%i", &num1);

    printf("Digite um segundo número: ");
    scanf("%i", &num2);

    int soma = num1 + num2;

    if(soma < 20) {
        soma += 8;
        printf("O resultado de %i + %i + 8 é de: %i\n", num1, num2, soma);
    } else {
        soma -= 5;
        printf("O resultado de %i + %i - 5 é de: %i\n", num1, num2, soma);
    }

    return 0;
}