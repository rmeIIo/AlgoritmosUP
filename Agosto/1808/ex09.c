#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if(idade < 18) {
        printf("Você é menor de idade!\n");
    } else if (idade >= 18 && idade < 65) {
        printf("Vocé é maior de idade!\n");
    } else if (idade >= 65) {
        printf("Você está na terceira idade!\n");
    }

    return 0;
}