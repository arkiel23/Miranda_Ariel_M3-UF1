#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void limpiarArray(int a[4][3]);
void imprimeArray(int a[4][3]);
int rellenarArray(int a[4][3], int* n);
void leerdatos(int* vicjugador, int* vicmaquina);
void guardardatos(int moneda, int apuesta, int vicjugador, int vicmaquina);
void jugar(int* vicjugador, int* vicmaquina);
void estadistica(int vicjugador, int vicmaquina);

int main()
{
   /*Ejercicio 1
   int matriz[4][3];
    int contador;
    limpiarArray(matriz);
    rellenarArray(matriz, &contador);
    imprimeArray(matriz);
    printf("\nTotal de numeros %d\n", contador);
    return 0;*/

    //Ejercicio 2
    int opcion;
    int vicjugador = 0;
    int vicmaquina = 0;
    srand(time(NULL));
    leerdatos(&vicjugador, &vicmaquina);
    do
    {
        printf("1.Jugar\n2.Estadistica\n3.Salir\n");
        scanf_s("%d", &opcion);
        if (opcion==1)
        {
            jugar(&vicjugador,&vicmaquina);
        }
        else if (opcion == 2) {
            estadistica(vicjugador, vicmaquina);
        }
        else if (opcion == 3){
            printf("Bye\n");
        }else{
            printf("Opcion invalida\n");
        }
    } while (opcion !=3);
    return 0;
}

void limpiarArray(int a[4][3])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = 0;
        }
    }
}

void imprimeArray(int a[4][3])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);  
        }
        printf("\n");
    }
}

int rellenarArray(int a[4][3], int* n)
{
    *n = 0;

    printf("Ingrese 12 valores para la matriz (4 filas x 3 columnas):\n");

    for (int i = 0; i < 4; i++)
    {
        printf("Fila %d:\n", i +1);
        for (int j = 0; j < 3; j++)
        {
            printf(" Columna %d:", j +1);
            scanf_s("%d", &a[i][j]);

            if (a[i][j] <= 5) {
                (*n)++;
            }
        }
    }
    FILE* archivo;
    errno_t err = fopen_s(&archivo, "textos/contador.txt", "w");
    if (err) {
        printf("\nError de apertura del archivo\n\n");
    }
    else {
        fprintf(archivo, "Numeros menores o iguales a 5: %d\n", *n);
        fclose(archivo);
    }
    return *n;
}

void leerdatos(int* vicjugador, int* vicmaquina)
{
    FILE* archivo;
    char palabra[20];
    int moneda, apuesta;
    errno_t err = fopen_s(&archivo, "datos.txt", "r");
    if (err) {
        printf("No hay datos\n");
        *vicjugador = 0;
        *vicmaquina = 0;
    }
    else
    {
        fscanf(archivo, "%s %d %s %d", palabra, &moneda, palabra, &apuesta);
        fscanf(archivo, "%s %s %d", palabra, palabra, vicjugador);
        fscanf(archivo, "%s %s %d", palabra, palabra, vicmaquina);
        fclose(archivo);
        printf("Datos cargados: Tu %d - Maquina %d\n", *vicjugador, *vicmaquina);
    }
}

void guardardatos(int moneda, int apuesta, int vicjugador, int vicmaquina)
{
    FILE* archivo;

    errno_t err = fopen_s(&archivo, "datos.txt", "w");

    if (err) {
        printf("Error al guardar\n");
    }
    else {
        fprintf(archivo, "Maquina %d Apuesta %d\n", moneda, apuesta);
        fprintf(archivo, "Ganados Jugador %d\n", vicjugador);
        fprintf(archivo, "Ganados Maquina %d\n", vicmaquina);
        fclose(archivo);
    }
}

void jugar(int* vicjugador, int* vicmaquina)
{
    int apuesta;
    int moneda;
    printf("Elige=0:Cara 1:Cruz\n");
    scanf_s("%d", &apuesta);
    moneda = rand() % 2;
    printf("\nLa moneda salio: ");
    if (moneda == 0) {
        printf("Cara\n");
    }
    else {
        printf("Cruz\n");
    }

    if (apuesta == moneda) {
        printf("Victoria!\n");
        (*vicjugador)++;
    }
    else {
        printf("Derrota!\n");
        (*vicmaquina)++;
    }

    guardardatos(moneda, apuesta, *vicjugador, *vicmaquina);
}

void estadistica(int vicjugador, int vicmaquina)
{
    int total = vicjugador + vicmaquina;
    printf("Tus victorias: %d\n", vicjugador);
    printf("Victorias maquina: %d\n", vicmaquina);
    printf("Total jugadas: %d\n", total);
}

