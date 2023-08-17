#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%i", &num);

    int antecessor = num - 1;
    int sucessor = num + 1;

    printf("O número escolhido foi %i, seu antecessor é %i e seu sucessor é %i.\n", num, antecessor, sucessor);

    return 0;
}