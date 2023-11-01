#include <stdio.h>

float calculo(float n1, float n2, char op) {
    switch(op) {
        case '+': return n1 + n2; break;
        case '-': return n1 - n2; break;
        case '*': return n1 * n2; break;
        case '/': return n1 / n2; break;
    }
}

int main() {
    float num1, num2;
    char op;

    printf("Digite a operação desejada [+, -, * ou /]: ");
    scanf("%c", &op);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    if(op == '/' && num2 == 0) {
        printf("Não é possível a divisão por 0.\n");
    } else {
        printf("Resultado: %.2f\n", calculo(num1, num2, op));
    }

    return 0;
}