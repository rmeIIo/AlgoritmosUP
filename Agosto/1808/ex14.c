#include <stdio.h>

int main() {
    int tipo;
    float litros, valor, total;
    printf("----------------------\n");
    printf("  POSTO DE GASOLINA\n");
    printf("----------------------\n");

    printf("Tipos de combustível:\n");
    printf("1 | ÁLCOOL\n");
    printf("2 | GASOLINA\n");
    printf("----------------------\n");
    printf("Digite qual tipo de combustível deseja abastecer: ");
    scanf("%i", &tipo);

    printf("Digite o valor do combustível: ");
    scanf("%f", &valor);

    printf("Agora digite a quantidade de litros que deseja abastecer: ");
    scanf("%f", &litros);

    printf("----------------------\n");

    total = valor * litros;
    

    if(tipo == 1 && litros <= 20) {
        float desconto = (valor * litros) * 0.03;
        total = total - desconto;
        printf("Você obteve um desconto de 3%% e o valor total é de: R$%.2f\n", total);
    } else if(tipo == 1 && litros > 20) {
        float desconto = (valor * litros) * 0.05;
        total = total - desconto;
        printf("Você obteve um desconto de 5%% e o valor total é de: R$%.2f\n", total);
    } else if(tipo == 2 && litros <= 20) {
        float desconto = (valor * litros) * 0.035;
        total = total - desconto;
        printf("Você obteve um desconto de 3,5%% e o valor total é de: R$%.2f\n", total);
    } else if (tipo == 2 && litros > 20) {
        float desconto = (valor * litros) * 0.06;
        total = total - desconto;
        printf("Você obteve um desconto de 6%% e o valor total é de: R$%.2f\n", total);
    } else {
        printf("Tipo de combustível não identificado, tente novamente!\n");
    }

    return 0;
}