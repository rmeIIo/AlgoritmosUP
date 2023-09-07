#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int valor = rand() % 100;
    int chute;
    int tentativas = 10;

    printf("\x1b[36m--------------------------------------\x1b[0m\n");
    printf("\x1b[36mSEJA BEM VINDO AO JOGO DE ADIVINHAÇÃO\x1b[0m\n");
    printf("\x1b[36m--------------------------------------\x1b[0m\n");

    for(int tentativa = 1; tentativa <= tentativas; tentativa++) {
        printf("Adivinhe o número: ");
        scanf("%i", &chute);

        if(valor > chute) {
            printf("CUIDADO! Tente um \x1b[31mnúmero maior!!\x1b[0m\n");
        } else if (valor < chute) {
            printf("CUIDADO! Tente um \x1b[31mnúmero menor!\x1b[0m\n");
        } else if (valor == chute) {
            printf("\x1b[32mPARABENS!\x1b[0m Você acertou o valor!\n");
            break;
        } if (tentativa == tentativas) {
            printf("\x1b[31mTENTATIVAS ESGOTADAS!\x1b[0m O valor correto era: %i!\n", valor);
        }
        
    }

    return 0;
}