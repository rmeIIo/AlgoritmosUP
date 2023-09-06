#include <stdio.h>

int main() {
    float altura, sombraPessoa, sombraPredio;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o comprimento de sua sombra em metros: ");
    scanf("%f", &sombraPessoa);

    printf("Digite o comprimento da sombra do prédio em metros: ");
    scanf("%f", &sombraPredio);

    float alturaPredio = (altura * sombraPredio) / sombraPessoa;

    printf("A altura do prédio é de %.2f metros.\n", alturaPredio);

    return 0;
}