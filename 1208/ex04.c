#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    float media = (nota1 * 2) + (nota2 * 3) + (nota3 * 5) / 2 + 3 + 5;

    printf("A media do aluno foi de: %.2f\n", media);



    return 0;
}