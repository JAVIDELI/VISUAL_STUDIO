// Calculo_Seccion_Conductor_Cobre_Trifasico.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	float seccion;
	int longitud_cable = 80;
	int intensidad = 250;
	float const coseno = 0.9;
	const int cdt = 10;
	float dividendo = 1.73 * 0.017 * longitud_cable * intensidad * coseno;
	//float raizCuadrada = sqrt(dividendo);
	seccion = dividendo / cdt;
	printf("La seccion es; %f\n", seccion);

	ofstream mifichero;

	mifichero.open("prueba.csv");
	if (!mifichero)
	{
		cout << "Error;No se ha podido crear el fichero.";
	}
	else
	{
		mifichero << ("La longitud de la linea es:\n");
		mifichero << ("La longitud de la linea es: %i\n", longitud_cable);
		mifichero << ("\n");

		mifichero << ("La intensidad es:\n");
		mifichero << ("La edad es:\n", intensidad);
		mifichero << ("\n");

		mifichero << ("La caida de tension admisible es:\n");
		mifichero << ("La caida de tension admisible es: %f\n\n", cdt);
		mifichero << ("\n");
		mifichero << ("La seccion de calculo es:\n");
		mifichero << ("La seccion de calculo es: %f\n\n", seccion);
		mifichero << ("\n");

		mifichero.close();
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
