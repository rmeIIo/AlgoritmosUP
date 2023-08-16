#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite um número: ");
    scanf("%i", &a);

    printf("Digite um segundo número: ");
    scanf("%i", &b);

    c = a;
    a = b;

    printf("Os números digitados em ordem trocada são: %i, %i.\n", a, c);

    return 0;
}