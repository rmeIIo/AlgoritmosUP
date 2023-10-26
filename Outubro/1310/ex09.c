#include <stdio.h>
#include <ctype.h>

int main() {
    char nome[31], alimentado, resfriado;
    int idade;
    float peso;

    printf("Informe nome: ");
    scanf("%s", nome);

    printf("Informe idade: ");
    scanf("%d", &idade);

    printf("Informe peso: ");
    scanf("%f", &peso);

    printf("Está bem alimentado (S/N)? ");
    scanf(" %c", &alimentado);

    printf("Está resfriado (S/N)? ");
    scanf(" %c", &resfriado);

    if(idade >= 16 && idade <= 69 && peso >- 50 && toupper(alimentado) == 'S' && toupper(resfriado) == 'N') {
        printf("%s está apto(a) para doação de sangue.\n", nome);
    } else {
        printf("%s não está apto(a) para doação de sangue.\n", nome);
    }

    return 0;
}