#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%i", &num);

    if(num >= 20 && num <= 90) {
        printf("O número %i está compreendido entre 20 e 90.\n", num);
    } else {
        printf("O número %i não está compreendido entre 20 e 90.\n", num);
    }

    return 0;
}