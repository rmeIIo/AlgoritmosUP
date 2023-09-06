#include <stdio.h>

int main() {
    int hora, minuto, segundo;
    printf("Digite a hora: ");
    scanf("%i", &hora);
    printf("Digite o minuto: ");
    scanf("%i", &minuto);
    printf("Digite o segundo: ");
    scanf("%i", &segundo);

    hora *= 3600;
    minuto *= 60;
    int calculoSegundos = hora + minuto + segundo;
    printf("O tempo total é de %i segundos.\n", calculoSegundos);
    return 0;
}