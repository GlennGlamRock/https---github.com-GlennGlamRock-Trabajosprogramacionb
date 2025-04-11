//Luis André Contreras Alvarado 24040984
#include <stdio.h>//gets y puts son cadenas y los lee, y el fflush es para limpiar el bufer de la entrada
//#include<stdio.h> //system
//#include <iostream> //cin,cout
#include <conio.h>//getch
//using namespace std;
int main()
{
	char cad[80];//Declara un arreglo 80 posiciones char llamado cad
	char c;//Declara una variable de tipo char (solo para un caracter)
	puts("dame una cadena");//Imprime en pantalla la cadena argumento
	gets(cad);//Lee por teclado la variable argumento
	puts("Ejemplo de impresion con puts");
	puts(cad);//Imprime en pantalla la variable argumento
	printf("ejemplo de impresion con printf: ");
	printf (cad);
	printf("\impresiona una tecla y continua automaticamente: ");
	c=getche();//Presiona cualquier tecla para seguir avanzando con el algoritmo
	puts("\n");
	printf("Presiona una tecla y presiona enter");
	c=getchar();
	putchar(c);//sirve para capturar un dato de tipo char
	printf("\n presiona una tecla y continua automaticamente: ");
	fflush(stdin);
	c=getch();//lee un caracter sin que aparezca
}