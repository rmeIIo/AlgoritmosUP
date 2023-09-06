#include <stdio.h>

int main() {

    int lata, garrafa1, garrafa2;

    printf("Digite a quantidade de latas de 350ml foram compradas: ");
    scanf("%i", &lata);

    printf("Digite a quantidade de garrafas de  600ml foram compradas: ");
    scanf("%i", &garrafa1);

    printf("Digite a quantidade de garrafas de 2 litros foram compradas: ");
    scanf("%i", &garrafa2);

    float lataLitros = (float)lata * 350 / 1000;
    float garrafaLitros = (float)garrafa1 * 600 / 1000;
    garrafa2 *= 2;

    float totalLitros = lataLitros + garrafaLitros + garrafa2;

    printf("O total de litros de refrigerante foi de %.2f litros.\n", totalLitros);

    return 0;
}