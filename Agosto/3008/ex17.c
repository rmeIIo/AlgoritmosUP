#include <stdio.h>
int main() {
    float num, menor, maior, amplitude;

    printf("Digite um número: ");
    scanf("%f", &num);

    menor = num;
    maior = num;

    while (num != 0) {
        if(num < maior) {
            menor = num;
        }

        if(num > maior) {
            maior = num;
        }

        printf("Digite um número: ");
        scanf("%f", &num);

        amplitude = maior - menor;
    }

    

    printf("A amplitude é: %.1f\n", amplitude);

    return 0;
}