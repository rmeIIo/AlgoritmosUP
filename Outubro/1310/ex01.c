/*Escreva um programa que mostre o tamanho de uma string informada pelo usuário (utiliza a função apropriada)*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[31];

    printf("Digite uma string: ");
    scanf(" %30[^\n]", str);

    printf("O tamanho da string é: %d", strlen(str));

    return 0;
}