/*Um armazém trabalha com 10 mercadores diferentes identificadas pelos números inteiros de 0 a 9. O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. Ele tem uma tabela que indica para cada mercadoria o preço de venda. Escreva um programa que leia a quantidade vendida de cada produto no final do mês (armazenando-os em um vetor Q) e o preço de venda de cada um (armazenando-os em um vetor P). Em seguida, calcule e apresente o faturamento mensal do armazém.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int Q[12], i;
    float P[12], faturamentoMensal;

    faturamentoMensal = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite a quantidade vendida do produto %d: ", i + 1);
        scanf("%d", &Q[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("Digite o preço de venda do produto %d: ", i + 1);
        scanf("%f", &P[i]);
    }

    for (i = 0; i < 10; i++) {
        faturamentoMensal += Q[i] * P[i];
    }

    printf("O faturamento mensal do armazém é de R$%.2f\n", faturamentoMensal);

    return 0;
}