#include <stdio.h>

int main() {
    int tabuada, comecar, terminar, i;

    printf("Digite o número da tabuada que gostaria de visualizar: ");
    scanf("%d", &tabuada);

    printf("Começar pelo número: ");
    scanf("%d", &comecar);

    printf("Terminar no número: ");
    scanf("%d", &terminar);

    for(i = comecar; i<= terminar; i++) {
        printf("\n%d x %d = %d", tabuada, i, tabuada * i);
    }

    printf("\n");

    return 0;
}