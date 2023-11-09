#include <stdio.h>

int main() {
    char M[2][3];

    char x = 'a';

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            M[i][j] = x++;
        }
    }

    return 0;
}