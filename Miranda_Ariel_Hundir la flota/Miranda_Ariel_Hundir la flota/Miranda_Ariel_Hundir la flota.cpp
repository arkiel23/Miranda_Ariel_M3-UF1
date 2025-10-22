#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tablero[10][10];
    int tablero_visible[10][10];
    int fila, columna;
    int intentos = 0;
    int posiciones_restantes = 9;
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tablero[i][j] = 0;
            tablero_visible[i][j] = -1;
        }
    }

    srand(time(NULL));

    int tipo1 = rand() % 3; 
    int fila1 = rand() % 10;
    int col1 = rand() % 10;

    if (tipo1 == 0) { 
        if (col1 > 7) col1 = 7;
        tablero[fila1][col1] = 1;
        tablero[fila1][col1 + 1] = 1;
        tablero[fila1][col1 + 2] = 1;
    }
    else if (tipo1 == 1) {
        if (fila1 > 7) fila1 = 7;
        tablero[fila1][col1] = 1;
        tablero[fila1 + 1][col1] = 1;
        tablero[fila1 + 2][col1] = 1;
    }
    else {
        if (fila1 > 7) fila1 = 7;
        if (col1 > 7) col1 = 7;
        tablero[fila1][col1] = 1;
        tablero[fila1 + 1][col1 + 1] = 1;
        tablero[fila1 + 2][col1 + 2] = 1;
    }

    int colocada2 = 0;
    while (colocada2 == 0) {
        int tipo2 = rand() % 3;
        int fila2 = rand() % 10;
        int col2 = rand() % 10;

        if (tipo2 == 0) {
            if (col2 <= 7) {
                if (tablero[fila2][col2] == 0 && tablero[fila2][col2 + 1] == 0 && tablero[fila2][col2 + 2] == 0) {
                    tablero[fila2][col2] = 1;
                    tablero[fila2][col2 + 1] = 1;
                    tablero[fila2][col2 + 2] = 1;
                    colocada2 = 1;
                }
            }
        }
        else if (tipo2 == 1) {
            if (fila2 <= 7) {
                if (tablero[fila2][col2] == 0 && tablero[fila2 + 1][col2] == 0 && tablero[fila2 + 2][col2] == 0) {
                    tablero[fila2][col2] = 1;
                    tablero[fila2 + 1][col2] = 1;
                    tablero[fila2 + 2][col2] = 1;
                    colocada2 = 1;
                }
            }
        }
        else { 
            if (fila2 <= 7 && col2 <= 7) {
                if (tablero[fila2][col2] == 0 && tablero[fila2 + 1][col2 + 1] == 0 && tablero[fila2 + 2][col2 + 2] == 0) {
                    tablero[fila2][col2] = 1;
                    tablero[fila2 + 1][col2 + 1] = 1;
                    tablero[fila2 + 2][col2 + 2] = 1;
                    colocada2 = 1;
                }
            }
        }
    }

    int colocada3 = 0;
    while (colocada3 == 0) {
        int tipo3 = rand() % 3;
        int fila3 = rand() % 10;
        int col3 = rand() % 10;

        if (tipo3 == 0) {
            if (col3 <= 7) {
                if (tablero[fila3][col3] == 0 && tablero[fila3][col3 + 1] == 0 && tablero[fila3][col3 + 2] == 0) {
                    tablero[fila3][col3] = 1;
                    tablero[fila3][col3 + 1] = 1;
                    tablero[fila3][col3 + 2] = 1;
                    colocada3 = 1;
                }
            }
        }
        else if (tipo3 == 1) {
            if (fila3 <= 7) {
                if (tablero[fila3][col3] == 0 && tablero[fila3 + 1][col3] == 0 && tablero[fila3 + 2][col3] == 0) {
                    tablero[fila3][col3] = 1;
                    tablero[fila3 + 1][col3] = 1;
                    tablero[fila3 + 2][col3] = 1;
                    colocada3 = 1;
                }
            }
        }
        else {
            if (fila3 <= 7 && col3 <= 7) {
                if (tablero[fila3][col3] == 0 && tablero[fila3 + 1][col3 + 1] == 0 && tablero[fila3 + 2][col3 + 2] == 0) {
                    tablero[fila3][col3] = 1;
                    tablero[fila3 + 1][col3 + 1] = 1;
                    tablero[fila3 + 2][col3 + 2] = 1;
                    colocada3 = 1;
                }
            }
        }
    }

    printf("Hay 3 naves de 3 posiciones cada una.\n");
    printf("Derriba todas las naves con el minimo de intentos!\n\n");

    while (posiciones_restantes > 0) {
        for (i = 0; i < 10; i++) {
            printf("%d  ", i);
            for (j = 0; j < 10; j++) {
                if (tablero_visible[i][j] == -1) {
                    printf("- ");
                }
                else if (tablero_visible[i][j] == 0) {
                    printf("O ");
                }
                else {
                    printf("X ");
                }
            }
            printf("\n");
        }

        printf("\nPosiciones restantes: %d\n", posiciones_restantes);
        printf("Intentos: %d\n", intentos);

        printf("\nIntroduce fila (0-9): ");
        scanf_s("%d", &fila);
        printf("Introduce columna (0-9): ");
        scanf_s("%d", &columna);

        if (fila < 0 || fila > 9 || columna < 0 || columna > 9) {
            printf("Coordenadas invalidas! Usa numeros del 0 al 9.\n");
            continue;
        }

        if (tablero_visible[fila][columna] != -1) {
            printf("Ya disparaste ahi antes!\n");
            continue;
        }

        intentos = intentos + 1;

        if (tablero[fila][columna] == 1) {
            printf("\nIMPACTO\n");
            tablero_visible[fila][columna] = 1;
            posiciones_restantes = posiciones_restantes - 1;
        }
        else {
            tablero_visible[fila][columna] = 0;
        }
    }
    printf("\nFELICIDADES!\n");
    printf("Has hundido todas las naves en %d intentos!\n", intentos);

}