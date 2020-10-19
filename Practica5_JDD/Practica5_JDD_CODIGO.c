#include"Practica5_JDD.h"



void CALCULO_NOTAS() {

	int nota1;
	int nota2;
	int nota3;
	int promedio;
	nota1 = 1;
	nota2 = 2;
	nota3 = 3;
	promedio = (nota1 + nota2 + nota3)/3;



	printf("Programa para calcular APROBADOS \n\n");

	printf("Calcula si esta APROBADO:\n\n");


	printf("Escriba nota1:\n");
	scanf_s("%i", &nota1);
	printf("Escriba nota2:\n\n");
	scanf_s("%i", &nota2);
	printf("Escriba nota2:\n\n");
	scanf_s("%i", &nota3);

	if ((nota1 + nota2 + nota3)/3 >= 7)
	printf("APROBADO\n\n;");
	else

		if ((nota1 + nota2 + nota3) / 3 >= 4)
	printf("REGULAR\n\n;");


		else
			printf("SUSPENDIDO\n\n;");


}
