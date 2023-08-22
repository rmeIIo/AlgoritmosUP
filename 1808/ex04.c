#include <stdio.h>

int main() {
    float altura;
    char genero;

    printf("Qual seu gênero? (M/F): ");
    scanf("%c", &genero);

    if(genero > 'a' && genero <= 'z') {
        genero = genero - 'a' + 'A';
    }

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    float pesoM = 72.7 * altura - 58;
    float pesoF = 62.1 * altura - 44.7;

    if(genero == 'M') {
        printf("O seu peso ideal é de: %.2f\n", pesoM);
    } else if (genero == 'F') {
        printf("O seu peso ideal é de: %.2f\n", pesoF);
    } else {
        printf("ERRO! Informe um gênero válido!\n");
    }

    return 0;
}