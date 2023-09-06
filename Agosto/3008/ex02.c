#include <stdio.h>

int main() {
    int c = 10;
    printf("-------------------------------------\n");
    printf("  CONTAGEM REGRESSIVA DE LANÇAMENTO\n");
    printf("-------------------------------------\n");

    while(c <= 10 && c >= 0) {
        printf("%i\n", c);
        c--;
    }
    printf("FOGO!\n");

    return 0;
}