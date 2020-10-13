#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <stdio.h>
#include<fstream>
using namespace std;

#include "Practicas_en_ACER.h"
//FUNCIONES DE LA SOLUCION/
void Ejemplo09_001()
{
	/* Mostramos un caracter en la pantalla */
	putchar('A');
	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	//getchar();
	//return 0;
}
void Ejemplo09_002()
{
	{
		char letra;

		letra = 'A';		/* ahora letra almacena el caracter 'A'. */
		putchar(letra);	/* mostramos el valor de letra. */
		letra = letra + 1;	/* ahora letra almacena el caracter 'B'. */
		putchar(letra);	/* mostramos el valor de letra. */
		letra = letra + 1;	/* ahora letra almacena el caracter 'C'. */
		putchar(letra);	/* mostramos el valor de letra. */
		letra = letra + 1;	/* ahora letra almacena el caracter 'D'. */
		putchar(letra);	/* mostramos el valor de letra. */

		/* Hacemos una pausa hasta que el usuario pulse Intro */
		fflush(stdin);
		printf("\nPulse Intro para finalizar...");
		//getchar();

		//return 0;
	}

}
void Ejemplo09_003()
{
	char letra;

	/* Obtenemos un caracter del teclado y lo mostramos */
	letra = getchar();
	putchar(letra);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	//getchar();

	//return 0;
}
void Ejemplo09_004()
{
	char letra;

	/* Obtenemos un caracter del teclado y lo mostramos */
	letra = _getch();
	putchar(letra);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	//getchar();

	//return 0;

}
void Ejemplo09_005()
{
	char letra;

	/* Obtenemos un caracter del teclado y lo mostramos */
	letra = _getche();
	printf("\n");
	putchar(letra);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	

	//return 0;
}
void Ejemplo09_006()
{
	printf("Este texto sale en pantalla");

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	

	//return 0;
}
void Ejemplo09_007()
{
	printf("\tEste texto se muestra tabulado.");
	printf("\nEste texto se muestra en otra linea.\n");
	printf("\"Este texto se muestra entre comillas dobles\"");
	printf("\n\tEsta es la letra \'A\'.");

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");


	//return 0;
}
void Ejemplo09_008()
{
	int x = 10;

	printf("El valor de la variable x es: %d", x);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	

	//return 0;
}
void Ejemplo09_009()
{
	int entero = 10;
	float real = 2.5614;
	char caracter = 'F';

	/* Muestra el valor de la variable caracter. */
	printf("\n %c", caracter);

	/* Muestra el valor de la variable entero. */
	printf("\n %d", entero);

	/* Muestra el valor de la variable real. */
	printf("\n %f", real);

	/* Muestra el valor de la variable real con dos digitos de precision. */
	printf("\n %.2f", real);

	/* Muestra el valor de la variable entero con una anchura de 10 digitos. */
	printf("\n %10d", entero);

	/* Muestra el valor de la variable real con una anchura de 10 digitos. */
	printf("\n %10f", real);

	/* Muestra la direccion de memoria de la variable caracter. */
	printf("\n %p", &caracter);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	
}
void Ejemplo09_010()
{
	char caracter;

	/* Pedimos un caracter al usuario y lo almacenamos
	en la variable caracter. */
	printf("Escriba un caracter y pulse Intro: ");
	caracter = getchar();

	/* Mostramos el caracter y su codigo ASCII. */
	printf("\nEl codigo ASCII de %c es: %d", caracter, caracter);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	

}
void Ejemplo09_011()
{
	{
		int numero;
		char caracter;

		/* Pedimos un numero de 3 cifras al usuario. */
		printf("Escriba un numero de maximo 3 cifras: ");

		/* Lee del teclado un n£mero de 3 digitos como maximo
		y lo almacena en la variable numero. */
		scanf_s("%3d", &numero);
		/* Limpiamos el buffer del teclado. */
		fflush(stdin);

		/* Mostramos el valor de la variable numero. */
		printf("El valor de numero es: %d \n", numero);

		/* Pedimos un caracter al usuario. */
		printf("Escriba un caracter: ");

		/* Lee del teclado un caracter y lo almacena en
		la variable caracter. */
		scanf_s("%c", &caracter);

		/* Mostramos el valor de la variable caracter. */
		printf("El valor de caracter es: %c", caracter);

		/* Hacemos una pausa hasta que el usuario pulse Intro */
		fflush(stdin);
		printf("\nPulse Intro para finalizar...");
		

		//return 0;
	}
}
void Ejemplo09_012()
{
	int numero;

	/* Pedimos al usuario que escriba un mensaje. */
	printf("Escriba un numero: ");

	/* El numero que escriba el usuario lo almacenamos en la
	variable numero. */
	scanf_s("%d", &numero);

	/* Mostramos un mensaje indicando cual es su doble. */
	printf("\nEl doble de %d es %d", numero, numero * 2);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	

	//return 0;

}
void Ejemplo10_003()
{
	int numero;

	printf("Escriba un numero: ");
	scanf_s("%d", &numero);

	if (numero >= 0)
		printf("El numero escrito es positivo");
	else
		printf("El numero escrito es negativo");

	/* Esta linea ya esta fuera de la sentencia if-else. */
	printf("\nAdios");

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");

}
void Ejemplo10_004()
{
	int clave;

	printf("Escriba el numero de la contraseña: ");
	scanf_s("%d", &clave);

	if (clave == 123)
	{
		printf("El numero de la contraseña es correcto.\n");
		printf("Buenos dias.");
	}
	else
	{
		printf("El numero de la contraseña es incorrecto.\n");
	}

	/* Esta linea ya esta fuera de la sentencia if-else. */

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	

}
void Ejemplo10_018()

