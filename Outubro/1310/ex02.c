#include <stdio.h>

int main() {
    char str[31];
    int i, quantidade = 0;

    printf("Digite uma string: ");
    scanf(" %30[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        quantidade++;
    }

    printf("A quantidade de caracteres é: %d\n", quantidade);

    return 0;
    
}