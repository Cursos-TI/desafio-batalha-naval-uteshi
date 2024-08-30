#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define LINHAS 10
#define COLUNAS 10

int main() {
    //INICIO DESAFIO INICIANTE
    int CAMPO[LINHAS][COLUNAS] = {0}; //ESCOPO DO CAMPO DO TABULEIRO AGUA = 0

    //NAVIO 1 - HORIZONTAL
    CAMPO[0][0] = 3; 
    CAMPO[0][1] = 3; 
    CAMPO[0][2] = 3; 

    //NAVIO 2 - VERTICAL
    CAMPO[7][9] = 3; 
    CAMPO[8][9] = 3; 
    CAMPO[9][9] = 3; 

    // GERANDO O CAMPO COM OS NAVIOS
    printf("### Tabuleiro INICIANTE:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", CAMPO[i][j]);
        }
        printf("\n");
    }
    // FIM DESAFIO INICIANTE
   
   //INICIO DESAFIO AVENTUREIRO
    int CAMPO2[LINHAS][COLUNAS] = {0}; //ESCOPO DO CAMPO DO TABULEIRO AGUA = 0

    //NAVIO 1 - HORIZONTAL
    CAMPO2[0][0] = 3; 
    CAMPO2[0][1] = 3; 
    CAMPO2[0][2] = 3; 

    //NAVIO 2 - VERTICAL
    CAMPO2[7][9] = 3; 
    CAMPO2[8][9] = 3; 
    CAMPO2[9][9] = 3; 

    //NAVIO 3 - DIAGONAL
    CAMPO2[5][6] = 3;
    CAMPO2[6][5] = 3;
    CAMPO2[7][4] = 3;

    // GERANDO O CAMPO COM OS NAVIOS
    printf("\n\n### Tabuleiro AVENTUREIRO:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", CAMPO2[i][j]);
        }
        printf("\n");
    }
    // FIM DESAFIO AVENTUREIRO

    //INICIO DESAFIO MESTRE
    int CAMPO3[LINHAS][COLUNAS] = {0};

    //HABILIDADE - GOLPE EM CONE
    CAMPO3[0][2] = 1;
    CAMPO3[1][1] = 1;
    CAMPO3[1][2] = 1;
    CAMPO3[1][3] = 1;
    CAMPO3[2][0] = 1;
    CAMPO3[2][1] = 1;
    CAMPO3[2][2] = 1;
    CAMPO3[2][3] = 1;
    CAMPO3[2][4] = 1;

    //HABILIDADE - GOLPE EM OCTAEDRO
    CAMPO3[2][6] = 1;
    CAMPO3[3][5] = 1;
    CAMPO3[3][6] = 1;
    CAMPO3[3][7] = 1;
    CAMPO3[4][4] = 1;
    CAMPO3[4][5] = 1;
    CAMPO3[4][6] = 1;
    CAMPO3[4][7] = 1;
    CAMPO3[4][8] = 1;
    CAMPO3[5][5] = 1;
    CAMPO3[5][6] = 1;
    CAMPO3[5][7] = 1;
    CAMPO3[6][6] = 1;

    //HABILIDADE - GOLPE EM CRUZ
    CAMPO3[5][2] = 1;
    CAMPO3[6][2] = 1;
    CAMPO3[7][2] = 1;
    CAMPO3[8][2] = 1;
    CAMPO3[9][2] = 1;
    CAMPO3[7][0] = 1;
    CAMPO3[7][1] = 1;
    CAMPO3[7][3] = 1;
    CAMPO3[7][4] = 1;
    
    // GERANDO O CAMPO COM OS PODERES
    printf("\n\n### Tabuleiro MESTRE:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", CAMPO3[i][j]);
        }
        printf("\n");
    }
    //FIM DESAFIO MESTRE

    return 0;
}
