// Pacientes.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <stdio.h>
#include "Pacientes.h"
#include<stdlib.h>

void pacientes()
{

	//variables normales:

	char nombre[100];
	int edad;
	float estatura;
	char cerrar;


	//asignamos a las variables puntero el nombre de la variable normal:

	char* dir_nombre; //puntero
	dir_nombre = nombre;//asignacion

	int* dir_edad;
	dir_edad = &edad;

	float* dir_estatura;
	dir_estatura = &estatura;


	//pedimos datos por la consola:
	printf("Programa que escribe en pantalla los datos de las variables; nombre, edad y estatura, introducidos previamente a traves de la consola y nos muestra el resultado en pantalla y  en que posiciones de memoria se almacenan estos datos a traves de sus correspondientes variables puntero\n\n\n");
	printf("Pedimos datos:\n\n\n");
	printf("Escriba nombre:\n");
	gets_s(nombre);
	printf("Escriba edad:\n");
	scanf_s("%i", &edad);
	printf("Escriba estatura:\n\n\n");
	scanf_s("%f", &estatura);


	//imprimimos con punteros los datos introducidos a traves de la consola:
	printf("Imprimimos en pantalla los datos introducidos mediante punteros:\n\n\n");
	printf("El nombre es: %s\n", dir_nombre);
	printf("La edad es:%i\n", *dir_edad);
	printf("La estatura es: %f\n\n", *dir_estatura);
	//imprimimos las direcciones de memoria que ocupan los punteros:
	printf("Imprimimos los datos de los espacios de memoria ocupados por los punteros:\n\n\n");
	printf("Los datos de direccion de memoria de nombre es: %p\n", &dir_nombre);
	printf("Los datos de direccion de memoria deedad es:%p\n", &dir_edad);
	printf("Los datos de direccion de memoria de estatura es: %p\n\n\n\n\n\n\n", &dir_estatura);

	system("pause>>null");
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
