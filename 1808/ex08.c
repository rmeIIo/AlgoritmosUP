#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%i", &num);

    if(num >= 0) {
        if(num % 2 == 0) {
            printf("O número %i é par.\n", num);
        } else {
            printf("O número %i é ímpar.\n", num);
        }
    } else {
        num = -num;
        printf("O número digitado possui um valor negativo e seu valor absoluto é: %i.\n", num);
    }

    return 0;
}