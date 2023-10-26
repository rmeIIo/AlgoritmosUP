#include <stdio.h>
#include <string.h>

int main() {
    char str1[21], str2[21];

    printf("Informe primeira string: ");
    scanf("%s", str1);

    printf("Informe segunda string: ");
    scanf("%s", str2);

    if(strcmp(str1, str2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}