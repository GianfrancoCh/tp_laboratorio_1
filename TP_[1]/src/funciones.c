

#include <stdio.h>
#include <stdlib.h>


float PedirDato(char* mensaje)
{

	float datoIngresado;
	printf("%s", mensaje);
	scanf("%f", &datoIngresado);
	while(datoIngresado<0)
	{
		printf("Error, %s", mensaje);
		scanf("%f", &datoIngresado);
	}
	return datoIngresado;
}

