#include <stdio.h>

int main() {
    int fatorial, num, i;

    fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    for(i = 2; i <=num; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %d\n", num, fatorial);

    return 0;
}