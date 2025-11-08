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
void Media3(float nota1 = 5.43, float nota2 = 6.89, float nota3 = 10);
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
	int resultado=Par(5);
	printf("El resultado es %d", resultado);
}

void Ejercicio2()
{
	float media=Media2(3.66,9.7);
	printf("La media de las 2 notas es %.2f", media);
}

void Ejercicio3()
{
	Media3();
}

void Ejercicio4()
{
	Saludo();
}

void Ejercicio5()
{
	int resultado=Negativo(5);
	printf("El resultado es %d", resultado);
}

void Ejercicio6()
{
	int suma = Suma(23, 4);
	int resta = Resta(23, 4);
	int multiplicacion = Multiplicacion(23, 4);
	float division = Division(12, 0);
	printf("El resultado de las operaciones son Suma:%d\n Resta:%d\n Multiplicacion %d \n Division %.2f", suma, resta, multiplicacion, division);
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
	if (n2==0)
	{
		printf("Error");
	}
	else
	{
		return n1 / n2;
	}
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
