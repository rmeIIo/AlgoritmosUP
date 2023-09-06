#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%i", &num);



    if(num % 2 == 0 && num % 3 == 0) {
        printf("O número %i é divisível por 2 e 3.\n", num);
    } else {
        printf("O número %i não é divisível por 2 e 3.\n", num);
    }

    return 0;
}