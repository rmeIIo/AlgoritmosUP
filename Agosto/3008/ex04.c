#include <stdio.h>

int main() {
    int num = 0;
    int soma;

    for (num = 0; num <= 100; num++) {
        soma = num * (num + 1) / 2;
    }
    
    printf("%i\n", soma);

    return 0;
}