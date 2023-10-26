#include <stdio.h>
#include <ctype.h>

int main() {
    char str[51];
    int quantidade = 0;

    printf("Informe string: ");
    scanf(" %50[^\n]", str);

    for (int i = 0; str[i]!= '\0'; i++) {
        str[i] = tolower(str[i]);

        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            quantidade++;
        }
    }    

    printf("Quantidade de vogais na string: %d\n", quantidade);
}