#include <stdio.h>

int main() {
    
    float salarioMin, quilowattGasto;

    printf("Digite o valor atual do salário mínimo: ");
    scanf("%f", &salarioMin);

    printf("Digite a quantidade de quilowatts gasta em sua residência: ");
    scanf("%f", &quilowattGasto);

    float quilowattReais = salarioMin / 7;
    float valorTotal = quilowattGasto * quilowattReais;

    printf("O valor em reais de cada quilowatt é de R$%.2f, e o total a ser pago é de R$%.2f.\n", quilowattReais, valorTotal);

    return 0;
}