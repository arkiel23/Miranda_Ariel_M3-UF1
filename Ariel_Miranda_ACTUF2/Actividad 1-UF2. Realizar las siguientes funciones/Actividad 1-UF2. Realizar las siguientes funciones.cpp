#include <stdio.h>
void Ejercicio1();
void Ejercicio2();
void Ejercicio3();
void Ejercicio4();
void Ejercicio5();
void Ejercicio6();

int Suma(int n1, int n2);
int Resta(int n1, int n2);
int Multiplicacion(int n1, int n2);
float Division(float n1, float n2);
int Negativo(int n);
void Saludo();
void Media3(float nota1, float nota2, float nota3);
float Media2(float nota1,float nota2);
int Par(int n);
int main()
{
	//Ejercicio1();
	//Ejercicio2();
	//Ejercicio3();
	//Ejercicio4();
	//Ejercicio5();
	//Ejercicio6();

}

void Ejercicio1()
{
	int numero;
	printf("Ingresa un numero\n");
	scanf_s("%d", &numero);
	int resultado = Par(numero);
	printf("El resultado es %d", resultado);
}

void Ejercicio2()
{
	float x, y;
	printf("Introduce un numero\n");
	scanf_s("%f", &x);
	printf("Introduce otro numero\n");
	scanf_s("%f", &y);

	float media=Media2(x,y);
	printf("La media de las 2 notas es %.2f", media);
}

void Ejercicio3()
{
	float x, y, z;
	printf("Introduce un numero\n");
	scanf_s("%f", &x);
	printf("Introduce otro numero\n");
	scanf_s("%f", &y);
	printf("Introduce otro numero\n");
	scanf_s("%f", &z);
	
	Media3(x,y,z);
}

void Ejercicio4()
{
	Saludo();
}

void Ejercicio5()
{
	int numero;
	printf("Introduce un numero\n");
	scanf_s("%d", &numero);
	int resultado=Negativo(numero);
	printf("El resultado es %d", resultado);
}

void Ejercicio6() 
{
	int n1, n2;
	printf("Introduce un numero\n");
	scanf_s("%d", &n1);
	printf("Introduce otro numero\n");
	scanf_s("%d", &n2);
	
	printf("El resultado de la suma: %d\n", Suma(n1, n2));
	printf("El resultado de la resta: %d\n", Resta(n1, n2));
	printf("El resultado de la multi %d\n", Multiplicacion(n1, n2));
	if (n2 == 0) printf("Error");
	else printf("Division es %.2f", Division(n1, n2));
}

int Suma(int n1, int n2)
{
	return n1+n2;
}

int Resta(int n1, int n2)
{
	return n1-n2;
}

int Multiplicacion(int n1, int n2)
{
	return n1*n2;
}

float Division(float n1, float n2)
{
	return n1 / n2;
}

int Negativo(int n)
{
	if (n<0)
	{
		return 1;
	}
	else {
		return 0;
	}
	
}

void Saludo()
{
	printf("Hola");
}

void Media3(float nota1, float nota2, float nota3)
{
	float media;
	media = (nota1 + nota2 + nota3) / 3;
	printf("La media es calculada es %.2f", media);
}

float Media2(float nota1, float nota2)
{
	return (nota1 + nota2) / 2;
}

int Par(int n)
{
	if (n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

	return 0;
}
