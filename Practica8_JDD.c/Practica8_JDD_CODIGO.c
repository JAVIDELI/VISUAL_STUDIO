#include "Practica8_JDD.h"


void CUENTA_TERMINOS_SERIE()

{
	int numero_serie1;
	int numero_final1;
	numero_final1 = 1;
	numero_serie1 = 11;

	while (numero_final1<25)
	{
		printf("%i", numero_serie1);
		printf(" - ");
		numero_final1 = numero_final1 + 1;
		numero_serie1 = numero_serie1 + 11;
	}
}