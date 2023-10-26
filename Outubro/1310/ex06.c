#include <stdio.h>

int main() {
    char str[51];

    printf("Informe string: ");
    scanf(" %50[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            printf("%c", str[i]);
        }
    }
    
    printf("\n");

    return 0;
}