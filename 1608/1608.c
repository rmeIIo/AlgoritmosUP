#include <stdio.h>

int main() {
    int operacao;
    float resposta, num1, num2;
    printf("\x1b[33m------------------------------\nSEJA BEM VINDO À CALCULADORA!\n------------------------------\x1b[0m\n");
    printf(" 1 | SOMA\n 2 | SUBTRAÇÃO\n 3 | MULTIPLICAÇÃO\n 4 | DIVISÃO\n\n\x1b[34mEscolha uma operação: \x1b[0m");
    scanf("%i", &operacao);

    printf("-----------------------------------\n");

    printf("Agora digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("-----------------------------------\n");

    if(operacao == 1) {
        resposta = num1 + num2;
        printf("A soma entre %.2f e %.2f é igual a \x1b[32m%.2f\x1b[0m\n", num1, num2, resposta);
    } else if(operacao == 2) {
        resposta = num1 - num2;
        printf("A subtração entre %.2f e %.2f é igual a \x1b[32m%.2f\x1b[0m\n", num1, num2, resposta);
    } else if (operacao == 3) {
        resposta = num1 * num2;
        printf("A multiplicação entre %.2f e %.2f é igual a \x1b[32m%.2f\x1b[0m\n", num1, num2, resposta);
    } else if (operacao == 4) {
        resposta = num1 / num2;
        printf("A divisão entre %.2f e %.2f é igual a \x1b[32m%.2f\x1b[0m\n", num1, num2, resposta);
    } else {
        printf("\x1b[31mERRO! Refaça as operações.\x1b[0m\n");
    }


    return 0;
}