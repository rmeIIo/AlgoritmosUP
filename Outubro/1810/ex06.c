#include <stdio.h>

int maior (int n1, int n2) {
    if(n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

int main() {
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite um segundo número: ");
    scanf("%d", &num2);

    printf("O maior número é: %d\n", maior(num1, num2));

    return 0;
}