#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strcopy (char* dst, char* src) {
    int i;
    for(i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }

    dst[i] = '\0';

}

int strlen (char* w) {
    int i = 0;
    while(w[i]!= '\0') {
        i++;
    }

    return i;
}

int strcmp(char* left, char* right) {
    int i;
    for(i = 0; left[i]!= '\0' && right[i]!= '\0'; i++) {
        if(left[i] < right[i]) {
            return -1;
        } else if (left[i] > right[i]) {
            return 1;
        }
    }
}

int main() {
    char nome[6] = "Jango";
    char nome2[4] = "Ana";

    strcopy(nome2, nome);

    printf("%s\n", nome2);

    return 0;

}