{
	int numero, n, resultado;

	for (numero = 1; numero <= 10; numero++)
	{
		printf("\nTabla de multiplicar del %d:", numero);

		for (n = 1; n <= 10; n++)
		{
			resultado = n * numero;
			printf("\n\t%d x %d = %d", n, numero, resultado);
		}

	}

}
void Ejemplo11_0001()
{
	char letras[10];	/* Para almacenar los caracteres. */
	int celda;			/* Para almacenar el numero de la celda. */
	int contador; 		/* Para contar las 'a' o 'A'. */

	/* Pedimos caracteres al usuario y los almacenamos en las
	celdas del array letras. */
	for (celda = 0; celda < 10; celda++)
	{
		printf("Escriba un caracter para la celda %d: ", celda);
		scanf_s("%c\n", &letras[celda]);
		fflush(stdin);
	}

	/* Antes de empezar a contar las 'a' o 'A' ponemos la variable
	contador con el valor 0. */
	contador = 0;

	/* Recorremos el array en busca de 'a' o 'A'. Si las encontramos
	aumentamos el valor de la variable contador, que es la que
	lleva la cuenta de cuantas hay. */
	for (celda = 0; celda < 10; celda++)
	{
		if ((letras[celda] == 'a') || (letras[celda] == 'A'))
			contador++;
	}

	/* Mostramos un mensaje indicando el numero de 'a' o 'A'
	que se han encontrado. */
	printf("\nHay %i 'a' y %i 'A'", contador);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");

}
void Ejercicio_2_arrays_libroC()
{


}
void Ejempol2_004()
{
	char nombre[70];
	printf("Escriba su nombre;\n");
	gets_s(nombre);
	printf("Hola; %s!\n,", nombre);
}
void Ejempol2_005()
{
	char saludo[50];
	strcpy_s(saludo, "Hola");
	printf("%s", saludo);
}
void Ejempol2_006()
{
	char palabra[10];
	char copia[10];
	printf("Escribe una palabra\n");
	gets_s(palabra);
	strcpy_s(copia, palabra);
	printf("%s", palabra);


}
void Ejempol2_007()
{
	char cadena1[10];
	char cadena2[10];
	strcpy_s(cadena1, "Ja");
	strcpy_s(cadena2, "vi");

	strcat_s(cadena1, cadena2);
	printf("%s", cadena1);
	fflush(stdin);
	printf("\n\nPulse Intro para finalizar...");
	
}
void Ejempol2_008()
{
	char nombre[10];
	char saludo[12];
	printf("Escriba su nombre\n");
	gets_s(nombre);
	strcpy_s(saludo, "Hola ");
	strcat_s(saludo, nombre);
	printf("%s", saludo);
	fflush(stdin);
	



}
void Ejempol2_009()
{
	char palabra1[20];
	char palabra2[20];
	printf("Escriba palabra1\n");
	gets_s(palabra1);
	printf("Escriba palabra2\n");
	gets_s(palabra2);

	if (strcmp(palabra1, palabra2) < 0)
		printf("\nLa palabra1 es menor que la palabra2.");
	else
		printf("\nLa palabra2 es menor que la palabra1.");

	if (strcmp(palabra1, palabra2) > 0)
		printf("\nLa palabra1 es mayor que la palabra2.");
	else
		printf("\nLa palabra2 es mayor que la palabra1.");


	if (strcmp(palabra1, palabra2) == 0)
		printf("\nLa palabra1 es igual a la palabra2.");
	else
		printf("\nLa palabra1 no es igual a la palabra2.");

	fflush(stdin);


}
void Ejempol2_010()
{
	char clave[] = "El jefe no dice la contrasenia";

	do
	{
		printf("Contrasenia: ");
		gets_s(clave);
	} while (strcmp(clave, "El jefe no dice la contrasenia") != 0);

	printf("\nAcceso concedido.");

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\n\nPulse Intro para finalizar...");


}
void Ejemplo12_011()
{//pasa una cadena de mayus a minus
	char frase[256];
	strcpy_s(frase, "A3F4G5H6");
	_strlwr_s(frase);
	printf("%s", frase);
	fflush(stdin);
}
void Ejemplo13_001()
{
	struct datos_familia
	{
		char nombre[50];
		int edad;
		int telefono[20];

	};

	struct datos_familia persona;

	printf("Escriba nombre:\n");
	gets_s(persona.nombre);
	printf("Escriba edad:\n");
	scanf_s("%d", &persona.edad);

	printf("Escriba telefono:\n");
	scanf_s("%i", persona.telefono);
	printf("\nLa edad de %s es %d", persona.nombre, persona.edad);
	printf(" y su telefono es %p\n\n", persona.telefono);



}
void Ejemplo_puntero()
{
	//variables normales

	char nombre[100];
	int edad;
	float estatura;

	printf("Escriba nombre:\n");
	gets_s(nombre);
	printf("Escriba edad:\n");
	scanf_s("%i", &edad);
	printf("Escriba estatura:\n");
	scanf_s("%f", &estatura);

	//variables tipo puntero y sus asignaciones
	char* dir_nombre; //puntero
	dir_nombre = nombre;//asignacion

	int* dir_edad;
	dir_edad = &edad;

	float* dir_estatura;
	dir_estatura = &estatura;
	//imprimimos con punteros

	printf("El nombre es: %s\n", dir_nombre);
	printf("La edad es:%i\n", *dir_edad);
	printf("La estatura es: %f\n\n", *dir_estatura);

	printf("Los datos de direccion de memoria de nombre es: %p\n", &dir_nombre);
	printf("Los datos de direccion de memoria deedad es:%p\n", &dir_edad);
	printf("Los datos de direccion de memoria de estatura es: %p\n", &dir_estatura);
	ofstream mifichero;

	mifichero.open("prueba.txt");
	if (!mifichero)
	{
		cout << "Error;No se ha podido crear el fichero.";
	}
	else
	{
		mifichero << ("El nombre es:\n");
		mifichero << ("El nombre es: %s\n", dir_nombre);
		mifichero << ("\n");

		mifichero << ("La edad es:\n");
		mifichero << ("La edad es:\n", *dir_edad);
		mifichero << ("\n");

		mifichero << ("La estatura es:\n");
		mifichero << ("La estatura es: %f\n\n", *dir_estatura);
		mifichero << ("\n");

		mifichero.close();

	}

}
void Ejemplo_array_con_bucle_while()
{//un array es una serie de valores de una misma variable almacenados,al comenzar por 0 se dice que es indexada

	//INICIALIZACION DEL ARRAY
	int tension_red[3] = { 230,225,228 };//o tambien asi:
	//tension_red[0] = 230;
	//tension_red[1] = 225;
	//tension_red[2] = 228;
	printf("Tensiones de red\n");
	int posicion_array = 0;
	//INICIALIZACION DEL ARRAY RECORRIENDOLO CON UN BUCLE WHILE
	while (posicion_array < 3)
	{
		printf("Tensiones de red %i = %i\n",posicion_array, tension_red[posicion_array]);
		posicion_array++;

	}
}
void Ejemplo_array_con_bucle_for()
{//un array es una serie de valores de una misma variable almacenados,al comenzar por 0 se dice que es indexada

	//INICIALIZACION DEL ARRAY
	int tension_red[3] = { 230,225,228 };//o tambien asi:
	//tension_red[0] = 230;
	//tension_red[1] = 225;
	//tension_red[2] = 228;
	printf("Tensiones de red\n");
	int posicion_array = 0;
	//INICIALIZACION DEL ARRAY RECORRIENDOLO CON UN BUCLE FOR
	for (posicion_array = 0; posicion_array < 3; posicion_array++)
		printf("Tension de red= %i\n", tension_red[posicion_array]);
	posicion_array++;

}
void Ejemplo_array_con_bucle_do_while()
{//un array es una serie de valores de una misma variable almacenados,al comenzar por 0 se dice que es indexada

	//INICIALIZACION DEL ARRAY
	int tension_red[3] = { 230,225,228 };//o tambien asi:
	//tension_red[0] = 230;
	//tension_red[1] = 225;
	//tension_red[2] = 228;
	printf("Tensiones de red\n");
	int posicion_array = 0;
	//INICIALIZACION DEL ARRAY RECORRIENDOLO CON UN BUCLE DO WHILE
	do
	{
		printf("Tensiones de red: %i =%i\n",posicion_array, tension_red[posicion_array]);
		posicion_array++;

		//tension_red[posicion_array] = 0;

	} while ((int )posicion_array < 3);
}
void Ejemplo_escritura_en_un_fichero()
{
	//variables normales

	char nombre[100];
	int edad;
	float estatura;

	printf("Escriba nombre:\n");
	gets_s(nombre);
	printf("Escriba edad:\n");
	scanf_s("%i", &edad);
	printf("Escriba estatura:\n");
	scanf_s("%f", &estatura);

	//variables tipo puntero y sus asignaciones
	char* dir_nombre; //puntero
	dir_nombre = nombre;//asignacion

	int* dir_edad;
	dir_edad = &edad;

	float* dir_estatura;
	dir_estatura = &estatura;
//CREAMOS UN FICHERO Y ESCRIBIMOS EN EL LOS DATOS INTRODUCIDOS EN LA CONSOLA

	ofstream mifichero;

	mifichero.open("prueba.csv");
	if (!mifichero)
	{
		cout << "Error;No se ha podido crear el fichero.";
	}
	else
	{
		mifichero << ("El nombre es:\n");
		mifichero << ("El nombre es: %s\n", dir_nombre);
		mifichero << ("\n");

		mifichero << ("La edad es:\n");
		mifichero << ("La edad es:\n", *dir_edad);
		mifichero << ("\n");

		mifichero << ("La estatura es:\n");
		mifichero << ("La estatura es: %f\n\n", *dir_estatura);
		mifichero << ("\n");

		mifichero.close();

	}



}
void Ejemplo_letras_y_cadenas()
	{
#define SIZE 8
	char a = 'A';
	char b[SIZE] = "hello";
	'M' + 25;
	printf("%c\n", 'M'+25);
	//en este ejemplo con #define SIZE se limita el numero de caracteres que puede ocupar la palabre entre comillas
	//M en ascii equivale a 77 y f a 102, 77+25=102
}
void Ejemplo_numeros_reales()
{
	float a = 3.566;
	double b = -5.4e-120;
	long double c = 3.54e32;
	float d = 222.36;
}
void Tabla_de_multiplicar_bucle_for()
{
	int numero;
	int resultado;
		for (numero = 1; numero <= 10; numero++)
		{
			resultado = numero * 2;
			printf("\n2 x %d=%d", numero, resultado);
		}
}
void Pruebas_codigo()
{


	int numero = 1;	/* "numero" vale 1. */

	/* Intentamos incrementar el valor de "numero". */
	numero = numero++;


	/* Mostramos el valor de "numero",
	que sigue siendo 1. */
	printf("%d", numero);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\n\nPulse Intro para finalizar...");
	getchar();

	return;
}

