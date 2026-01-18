#include <stdio.h>

#define TAM 10
#define AGUA 0
#define NAVIO 3

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;
    
    // Inicializa tudo com agua
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
    
    // Navio 1 - horizontal na linha 2
    tabuleiro[2][1] = NAVIO;
    tabuleiro[2][2] = NAVIO;
    tabuleiro[2][3] = NAVIO;
    
    // Navio 2 - vertical na coluna 7
    tabuleiro[5][7] = NAVIO;
    tabuleiro[6][7] = NAVIO;
    tabuleiro[7][7] = NAVIO;
    
    // Navio 3 - diagonal descendo (linha 0, coluna 5)
    tabuleiro[0][5] = NAVIO;
    tabuleiro[1][6] = NAVIO;
    tabuleiro[2][7] = NAVIO;
    
    // Navio 4 - diagonal subindo (linha 9, coluna 0)
    tabuleiro[9][0] = NAVIO;
    tabuleiro[8][1] = NAVIO;
    tabuleiro[7][2] = NAVIO;
    
    // Exibe o tabuleiro
    printf("\nTabuleiro de Batalha Naval:\n\n");
    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}
