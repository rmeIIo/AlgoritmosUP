#include <stdio.h>

int main() {
    float kgMorango, kgMaça, valorKg, totalMorangoR$, totalMaçaR$, total;
    printf("Digite quantos kgs de morango foram comprados: ");
    scanf("%f", &kgMorango);

    printf("Digite quantos kgs de maçã foram comprados: ");
    scanf("%f", &kgMaça);


    if(kgMorango <= 5) {
        valorKg = 6.5;
        totalMorangoR$ = valorKg * kgMorango;
    } else if (kgMorango > 5) {
        valorKg = 6.2;
        totalMorangoR$ = valorKg * kgMorango;
    }

    if (kgMaça <= 5) {
        valorKg = 3.8;
        totalMaçaR$ = valorKg * kgMaça;
    } else if (kgMaça > 5) {
        valorKg = 3.5;
        totalMaçaR$ = valorKg * kgMaça;
    }

    total = totalMaçaR$ + totalMorangoR$;

    if(kgMaça > 10 || kgMorango > 10 || kgMaça + kgMorango >= 10 || total > 50 ) {
        float desconto = total * 0.1;
        total = total - desconto;
        printf("O cliente adquiriu %.2f kgs em morango, %.2f kgs em maças e o total de sua compra foi de R$%.2f, com um desconto de 10%%.\n", kgMorango, kgMaça, total);
    } else {
        printf("O cliente adquiriu %.2f kgs em morango, %.2f kgs em maças e o total de sua compra foi de R$%.2f.\n", kgMorango, kgMaça, total);
    }

    return 0;
}