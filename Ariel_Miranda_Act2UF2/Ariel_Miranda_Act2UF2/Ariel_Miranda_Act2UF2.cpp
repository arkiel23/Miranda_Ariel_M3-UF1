#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InicializarMapa(char mapa[3][3]);
void TurnoMaquina(char mapa[3][3], int* posMaquina);
void TurnoJugador(char mapa[3][3], int* posJugador);
void MostrarMapa(char mapa[3][3]);
int ComprobarJugador(char mapa[3][3]);
int ComprobarMaquina(char mapa[3][3]);

int main()
{
    srand(time(NULL));

    int seguir = 1;
    int ganadas = 0;
    int perdidas = 0;
    int empates = 0;

    printf("El primero es la fila (0-2) y el segundo es la columna (0-2)\n");
 

    while (seguir == 1)
    {
        char mapa[3][3];
        int posJugador[2];
        int posMaquina[2];
        int terminarJuegoMaquina = 0;
        int terminarJuegoJugador = 0;
        int intentos = 9;

        InicializarMapa(mapa);
        MostrarMapa(mapa);

        do
        {
            printf("Tu turno: ingresa fila y columna: ");
            TurnoJugador(mapa, posJugador);  
            mapa[posJugador[0]][posJugador[1]] = 'X';
            MostrarMapa(mapa);
            intentos--;

            terminarJuegoJugador = ComprobarJugador(mapa);
            if (terminarJuegoJugador == 1)
            {
                break;
            }

            if (intentos > 0)
            {
               
                TurnoMaquina(mapa, posMaquina);  
                mapa[posMaquina[0]][posMaquina[1]] = 'O';
                printf("Turno de la maquina:\n");
                MostrarMapa(mapa);
                intentos--;

                terminarJuegoMaquina = ComprobarMaquina(mapa);
                if (terminarJuegoMaquina == 1)
                {
                    break;
                }
            }

        } while (intentos > 0);

        if (terminarJuegoJugador == 1)
        {
            printf("Has ganado\n");
            ganadas++;
        }
        else if (terminarJuegoMaquina == 1)
        {
            printf("Has perdido\n");
            perdidas++;
        }
        else
        {
            printf("Empate\n");
            empates++;
        }

        printf("Quieres continuar? (1 = si, 0 = no): ");
        scanf_s("%d", &seguir);
        printf("\n");
    }
    printf("\nHistorial:\n");
    printf("%d ganadas.\n", ganadas);
    printf("%d perdidas.\n", perdidas);
    printf("%d empates.\n", empates);

    return 0;
}


void InicializarMapa(char mapa[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mapa[i][j] = '-';
        }
    }
}

void TurnoMaquina(char mapa[3][3], int* posMaquina) 
{
    do
    {
        *(posMaquina + 0) = rand() % 3; 
        *(posMaquina + 1) = rand() % 3;  

    } while (mapa[*(posMaquina + 0)][*(posMaquina + 1)] != '-');
}

void TurnoJugador(char mapa[3][3], int* posJugador) 
{
    char entrada[3];

    do
    {
        scanf_s("%s", entrada, 3);

        *(posJugador + 0) = entrada[0] - '0'; 
        *(posJugador + 1) = entrada[1] - '0';  
        if (*(posJugador + 0) < 0 || *(posJugador + 0) > 2 || *(posJugador + 1) < 0 || *(posJugador + 1) > 2)
        {
            printf("Posicion invalida. Usa numeros del 0 al 2 (ej: 00, 12): ");
        }
        else if (mapa[*(posJugador + 0)][*(posJugador + 1)] != '-')
        {
            printf("Casilla ocupada. Ingresa otra posicion: ");
        }

    } while (mapa[*(posJugador + 0)][*(posJugador + 1)] != '-' ||
        *(posJugador + 0) < 0 || *(posJugador + 0) > 2 ||
        *(posJugador + 1) < 0 || *(posJugador + 1) > 2);
}

void MostrarMapa(char mapa[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c", mapa[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int ComprobarJugador(char mapa[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (mapa[i][0] == 'X' && mapa[i][1] == 'X' && mapa[i][2] == 'X')
        {
            return 1;
        }
        else if (mapa[0][i] == 'X' && mapa[1][i] == 'X' && mapa[2][i] == 'X')
        {
            return 1;
        }
    }

    if (mapa[0][0] == 'X' && mapa[1][1] == 'X' && mapa[2][2] == 'X')
    {
        return 1;
    }
    else if (mapa[2][0] == 'X' && mapa[1][1] == 'X' && mapa[0][2] == 'X')
    {
        return 1;
    }

    return 0;
}

int ComprobarMaquina(char mapa[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (mapa[i][0] == 'O' && mapa[i][1] == 'O' && mapa[i][2] == 'O')
        {
            return 1;
        }
        else if (mapa[0][i] == 'O' && mapa[1][i] == 'O' && mapa[2][i] == 'O')
        {
            return 1;
        }
    }

    if (mapa[0][0] == 'O' && mapa[1][1] == 'O' && mapa[2][2] == 'O')
    {
        return 1;
    }
    else if (mapa[2][0] == 'O' && mapa[1][1] == 'O' && mapa[0][2] == 'O')
    {
        return 1;
    }

    return 0;
}