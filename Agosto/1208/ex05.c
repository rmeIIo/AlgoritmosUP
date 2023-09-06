#include <stdio.h>

int main() {
    int grausC;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%i", &grausC);

    int grausF = grausC * 1.8 + 32;

    printf("A temperatura em graus Fahrenheit é de: %i°\n", grausF);
}