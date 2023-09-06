#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Digite um número: ");
    scanf("%i", &num1);

    printf("Digite um segundo número: ");
    scanf("%i", &num2);

    printf("Digite um terceiro número: ");
    scanf("%i", &num3);

    if(num1 < num2 && num1 < num3) {
        printf("O menor número entre os três valores é %i.\n", num1);
    } else if (num2 < num1 && num2 < num3) {
        printf("O menor número entre os três valores é %i.\n", num2);
    } else {
        printf("O menor número entre os três valores é %i.\n", num3);
    }

    return 0;
}
