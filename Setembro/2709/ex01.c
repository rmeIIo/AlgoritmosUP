#include <stdio.h>

int main() {
    int vetor[20];

    for(int i = 0; 1 < 20; i++) {
        vetor[i] = 0;
    }

    for(int i = 0; 1 < 20; i++) {
        scanf("%i", &vetor[i]);
    }

    for (int i = 19; i >= 0; i--) {
        printf("%i", vetor[i]);
    }

    return 0;
}