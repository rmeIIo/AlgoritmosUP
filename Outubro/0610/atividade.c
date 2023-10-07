/*Implementar um programa de controle de uma frota de caminhões.

Na função main, o programa de pedir ao usuário o tamanho da frota e o número de meses.

A main deve chamar outra função que leia os seguintes valores para cada caminhão em cada mês:



(1) consumo de combustível

(2) quilometragem percorrida

(3) valor total transportado



Ao final o programa deve imprimir um relatório contendo:

(1) consumo médio de combustível em cada mês

(2) caminhão que transportou o maior valor naquele mês

(3) quilometragem total percorrida pela frota naquele mês*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_CAMINHOES 20
#define MAX_MESES 24

int pegaValorValido(int max) {
    int valorValido = 0;

    while(1) {
        scanf("%d", &valorValido);

        if (valorValido > max || valorValido < 1) {
            printf("O valor deve estar entre 1 e %i\n", max);
        } else {
            break;
        }
    }

    return valorValido;
}

void controleFrota(int numCaminhoes, int numMeses) {
    float consumoMedioMensal[MAX_MESES];
}

int main() {
    printf("----------------------------------------------------------\n");
    printf("  BEM VINDO AO CONTROLADOR DE FROTA DE CAMINHÕES! v0.1\n");
    printf("----------------------------------------------------------\n");

    printf("Digite o número de caminhões (max %i): ", MAX_CAMINHOES);
    int numCaminhoes = pegaValorValido(MAX_CAMINHOES);

    printf("Digite o número de meses (max %i): ", MAX_MESES);
    int numMeses = pegaValorValido(MAX_MESES);

    controleFrota(numCaminhoes, numMeses);

    return 0;
}