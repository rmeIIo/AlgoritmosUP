#include <stdio.h>
#include <stdlib.h>

#define MAX_CAMINHOES 20
#define MAX_MESES 24

void lerDadosCaminhao(float consumoCombustivel[], float quilometragemPercorrida[], float valorTotalTransportado[], int caminhao) {
    printf("Digite o consumo de combustível do caminhão %d: ", caminhao + 1);
    scanf("%f", &consumoCombustivel[caminhao]);
    printf("Digite a quilometragem percorrida do caminhão %d: ", caminhao + 1);
    scanf("%f", &quilometragemPercorrida[caminhao]);
    printf("Digite o valor total transportado do caminhão %d: ", caminhao + 1);
    scanf("%f", &valorTotalTransportado[caminhao]);
}

float calcularConsumoMedio(float consumoCombustivel, float quilometragem) {
    return consumoCombustivel / quilometragem;
}

int encontrarMaiorValor(float valorTotalTransportado[], int numCaminhoes) {
    int caminhaoMaiorValor = 0;
    float maiorValor = valorTotalTransportado[0];

    for (int i = 1; i < numCaminhoes; i++) {
        if (valorTotalTransportado[i] > maiorValor) {
            maiorValor = valorTotalTransportado[i];
            caminhaoMaiorValor = i;
        }
    }

    return caminhaoMaiorValor;
}

float calcularQuilometragemTotal(float quilometragem[], int numCaminhoes) {
    float quilometragemTotal = 0;

    for (int i = 0; i < numCaminhoes; i++) {
        quilometragemTotal += quilometragem[i];
    }

    return quilometragemTotal;
}

void controleFrota(int numCaminhoes, int numMeses) {
    float consumoCombustivel[MAX_CAMINHOES][MAX_MESES];
    float quilometragem[MAX_CAMINHOES][MAX_MESES];
    float valorTransportado[MAX_CAMINHOES][MAX_MESES];
    float consumoMedioMensal[MAX_MESES];

    for (int mes = 0; mes < numMeses; mes++) {
        printf("\n\x1b[33m-------------------------\x1b[0m \x1b[32m Mês %d \x1b[0m \x1b[33m------------------------\x1b[0m\n", mes + 1);

        for (int caminhao = 0; caminhao < numCaminhoes; caminhao++) {
            lerDadosCaminhao(consumoCombustivel[caminhao], quilometragem[caminhao], valorTransportado[caminhao], caminhao);
        }
    }

    for (int mes = 0; mes < numMeses; mes++) {
        float consumoMedioMes = 0;
        int caminhaoMaiorValor = encontrarMaiorValor(valorTransportado[0], numCaminhoes);

        for (int caminhao = 0; caminhao < numCaminhoes; caminhao++) {
            consumoMedioMes += calcularConsumoMedio(consumoCombustivel[caminhao][mes], quilometragem[caminhao][mes]);
        }

        consumoMedioMensal[mes] = consumoMedioMes / numCaminhoes;

        printf("\n\x1b[33m----------------------------------------------------------\x1b[0m\n");
        printf("\n\x1b[32mResultados do Mês %d:\x1b[0m\n", mes + 1);
        printf("Consumo médio mensal: %.2f\n", consumoMedioMensal[mes]);
        printf("Caminhão que transportou o maior valor: %d\n", caminhaoMaiorValor + 1);
    }

    float quilometragemTotal = calcularQuilometragemTotal(quilometragem[0], numCaminhoes);
    printf("\n\x1b[33m----------------------------------------------------------\x1b[0m\n");
    printf("\n\x1b[34mQuilometragem total:\x1b[0m %.2f\n", quilometragemTotal);
}

int pegaValorValido(int max)
{
    int valorValido = 0;
    while(1)
    {
        scanf("%i", &valorValido);
        if(valorValido < 1 || valorValido > max)
        {
            printf("\x1b[31mERRO!!! Entrada inválida!\x1b[0m\n");
            printf("O valor deve estar entre \x1b[32m1 e %i\x1b[0m: ", max);
        }
        else
        {
            break;
        }
    }
    return valorValido;
}

int main() {
    printf("\x1b[33m----------------------------------------------------------\x1b[0m\n");
    printf("\x1b[36m  BEM VINDO AO CONTROLADOR DE FROTA DE CAMINHÕES! v0.1\x1b[0m\n");
    printf("\x1b[33m----------------------------------------------------------\x1b[0m\n");

    printf("Digite o número de caminhões \x1b[31m(max %i)\x1b[0m: ", MAX_CAMINHOES);
    int numCaminhoes = pegaValorValido(MAX_CAMINHOES);

    printf("Digite o número de meses \x1b[31m(max %i)\x1b[0m: ", MAX_MESES);
    int numMeses = pegaValorValido(MAX_MESES);

    controleFrota(numCaminhoes, numMeses);

    return 0;
}