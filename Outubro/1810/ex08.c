#include <stdio.h>

float media(float n1, float n2, float n3, char op) {
    if (op == 'A') {
        return (n1 + n2 + n3) / 3;
    } else {
        return (n1 * 5 + n2 * 3 + n3 * 2 / 10);
    }
}

int main() {
    float nota1, nota2, nota3, resultado;
    char op;

    printf("Digite o cálculo desejado [A ou P]: ");
    scanf("%c", &op);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    resultado = media(nota1, nota2, nota3, op);

    printf("Média: %.1f\n", resultado);

    return 0;
}