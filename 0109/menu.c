#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {
        system("clear");

        printf("Bem vind@ a calculadora! \n");
        printf(" 1 soma\n");
        printf(" 2 subtração\n");
        printf(" 3 multiplicação\n");
        printf(" 4 divisão\n");
        printf("Ou digite 0 para sair\n");

        int opcao = -1;
        scanf("%i", &opcao);

        if (opcao == 1) {
            printf("soma\n");
        } else if (opcao == 2) {
            printf("subtração\n");
        } else if (opcao == 3) {
            //mult
        } else if (opcao == 4) {
            //soma
        } else if (opcao == 0) {
            break;
        } else {
            printf("Opção invalida!\n");
        }

        printf("Pressione ENTER para continuar...\n");

        fflush(stdin);
        char qualquer;
        do {
            scanf("%c", &qualquer);
        } while (qualquer != '\n');
    }
    
    printf("Obrigado por usar a calculadora!\n");

    return 0;
}