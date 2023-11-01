#include <stdio.h>

int soma_matriz(int mat[2][3]) {
    int soma = 0;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            soma += mat[i][j];
        }
    }

    return soma;
}

int main() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("A soma é: %d\n", soma_matriz(matriz));

    return 0;
}