#include <stdio.h>

int main() {

    // Matriz tabuleiro 10x10
    int batalhaNaval[10][10] = {0};


    // Navio 1 (horizontal)
    int navio1[3] = {3, 3, 3};
    int navio1_linha = 4;
    int navio1_coluna = 2;


    // Navio 2 (vertical)
    int navio2[3] = {3, 3, 3};
    int navio2_linha = 8;
    int navio2_coluna = 6;


    // Posicionando os navios no tabuleiro:

    for (int index = 0; index < 3; index++) {
        batalhaNaval[navio1_coluna][navio1_linha + index] = navio1[index];
    }

    for (int index = 0; index < 3; index++) {
        batalhaNaval[navio2_coluna + index][navio2_linha] = navio2[index];
    }


    // Exibindo o tabuleiro:
    printf ("Tabuleiro de Batalha Naval: \n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            
            printf("%d ", batalhaNaval[i][j]);
        }
        printf("\n");
    }

    return 0;
}
