#include <stdio.h>
int main()
//Ejercicio 1
/* {
	int n;
	for ( n= 0; n <=100; n=n+5)
	{
		printf("%d\n",n);
	}
}*/
// Ejercicio 2
/* {
	int n = 0;
	while (n <=100)
	{
		printf("%d\n", n);
		n = n + 5;
	}
}*/
// Ejercicio 3
/* {
	int n = 0;
	do
	{
		printf("%d\n", n);
		n = n + 5;
	} while (n <=100);
}*/
// Ejercicio 4
/* {
	int n;
	for ( n= 320; n>=160; n=n-20)
	{
		printf("%d\n", n);
	}
}*/
// Ejercicio 5
/* {
	int n=320;
	while (n>=160)
	{
		printf("%d\n", n);
		n = n - 20;
	}
}*/
//Ejercicio 6
/* {
	int n = 320;
	do
	{
		printf("%d\n", n);
		n = n - 20;
	} while (n>=160);
}*/
//Ejercicio 7
/* {
	int pin = 1234;
	int abierta = 0;
	int intento;
	do
	{
		printf("Introduce la contra\n");
		scanf_s("%d", &intento);
		if (intento==pin){
			printf("Caja fuerte se ha abierto satisfactoriamente\n");
			abierta = 1;
		}else{
			printf("Lo siento, esa no es la combinación\n");
		}
	} while (abierta==0);
}*/
// Ejercicio 8
/* {
	int pin = 1234;
	int abierta = 0;
	int intentos = 0;
	int intento;

	while (intentos < 4 && abierta == 0) {
		printf("Introduce la combinacion\n ");
		scanf_s("%d", &intento);

		if (intento == pin) {
			printf("La caja fuerte se ha abierto satisfactoriamente\n");
			abierta = 1;
		}else {
			printf("Lo siento, esa no es la combinacion\n");
		}
		intentos = intentos + 1;
	}
	if (abierta == 0) {
		printf("Has agotado tus 4 intentos.\n");
	}
}*/
// Ejercicio 9
/* {
	int n, contador;
	printf("Introduce un numero\n");
	scanf_s("%d", &n);
	contador = 0;
	if (n==0){
		contador = 1;
	}
	while (numero!=0){
		n = n / 10;
		contador = contador + 1;
	}
	printf("El numero tiene %d digitos\n", contador);
}*/
// Ejercicio 10
/*{
	int n, i, primo;
	scanf_s("%d", &n);
	if (n<=1)
	{
		printf("El numero no es primo\n");
	}
	else {
		i = 2;
		primo = 1;
		while (i < n && primo == 1) {
			if (n % i == 0) {
				primo = 0;
			}
			i = i + 1;
		}
	}
	if (primo == 1) {
		printf("Numero primo\n");
	}
	else {
		printf("No primo\n");
	}
}*/
