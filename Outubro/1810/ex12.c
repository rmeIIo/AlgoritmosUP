#include <stdio.h>

void mensagem( char nome_produto[21], float preco) {
    printf("Você comprou um produto (%s) por R$%.2f e acaba de ganhar um desconto de 10%%. Assim você vai pagar apenas %.2f pelo seu produto. Volte sempre!\n", nome_produto, preco, preco * 0.9);
}

int main() {
    char nome_produto[21];
    float preco;

    printf("Digite o nome do produto: ");
    scanf("%s", nome_produto);

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    mensagem(nome_produto, preco);

    return 0;
}