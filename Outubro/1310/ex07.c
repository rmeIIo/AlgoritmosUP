#include <stdio.h>

int main() {
    char str[51], caracter;
    int quantidade = 0;

    printf("Informe string: ");
    scanf(" %50[^\n]", str);

    printf("Informe caracter procurado: ");
    scanf(" %c", &caracter);

    for (int i = 0; str[i]!= '\0'; i++) {
        if (str[i] == caracter) {
            quantidade++;
        }
    }

    printf("O caracter '%c' aparece %d vez(es) na string.\n", caracter, quantidade);

    return 0;
}