#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[51], strLimpa[51];
    int i, tamanho, pos;

    pos = -1;

    printf("Informe string: ");
    scanf(" %50[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            pos++;
            strLimpa[pos] = tolower(str[i]);
        }
    }

    tamanho = strlen(strLimpa);

    for(i = 0; i < tamanho; i++) {
        if(strLimpa[i] != strLimpa[tamanho - 1 - i]) {
            printf("A string não é um palíndromo.\n");
            return 0;
        }
    }

    printf("A string é um palíndromo.\n");

    return 0;

}