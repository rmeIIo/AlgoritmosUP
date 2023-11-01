#include <stdio.h>

int maior (int n1, int n2, int n3) {
    int maior;

    maior = n1;

    if(n2 > maior) {
        maior = n2;
    }

    if(n3 > maior) {
        maior = n3;
    }

    return maior;
}

int main() {
    int num1, num2, num3;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite um segundo número: ");
    scanf("%d", &num2);

    printf("Digite um terceiro número: ");
    scanf("%d", &num3);

    printf("O maior número é: %d\n", maior(num1, num2, num3));

    return 0;
}