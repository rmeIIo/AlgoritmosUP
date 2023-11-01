#include <stdio.h>

#include <stdio.h>

void linha(int quant) {
    int i;

    for(i = 1; i <= quant; i++) {
        printf("*");
    }
}

int main () {
    int i;

    linha(20);

    printf("\n");

    printf("Números de 1 a 5:");

    printf("\n");

    linha(20);

    printf("\n");

    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    linha(20);

    printf("\n");

    return 0;
}