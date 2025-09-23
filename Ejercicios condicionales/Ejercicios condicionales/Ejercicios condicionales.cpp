#include <stdio.h>
int main()
/* {
	int n1, n2;
	printf("Introduce 2 numeros, para ver un resultado\n");
	scanf_s("%d",&n1);
	scanf_s("%d",&n2);
	if (n1==n2)
	{
		printf("El resultado es: %d",n1 * n2);
	}
	else if (n1 > n2)
	{
		printf("El resultado es: %d", n1 - n2);
	}
	else
	{
		printf("El resultado es %d", n1 + n2);
	}
}*/
/*{
	int n1, n2, n3;
	printf("Introduce 3 numeros para ver el mayor\n");
	scanf_s("%d",&n1);
	scanf_s("%d",&n2);
	scanf_s("%d",&n3);
	if (n1>n2 && n1>n3)
	{
		printf("El numero mayor es:  %d",n1);
	}
	else if(n2 > n1 && n2 > n3)
	{
		printf("El numero mayor es:  %d", n2);
	}
	else
	{
		printf("El numero mayor es:  %d", n3);
	}
}*/
/* {
	int horasTrabajadas;
	int horasExtra = 40;
	int dinero=20;

	printf("Ingresa el numero de horas trabajadas\n");
	scanf_s("%d", &horasTrabajadas);
	if (horasTrabajadas <= 40)
	{
		printf("Tu paga es de %d", horasTrabajadas*dinero);
	}
	else
	{
		printf("Tu paga es de %d",(40*dinero)+((horasTrabajadas-40)*horasExtra));
	}
}*/
/* {
	int num_pulsaciones, edad;
	char sexo;
	printf("Introduce tu edad\n");
	scanf_s("%d", &edad);
	printf("Introduce tu sexo F o M\n");
	scanf_s(" %c", &sexo, 1);
	if (sexo =='F' || sexo=='f')
	{
		printf("Las pulsaciones por segundo son: %d", num_pulsaciones = (220 - edad) / 10);
	}
	else if (sexo == 'M' || sexo =='m')
	{
		printf("Las pulsaciones por segundo son: %d", num_pulsaciones = (210 - edad) / 10);
	}
	else
	{
		printf("Valor erroneo");
	}
}*/
/* {
	int compra_total=150;
	int color_bolita,resultado;
	printf("Ingresa el color de la bolita\n 1.Blanco\n 2.Verde\n 3.Amarilla\n 4.Azul\n 5.Roja\n");
	scanf_s("%d", &color_bolita);
	switch (color_bolita)
	{
	case 1:
		printf("El total es de: %d", compra_total);
		break;
	case 2:
		printf("El total es de: %d", resultado=compra_total-compra_total*0.10);
		break;
	case 3:
		printf("El total es de: %d", resultado=compra_total-compra_total*0.25);
		break;
	case 4:
		printf("El total es de: %d", resultado=compra_total-compra_total*0.50);
		break;
	case 5:
		printf("El total es de: %d", resultado=compra_total-compra_total*1.00);
		break;
	default:
		break;
	}

}*/
/*{
	int n1;
	printf("Ingresa un numero\n");
	scanf_s("%d", &n1);
	if (n1 % 3 == 0 && n1 % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (n1 % 5 == 0){
		printf("Buzz");
	}
	else if(n1 % 3 == 0)
	{
		printf("Fizz");
	}
	else
	{
		printf("El resultado es: %d", n1);
	}

}*/
/*{
	int n1=0;
	int resultado = 0;
	while (n1 >= 0) {
		resultado = resultado + n1;
		printf("Ingresa otro numero\n");
		scanf_s("%d", &n1);
	}

	printf("El resultado es: %d", resultado);
}*/