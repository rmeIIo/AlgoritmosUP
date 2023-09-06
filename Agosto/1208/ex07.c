#include <stdio.h>

int main() {
    float capacidadeTanque, litrosAbastecido, kmPercorrido;
    printf("Digite a capacidade do tanque de abastecimento: ");
    scanf("%f", &capacidadeTanque);

    printf("Digite a quantidade em litros que foi abastecido: ");
    scanf("%f", &litrosAbastecido);

    printf("Digite a quilometragem percorrida desde o ultimo abastecimento: ");
    scanf("%f", &kmPercorrido);

    float consumoMedio = kmPercorrido / litrosAbastecido;

    float autonomia = (capacidadeTanque - litrosAbastecido) * consumoMedio;

    printf("O consumo medio do veiculo eh de %.2f km/l e, com a quantidade atual no tanque, percorrerá %.2f km.\n", consumoMedio, autonomia);

    return 0;
}