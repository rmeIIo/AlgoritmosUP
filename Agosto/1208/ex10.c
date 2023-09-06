#include <stdio.h>

int main() {
    float valorVendas;
    int sapatos;

    printf("Digite o valor total de vendas desse mês: ");
    scanf("%f", &valorVendas);

    printf("Digite quantos pares de sapatos foram vendidos: ");
    scanf("%i", &sapatos);

    float salario = (valorVendas * 0.2) + (sapatos * 5);

    printf("Com um total de R$%.2f em vendas, %i pares de sapatos vendidos, o vendedor recebeu um salário de R$%.2f.\n", valorVendas, sapatos, salario);

    return 0;
}