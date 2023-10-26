/*Escreva um programa que alimente um vetor G de 6 elementos contendo o gabarito da Mega Sena e um vetor de A de 10 elementos contendo uma aposta. A seguir, mostre na tela quantos pontos fez o apostador.*/

#include <stdio.h>

int main() {
    int G[6] = {3, 7, 15, 25, 47, 49};
    int A[10] = {31, 34, 42, 51, 3, 7, 15, 25, 47, 49};
    int i, j, acertos;

    acertos = 0;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 10; j++) {
            if (G[i] == A[j]) {
                acertos++;
            }
        }
    }

    printf("Foram %d pontos\n", acertos);

    return 0;
}