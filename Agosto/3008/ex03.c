#include <stdio.h>

int main() {
    int num = 100;

    while (num <= 100 && num >= 0) {
        if (num % 5 == 0){
            printf("O número %i é divisível por 5\n", num);
        }
        num--;
    }
    
    return 0;
}