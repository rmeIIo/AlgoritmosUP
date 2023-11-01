#include <stdio.h>

void linha() {
    int i;

    for(i = 1; i <= 20; i++) {
        printf("*");
    }
}

int main () {
    int i;

    linha();

    printf("\n");

    printf("Números de 1 a 5:");

    printf("\n");

    linha();

    printf("\n");

    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    linha();

    printf("\n");

    return 0;
}