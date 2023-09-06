#include <stdio.h>

int main() {
    int i, num;

    num = 3;

    for(i = 1; i <= 10; i++) {
        printf("%d ", num);
        num = num * 3;
    }

    printf("\n");

    return 0;
}