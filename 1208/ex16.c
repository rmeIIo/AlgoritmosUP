#include <stdio.h>

int main() {

    printf("--------------------------\n");
    printf(" SEJA BEM VINDO AO BANCO\n");
    printf("--------------------------\n");

    int saque;
    int cedulas100, cedulas50, cedulas20, cedulas10, cedulas5;

    printf("Digite o valor que deseja sacar: ");
    scanf("%i", &saque);

    printf("--------------------------\n");

    cedulas100 = saque / 100;
    saque %= 100;

    cedulas50 = saque / 50;
    saque %= 50;

    cedulas20 = saque / 20;
    saque %= 20;

    cedulas10 = saque / 10;
    saque %= 10;

    cedulas5 = saque / 5;

    printf("Quantidade de cédulas usadas: \n");
    if(cedulas100 > 0) {
        printf("%i cédulas de R$100.\n", cedulas100);
    }

    if(cedulas50 > 0) {
        printf("%i cédulas de R$50.\n", cedulas50);
    }

    if(cedulas20 > 0) {
        printf("%i cédulas de R$20.\n", cedulas20);
    }

    if(cedulas10 > 0) {
        printf("%i cédulas de R$10.\n", cedulas10);
    }

    if(cedulas5 > 0) {
        printf("%i cédulas de 5.\n", cedulas5);
    }

    return 0;
}