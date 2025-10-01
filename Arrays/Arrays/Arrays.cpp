#include <stdio.h>
#include <math.h>
int main()
/*#define TOTALALUMNOS 7 //Por si aumenta la cantidad y sin ; con mayusculas
int main()
{
	// inizialiciar
	float alumunos[TOTALALUMNOS];
	float media = 0;
	for (int i = 0; i <TOTALALUMNOS; i++)
	{
		// Imprimir el contenido
		printf("La nota del numero %d es :\n", i+1);
		scanf_s("%g", &alumunos[i]);
	}
	for (int i = 0; i < TOTALALUMNOS; i++)
	{
		media = media + alumunos[i];
	}
	printf("%f", media /TOTALALUMNOS);

}*/
// Ejercicio 1
/* {
	int v1[3] = { 12,3,4 };
	int v2[3] = { 3,1,6 };
	int resultado = 0;
	//int resultado = (v1[0] * v2[0]) + (v1[1] * v2[1]) + (v1[2] * v2[2]);
	for (int i = 0; i < 3; i++)
	{
		resultado += v1[i] * v2[i];
	}
	printf("El resultado es: %d", resultado);


}*/
// Ejercicio 2
/* {
	int v1[10] = { 3,5,7,8,1,4,7,8,6,10 };
	int v2[10] = { 5,47,7,10,5,8,8,6,11 };
	int v3[10];
	for (int i = 0; i < 10; i++)
	{
		v3[i] = v1[i] + v2[i];
		printf("El resultado es: %d", v3[i]);
	}
}*/
// Ejercicio 3
/* {	//Forma de invertir valores
	int v1[6] = { 1,2,3,4,5,6 };
	int temp;
	for (int i = 0; i < 3; i++)//La mitad del array
	{
		temp = v1[i];
		v1[i] = v1[5 - i];
		v1[5 - i] = temp;
	}
	printf("Girado\n");
	for (int i = 0; i < 6; i++)
		{
			printf("%d", v1[i]);
		}
}*/
// Ejercicio 4
/* {
	int v[6];
	int mayor, menor;
	printf("Introduce 5 valores para determinar el numero mayor y menor\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &v[i]);
	}
	mayor = v[0];
	menor = v[0];
	for (int i = 0; i < 5; i++)
	{
		if (mayor<v[i])
		{
			mayor = v[i];
		}
		else if (menor > v[i]) {
			menor = v[i];
		}
	}
	printf("Valor maximo: %d | minimo %d", mayor, menor);
	v[5] = mayor + menor;
	for (int i = 0; i < 6; i++)
	{
		printf("%d", v[i]);
	}
*/
// Ejercicio 5
{
	int v[3];
	printf("Introduce 5 valores para determinar el numero mayor y menor\n");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &v[i]);
	}
}