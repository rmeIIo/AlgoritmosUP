#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite um número: ");
    scanf("%i", &num1);

    printf("Digite um segundo número: ");
    scanf("%i", &num2);

    if(num1 < num2) {
        printf("A ordem dos números apresentados é: %i, %i\n", num1, num2);
    } else {
        printf("A ordem dos números apresentados é: %i, %i\n", num2, num1);
    }

    return 0;
}