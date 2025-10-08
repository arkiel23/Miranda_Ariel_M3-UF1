#include <stdio.h>
int main()
// Ejercicio 1
/* {
    int vector[20];
    int suma = 0;
    int mayor, posMayor;
    for (int i = 0; i < 20; i++)
    {
        printf("Ingresa los 20 valores:\n");
        scanf_s("%d", &vector[i]);
    }
    mayor = vector[0];
    posMayor = 0;
    for (int  i = 0; i < 20; i++)
    {
        suma += vector[i];
        if (vector[i]>mayor)
        {
            mayor = vector[i];
            posMayor = i;
        }
    }
    printf("\nSuma total: %d", suma);
    printf("\nValor mayor: %d en la posicion %d\n", mayor, posMayor);
}*/
// Ejercicio 2
/* {
    int v1[12], v2[12], v3[12];
    for (int i = 0; i < 12; i++) {
        printf("Ingrese valor ");
        scanf_s("%d", &v1[i]);
    }
    for (int i = 0; i < 12; i++) {
        v2[i] = v1[11 - i];
        if (v1[i] > 5) {
            v3[i] = -1;
        }
        else {
            v3[i] = v1[i];
        }
    }
    printf("\nVector 1: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", v1[i]);
    }
    printf("\nVector 2: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", v2[i]);
    }
    printf("\nVector 3: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");
}*/
// Ejercicio 3
/* {
    int v1[3], v2[3], prod = 0;

    for (int i = 0; i < 3; i++) {
        printf("Ingrese vector1: ");
        scanf_s("%d", &v1[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("Ingrese vector2: ",i);
        scanf_s("%d", &v2[i]);
    }

    for (int i = 0; i < 3; i++)
        prod += v1[i] * v2[i];

    printf("El resultado es: %d\n", prod);
}*/
// Ejercicio 4
/* {
    int v1[10], v2[10], v3[10];

    for (int i = 0; i < 10; i++) {
        printf("Ingrese V1: ");
        scanf_s("%d", &v1[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("Ingrese V2: ", i);
        scanf_s("%d", &v2[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (v1[i] > v2[i])
            v3[i] = v1[i] + v2[i];
        else
            v3[i] = v1[i] - v2[i];
    }

    printf("\nVector resultado V3: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", v3[i]);
    printf("\n");
}*/
// Ejercicio 5
/*{
int v[6];
int menor, mayor, suma;


for (int i = 0; i < 5; i++) {
    printf("Ingrese valor: ");
    scanf_s("%d", &v[i]);
}

menor = v[0];
mayor = v[0];

for (int i = 1; i < 5; i++) {
    if (v[i] < menor) menor = v[i];
    if (v[i] > mayor) mayor = v[i];
}
suma = menor + mayor;
v[5] = suma;

printf("\nMenor: %d", menor);
printf("\nMayor: %d", mayor);
printf("\nSuma agregada: %d\n", suma);

printf("\nVector final: ");
for (int i = 0; i < 6; i++) {
    printf("%d ", v[i]);
}
printf("\n");
}
*/
// Ejercicio 6
/*{
        int v[4];
        int num;

        for (int i = 0; i < 4; i++) {
            printf("Ingrese valor ");
            scanf_s("%d", &num);
            if (num > 10) {
                v[i] = num * 2;
            }
            else {
                v[i] = num;
            }
        }
        printf("\nVector resultado: ");
        for (int i = 0; i < 4; i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
}*/
// Ejercicio 7
/*{
    int v[6];
    int temp, pares = 0;
    for (int i = 0; i < 6; i++) {
        printf("Ingrese valor ");
        scanf_s("%d", &v[i]);
    }
    printf("\nVector original: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", v[i]);
    }
    for (int i = 0; i < 3; i++) {
        temp = v[i];
        v[i] = v[5 - i];
        v[5 - i] = temp;
    }
    for (int i = 0; i < 6; i++) {
        if (v[i] % 2 == 0) {
            pares = pares + 1;
        }
    }
    printf("\nVector invertido: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", v[i]);
    }
    printf("\nCantidad de pares: %d\n", pares);
}*/