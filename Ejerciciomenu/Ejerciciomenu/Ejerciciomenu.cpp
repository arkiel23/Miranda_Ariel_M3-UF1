#include <stdio.h>

int Selector();
void Gestor(float* sensibilidad);
void Total(float* sens);
void Parcial(float* sens);
void Desactivar(float* sens);
int main()
{
	//Parametro es una copia
	//Referencia (*) &
	float sensibilidad;
	Gestor(&sensibilidad);
	printf("La sensibilidad esta en modo %.2f", sensibilidad);
	
}

int Selector()
{
	int x;
	do
	{
		scanf_s("%d", &x);
	} while (!(x >= 0 && x <= 4));

	return x;
}

void Gestor(float *sensibilidad)
{
	
	switch (Selector())
	{
	case 0:
		Desactivar(sensibilidad);
		break;
	case 1:
		Parcial(sensibilidad);
		break;
	case 2:
		Total(sensibilidad);
		break;
	default:
			break;
	}
}

void Parcial(float* sens)
{
	*sens = 0.5;
}

void Desactivar(float* sens)
{
	*sens = 0;
}

void Total(float* sens)
{
	*sens = 1;
}