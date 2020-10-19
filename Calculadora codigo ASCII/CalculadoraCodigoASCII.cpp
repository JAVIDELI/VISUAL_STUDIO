#include <istream>
#include<stdio.h>
void caracter_asci();
char caracter;
int repetir =1;
int main(void)
{
      printf("\t// Este programa calcula cualquier caracter del teclado a codigo ASCII //\n \t                       // Javier Domingo @Control //\n\n\n");

while(repetir<=1000000)

{
 caracter_asci();
}
}
void caracter_asci()
{


  printf("Escriba caracter:\n");
   caracter=getchar();
   printf("El codigo ASCI de %c es: %d\n\n",caracter,caracter);
   fflush(stdin);
}
