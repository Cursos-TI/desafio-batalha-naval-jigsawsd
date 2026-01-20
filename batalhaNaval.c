#include <stdio.h>

#define TAM 10
#define AGUA 0
#define NAVIO 3
#define AREA 5

int main() {
    int base[TAM][TAM];
    int tab[TAM][TAM];
    int i, j;

    // tabuleiro base
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            base[i][j] = AGUA;
        }
    }

    // navios (exemplo)
    base[2][1] = NAVIO;
    base[2][2] = NAVIO;
    base[2][3] = NAVIO;

    base[5][7] = NAVIO;
    base[6][7] = NAVIO;
    base[7][7] = NAVIO;

    base[0][5] = NAVIO;
    base[1][6] = NAVIO;
    base[2][7] = NAVIO;

    base[9][0] = NAVIO;
    base[8][1] = NAVIO;
    base[7][2] = NAVIO;

    // matrizes das habilidades (7x7) - 1 = afeta, 0 = nao afeta
    int cone[7][7] = {
        {0,0,0,1,0,0,0},
        {0,0,1,1,1,0,0},
        {0,0,1,1,1,0,0},
        {0,1,1,1,1,1,0},
        {0,1,1,1,1,1,0},
        {1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1}
    };

    int cruz[7][7] = {
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {1,1,1,1,1,1,1},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,1,0,0,0}
    };

    int octaedro[7][7] = {
        {0,0,0,1,0,0,0},
        {0,0,1,1,1,0,0},
        {0,1,1,1,1,1,0},
        {1,1,1,1,1,1,1},
        {0,1,1,1,1,1,0},
        {0,0,1,1,1,0,0},
        {0,0,0,1,0,0,0}
    };

    // =======================
    // HABILIDADE: CONE
    // =======================
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tab[i][j] = base[i][j];
        }
    }

    // origem (linha, coluna) no tabuleiro
    int origemL = 4;
    int origemC = 4;

    // centro do 7x7 fica no [3][3], por isso aparece o "- 3"
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (cone[i][j] == 1) {
                int x = origemL + i - 3;
                int y = origemC + j - 3;

                // checa limite do tabuleiro
                if (x >= 0 && x < TAM && y >= 0 && y < TAM) {
                    // nao sobrescreve navio, so marca area
                    if (tab[x][y] != NAVIO) tab[x][y] = AREA;
                }
            }
        }
    }

    printf("\nCONE:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) printf("%d ", tab[i][j]);
        printf("\n");
    }

    // =======================
    // HABILIDADE: CRUZ
    // =======================
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tab[i][j] = base[i][j];
        }
    }

    origemL = 5;
    origemC = 5;

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (cruz[i][j] == 1) {
                int x = origemL + i - 3;
                int y = origemC + j - 3;

                if (x >= 0 && x < TAM && y >= 0 && y < TAM) {
                    if (tab[x][y] != NAVIO) tab[x][y] = AREA;
                }
            }
        }
    }

    printf("\nCRUZ:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) printf("%d ", tab[i][j]);
        printf("\n");
    }

    // =======================
    // HABILIDADE: OCTAEDRO
    // =======================
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tab[i][j] = base[i][j];
        }
    }

    origemL = 6;
    origemC = 3;

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (octaedro[i][j] == 1) {
                int x = origemL + i - 3;
                int y = origemC + j - 3;

                if (x >= 0 && x < TAM && y >= 0 && y < TAM) {
                    if (tab[x][y] != NAVIO) tab[x][y] = AREA;
                }
            }
        }
    }

    printf("\nOCTAEDRO:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) printf("%d ", tab[i][j]);
        printf("\n");
    }

    printf("\n(0 = agua, 3 = navio, 5 = area)\n");
    
    return 0;
}
