#include <stdio.h>

int main() {
    int num, soma, quantidade;

    num = 1;
    
    while(soma <= 100) {
        soma += num;
        num ++;
        quantidade ++;
    }

    printf("Quantidade de números: %d", quantidade);
    printf("\nResultado da soma: %d\n", soma);

    return 0;
}