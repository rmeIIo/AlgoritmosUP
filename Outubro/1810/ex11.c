#include <stdio.h>

void mensagem(char nome_produto[21], float preco, float valor_entregue) {
    printf("Você comprou um produto (%s) por R$%.2f e entregou ao vendedor R$%.2f em dinheiro. Você vai receber R$%.2f de troco. Volte sempre!\n", nome_produto, preco, valor_entregue, valor_entregue - preco);
}

int main() {
    char nome_produto[21];
    float preco, valor_entregue;

    printf("Digite o nome do produto: ");
    scanf("%s", nome_produto);

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite o valor entregue ao vendedor: ");
    scanf("%f", &valor_entregue);

    mensagem(nome_produto, preco, valor_entregue);

    return 0;
}