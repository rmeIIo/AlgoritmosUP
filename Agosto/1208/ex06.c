#include <stdio.h>

int main() {
    float reais, taxa;
    printf("Digite o valor em reais: R$");
    scanf("%f", &reais);

    printf("Digite a taxa de câmbio do dólar: R$");
    scanf("%f", &taxa);

    float dolar = reais * taxa;
    printf("R$%.2f é equivalente a $%.2f\n", reais, dolar);

    return 0;
}