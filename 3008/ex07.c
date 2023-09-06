#include <stdio.h>

int main() {
    int tabuada, i;

    printf("Informe a tabuada desejada: ");
    scanf("%d", &tabuada);

    for(i = 1; i <=10; i++) {
        printf("\n%d x %d = %d", tabuada, i, tabuada * i);
    }

    printf("\n");

    return 0;
}