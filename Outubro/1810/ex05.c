#include <stdio.h>

int soma (int n1, int n2) {
    int soma, i;

    soma = 0;

    for(i = n1; i <= n2; i++) {
        soma = soma + i;
    }

    return soma;
}

int main() {
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite um segundo número: ");
    scanf("%d", &num2);

    if(num1 < num2) {
        printf("A soma é: %d\n", soma(num1, num2));
    } else {
        printf("A soma é: %d\n", soma(num2, num1));
    }

    return 0;
}