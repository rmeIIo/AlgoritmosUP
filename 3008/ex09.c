#include <stdio.h>

int main() {
    int i;

    for(i = 0; i<=100; i += 5) {
        printf("\nCelsius: %d, Farenheit: %.1f", i, i * 1.8 + 32);
    }

    printf("\n");

    return 0;
}