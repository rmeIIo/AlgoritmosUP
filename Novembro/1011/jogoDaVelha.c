#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char quadro[3][3];
const char PLAYER = 'X';
const char COMPUTADOR = 'O';

void limparQuadro();
void printQuadro();
int checarEspacosVazios();
void playerEscolha();
void computadorEscolha();
char checarVencedor();
void printVencedor(char);
void cabecalho();
void limparTerminal();

int main() {
    
    char vencedor = ' ';

    limparQuadro();

    while(vencedor == ' ' && checarEspacosVazios() != 0) {
        limparTerminal();

        cabecalho();
        printf("\n\x1b[34m   JOGO DA VELHA\x1b[0m\n");
        cabecalho();

        printQuadro();

        playerEscolha();

        vencedor = checarVencedor();

        if(vencedor != ' ' || checarEspacosVazios() == 0) {
            break;
        }

        limparTerminal();
        printQuadro();

        computadorEscolha();

        vencedor = checarVencedor();

        if(vencedor != ' ' || checarEspacosVazios() == 0) {
            break;
        }
    }

    limparTerminal();
    printQuadro();
    printVencedor(vencedor);

    return 0;
}

void cabecalho() {

    for(int i = 0; i < 20; i++) {
        printf("\x1b[34m-\x1b[0m");
    }
}

void limparTerminal() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void limparQuadro() {
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            quadro[i][j] = ' ';
        }
        
    }
}

void printQuadro() {
    printf("\n\x1b[33m    %c  | %c | %c", quadro[0][0], quadro[0][1], quadro[0][2]);
    printf("\n   ----|---|----\n");
    printf("   %c   | %c | %c", quadro[1][0], quadro[1][1], quadro[1][2]);
    printf("\n   ----|---|----\n");
    printf("   %c   | %c | %c", quadro[2][0], quadro[2][1], quadro[2][2]);
    printf("\n\x1b[0m");
}

int checarEspacosVazios() {
    int espacoVazio = 9;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(quadro[i][j] != ' ') {
                espacoVazio--;
            }
        }
    }

    return espacoVazio;
}

void playerEscolha() { 
    int x, y;

    do
    {
        printf("\nDigite o número da linha \x1b[32m#(1 - 3)\x1b[0m: ");
        scanf("%d", &x);
        x--;

        printf("Digite o número da coluna \x1b[32m#(1 - 3)\x1b[0m: ");
        scanf("%d", &y);
        y--;

        if(quadro[x][y] != ' ') {
            printf("\x1b[31m ERRO!\x1b[0m Jogada inválida!\n");
        } else {
            quadro[x][y] = PLAYER;
            break;
        }
    } while (quadro[x][y] != ' ');
    
}

void computadorEscolha() {
    srand(time(0));
    int x, y;

    if(checarEspacosVazios() > 0) {
        do
        {
            x = rand() % 3;
            y = rand() % 3; 
        } while (quadro[x][y] != ' ');
        
        quadro[x][y] = COMPUTADOR;
    } else {
        printVencedor(' ');
    }
}

char checarVencedor() {
    //checar linhas
    for(int i = 0; i < 3; i++) {
        if(quadro[i][0] == quadro[i][1] && quadro[i][0] == quadro[i][2]) {
            return quadro[i][0];
        }
    }

    //checar colunas
    for(int i = 0; i < 3; i++) {
        if(quadro[0][i] == quadro[1][i] && quadro[0][i] == quadro[2][i]) {
            return quadro[0][i];
        }
    }

    //checar diagonais
    if(quadro[0][2] == quadro[1][1] && quadro[0][2] == quadro[2][0]) {
            return quadro[0][2];
    }

    return ' ';
}

void printVencedor(char vencedor) {
    if(vencedor == PLAYER) {
        cabecalho();
        printf("\n\x1b[32mVOCÊ VENCEU!\n\x1b[0m");
    } else if (vencedor == COMPUTADOR) {
        cabecalho();
        printf("\n\x1b[31mVOCE PERDEU!\n\x1b[0m");
    } else {
        cabecalho();
        printf("\n\x1b[33mDEU VELHA!\n\x1b[0m");
    }
}