#include <stdio.h>

int main() {
    float base, altura;
    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    float area = base * altura / 2.0;
    printf("A area é: %.2f\n", area);

    return 0;
}