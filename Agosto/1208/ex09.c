#include <stdio.h>

int main() {
    float valorGasto, gorjeta;

    printf("Digite o total gasto no restaurante: R$");
    scanf("%f", &valorGasto);

    gorjeta = valorGasto * 0.1;

    float total = valorGasto + gorjeta;

    printf("O valor total a ser pago é de R$%2.f, com uma gorjeta de R$%.2f.\n", total, gorjeta);

    return 0; 
}