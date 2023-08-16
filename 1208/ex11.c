#include <stdio.h>

int main() {
    int brancos, nulos, validos;

    printf("Digite a quantidade de votos validos: ");
    scanf("%i", &validos);

    printf("Digite a quantidade de votos brancos: ");
    scanf("%i", &brancos);

    printf("Digite a quantidade de votos nulos: ");
    scanf("%i", &nulos);

    int eleitores = validos + brancos + nulos;

    float percentValidos = ((float)validos / eleitores) * 100;
    float percentBrancos = ((float)brancos / eleitores) * 100;
    float percentNulos = ((float)nulos / eleitores) * 100;

    printf("ELEIÇÕES APURADAS! Com um total de %i eleitores, o percentual de votos válidos foi de %.0f%%, %.0f%% brancos e %.0f%% nulos.\n", eleitores, percentValidos, percentBrancos, percentNulos);

    return 0;
}