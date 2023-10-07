#include <stdio.h>
#include <stdlib.h>

int deBoasVindas() {
    printf("Bem vindo!");
    return 13;
}

int main() {
    deBoasVindas();
    int y = deBoasVindas() ;
    printf("%d\n", y);    

    return 0;
}