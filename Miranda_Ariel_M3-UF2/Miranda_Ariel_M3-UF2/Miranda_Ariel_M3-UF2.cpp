#include <stdio.h>
#include <math.h>
void operacion(int n1, int n2, char oper, float* result, int* error);
int menu();
int factorial(int a);
int main()
{
	int n1=0,n2=0,error=0;
	char oper = 0;
	float result = 0.0;
	do
	{
		oper = menu();
		if (oper=='s')
		{
			printf("Adios");
			return 0;
		}
		printf("Introduce un numero\n");
		scanf_s("%d", &n1);
		printf("Introduce otro numero\n");
		scanf_s("%d", &n2);
		operacion(n1, n2, oper, &result, &error);
		if (oper == '!') {
			//resultado en las operaciones
		}
		else
		{
			if (error==1)
			{
				printf("Resultado: %.2f", result);
			}
			else {
				printf("Error en la operacion");
			}
		}
	} while (oper !='s');
	return 0;
}

void operacion(int n1, int n2, char oper, float* result, int* error)
{
	*error = 1;
	switch (oper)
	{
	case '+':
		*result=n1 + n2;
		break;
	case '-':
		*result=n1 - n2;
		break;
	case '*':
		*result = n1 * n2;
		break;
	case '/':
		if (n2==0)
		{
			*error = -1;
		}
		else {
			*result = (float)n1 / n2;
		}
		break;
	case '^':
		*result = pow(n1, n2);
		break;
	case '!':
		printf("Factorial de %d es %d\n", n1, factorial(n1));
		printf("Factorial de %d es %d\n", n2, factorial(n2));
		break;
	default:
		*error = -1;
		break;
	}

}

	int menu()
{
	char op;
	printf("Suma=+\nResta=-\nMultiplicar=*\nDividir=/\nPotencia=^\nFactorial=!\nSalir=s\n");
	scanf_s(" %c", &op,1);
	return op;
}

	int factorial(int a)
	{
		int f = 1;
		if (a<0)
		{
			return 0;
		}
		for (int i = 1; i <= a; i++)
		{
			f *= i;
		}
		return f;
	}
