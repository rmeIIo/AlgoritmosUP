#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%i", &num);

    if(num % 2 == 0 && num % 7 == 0) {
        printf("O número %i é divisível por 2 e por 7.\n", num);
    } else if(num % 2 == 0) {
        printf("O número %i é divisível por 2.\n", num);
    } else if(num % 7 == 0) {
        printf("O número %i é divisível por 7.\n", num);
    } else {
        printf("O número %i não é divisível por 2 nem por 7.\n", num);
    }
    
    return 0;
}