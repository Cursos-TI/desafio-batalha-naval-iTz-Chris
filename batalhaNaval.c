#include <stdio.h>

int main() {

    // Matriz tabuleiro 10x10
    int tabuleiro[10][10] = {0};


    // Navio 1 (horizontal)
    int navio1[3] = {3, 3, 3};
    int navio1_linha = 4;
    int navio1_coluna = 2;


    // Navio 2 (vertical)
    int navio2[3] = {3, 3, 3};
    int navio2_linha = 8;
    int navio2_coluna = 6;


    // Navio 3 (diagonal)
    int navio3[3] = {3, 3, 3};
    int navio3_linha = 2;
    int navio3_coluna = 2;


    // Navio 4 (diagonal)
    int navio4[3] = {3, 3, 3};
    int navio4_linha = 7;
    int navio4_coluna = 4;


    // Posicionando os navios no tabuleiro:

    // Navio 1
    for (int index = 0; index < 3; index++) {
        tabuleiro[navio1_coluna][navio1_linha + index] = navio1[index];
    }

    // Navio 2
    for (int index = 0; index < 3; index++) {
        tabuleiro[navio2_coluna + index][navio2_linha] = navio2[index];
    }

    // Navio 3
    for (int index = 0; index < 3; index++) {
        tabuleiro[navio3_linha + index][navio3_coluna + index] = navio3[index];
    }

    // Navio 4
    for (int index = 0; index < 3; index++) {
        tabuleiro[navio4_linha - index][navio4_coluna + index] = navio4[index];
    }


    // Exibindo o tabuleiro:
    printf("Tabuleiro de Batalha Naval: \n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {     
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
