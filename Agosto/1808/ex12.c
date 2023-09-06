#include <stdio.h>

int main() {
    int num;
    printf("Digite um número de 0 a 9 para escreve-lo por extenso: ");
    scanf("%i", &num);

    if(num == 0){
        printf("O número %i escrito por extenso é zero.\n", num);
    } else if(num == 1) {
        printf("O número %i escrito por extenso é um.\n", num);
    } else if (num == 2) {
        printf("O número %i escrito por extenso é dois.\n", num);
    } else if (num == 3) {
        printf("O número %i escrito por extenso é três.\n", num);
    } else if(num == 4) {
        printf("O número %i escrito por extenso é quatro.\n", num);
    } else if (num == 5) {
        printf("O número %i escrito por extenso é cinco.\n", num);
    } else if (num == 6) {
        printf("O número %i escrito por extenso é seis.\n", num);
    } else if(num == 7) {
        printf("O número %i escrito por extenso é sete.\n", num);
    } else if (num == 8) {
        printf("O número %i escrito por extenso é oito.\n", num);
    } else if(num == 9) {
        printf("O número %i escrito por extenso é nove.\n", num);
    } else {
        printf("Valor inválido, tente novamente!\n");
    }

    return 0;
}