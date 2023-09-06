#include <stdio.h>

int main() {
    float kmPercorrido, dias;
    printf("Digite por quantos dias você alugou este carro: ");
    scanf("%f", &dias);

    printf("Digite a quilometragem percorrida com o carro: ");
    scanf("%f", &kmPercorrido);

    float diaria = 70;
    float km = 0.15;

    float pagamento = (diaria * dias) + (km * kmPercorrido);

    printf("O valor total a ser pago é de R$%.2f\n", pagamento);
    
    return 0;
}