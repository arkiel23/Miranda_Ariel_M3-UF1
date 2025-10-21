#include <stdio.h>
#include <string.h>
int main()
//Ejercicio 1
{
	char palabra[100] = { 0 };
	char palabra_invertida[100];
	int longitud, palindromo,i;
	printf("Dame un texto\n");
	scanf_s("%s", palabra,100);
	printf("La palabra dada es: %s\n", palabra);

	longitud = strlen(palabra);
	for (int i = 0; i < longitud; i++)
	{
		palabra_invertida[i] = palabra[longitud - 1 - i];
	}
	palabra_invertida[longitud] = '\0';
	printf("La palabra al reves es: %s\n",palabra_invertida);
	palindromo = 1;
	for (int i = 0; i < longitud; i++) 
	{
		if (palabra[i] != palabra_invertida[i]) {
			palindromo = 0;
		}
	}
	if (palindromo == 1) {
		printf("La palabra es palindroma\n");
	}
	else {
		printf("La palabra no es palindroma\n");
	}
}
//Ejercicio 2
/* {
	char frase[100];
	int total;
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	printf("Dame un texto \n");
	fgets(frase, 100, stdin);
	total = strlen(frase);
	if (frase[total - 1] == '\n') {
		total -= 1;
	}
	printf("La frase es de %d\n", total);
	for (int i = 0; i < total; i++)
	{
		if (frase[i] == 'a' || frase[i] == 'A') {
			a += 1;
		}
		else if (frase[i] == 'e' || frase[i] == 'E') {
			e += 1;
		}
		else if (frase[i] == 'i' || frase[i] == 'I') {
			i += 1;
		}
		else if (frase[i] == 'o' || frase[i] == 'O') {
			o += 1;
		}
		else if (frase[i] == 'u' || frase[i] == 'U') {
			u += 1;
		}
	}
		if (a > 0) {
			printf("La letra a aparece %d veces en un total de %d\n",a,total);
		}
		if (e > 0) {
			printf("La letra e aparece %d veces en un total de %d\n",e,total);
		}
		if (i > 0) {
			printf("La letra i aparece %d veces en un total de %d\n",i,total);
		}
		if (o > 0) {
			printf("La letra o aparece %d veces en un total de %d\n",o,total);
		}
		if (u > 0) {
			printf("La letra u aparece %d veces en un total de %d\n",u,total);
		}
	}
	*/
//Ejercicio 3
/* {
	char cadena[100];
	char resultado[100];
	int n = 0;
	int longitud;
	printf("Introduce un texto\n");
	fgets(cadena, 100, stdin);

	longitud = strlen(cadena);
	printf("Texto orginal: %s", cadena);
	printf("Texto con puntos: ");
	for (int i = 0; i < longitud; i++)
	{
		if (cadena[i] == 'a' || cadena[i] == 'A' || cadena[i] == 'e' || cadena[i] == 'E' || cadena[i] == 'i' || cadena[i] == 'I'
			|| cadena[i] == 'o' || cadena[i] == 'O' || cadena[i] == 'u' || cadena[i] == 'U')
		{
			printf(".");
		}
		else
		{
			printf("%c", cadena[i]);
		}
	}
}*/
//Ejercicio 4
/* {
	char texto[100];
	int longitud, vocales = 0, consonantes = 0;
	printf("Escribe un texto\n");
	fgets(texto, 100, stdin);
	longitud = strlen(texto);

	for (int i = 0; i < longitud; i++)
	{
		if (texto[i] >= 'a' && texto[i] <= 'z' || texto[i] >= 'A' && texto[i] <= 'Z') {
			if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
				texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U') {
				vocales += 1;
			}
			else
			{
				consonantes += 1;
			}
		}
	}
	printf("El texto tiene %d vocales\n", vocales);
	printf("El texto tiene %d consonantes\n", consonantes);
}*/
//Ejercicio 5
/* {
	char frase[200];
	char palabra[50];
	int l_frase, l_palabra;
	printf("Introduce un texto\n");
	fgets(frase, 200, stdin);

	l_frase = strlen(frase);
	if (frase[l_frase - 1] == '\n') {
		frase[l_frase - 1] = '\0';
		l_frase -= 1;
	}
	printf("\nPalabra: \n");
	l_palabra = 0;
	for (int i = 0; i < l_frase; i++)
	{
		if (frase[i] == ' ' || frase[i] == '\0') {
			if (l_palabra > 0) {
				palabra[l_palabra] = '\0';
				printf("%s %d\n", palabra, l_palabra);
				l_palabra = 0;
			}
		}
		else {
			palabra[l_palabra] = frase[i];
			l_palabra += 1;
		}
	}
}*/
//Ejercicio 6
/* {
	char frase[100];
	int longitud, espacio = 0;
	printf("Dame una frase\n");
	fgets(frase, 100, stdin);
	longitud = strlen(frase);
	printf("Frase original: %s", frase);
	printf("Frase final: ");

	for (int i = 0; i < longitud; i++)
	{
		if (frase[i] == ' ') {
			if (espacio == 0) {
				printf("%c", frase[i]);
				espacio = 1;
			}
		}
		else
		{
			printf("%c", frase[i]);
			espacio = 0;
		}
	}
}*/