// Practica9_JDD.c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Practica9_JDD.h"

	void CUENTA_PARES_IMPARES()

	{
		int pares;
		int impares;
		int valor;
		int x;
		int n;
		x = 1;
		pares = 0;
		impares = 0;
		printf("Cuantos numeros escribira:");
		scanf_s("%i", &n);
		while (x <= n)
		{
			printf("Ingrese el valor:\n");
			scanf_s("%i", &valor);
			if (valor % 2 == 0)

			{
				pares = pares + 1;
			}
			else
			{
				impares = impares + 1;

			}
			x = x + 1;



			printf("Cantidad de pares:\n");
			printf("%i\n", pares);
			printf("-\n");
			printf("Cantidad de impares:\n");
			printf("%i\n", impares);
		}
	}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
