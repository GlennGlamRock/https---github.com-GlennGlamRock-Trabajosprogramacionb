//Luis Andre Contreras Alvarado 24040984
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	int entera;
	float flotante;//EL termino flotante pide un numero con decimales
	char letra,palabra[50];
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout<<"Lectura de datos usando scanf\n";
	cout<<"Dame un valor entero: ";
	fflush(stdin);
	scanf("%d",&entera);//el % es para poder mostrar en cadena un caracter entero y la D o la I es para determinar un entero
	cout<<"Dame un valor flotante: ";
	fflush (stdin);
	scanf("%f",&flotante);//la f es para determinar un flotante
	cout<<"Dame un valor char: ";
	fflush(stdin);
	scanf("%c",palabra);//sin espacios //y la c es para determinar un caracter tipo char
	puts("impresion de los valores\n");
	cout<<entera<<"\n";
	cout<<flotante<<"\n";
	putchar(letra);
	putchar('\n');
	puts(palabra);
	system("pause");//esta funcion hace una pausa y automaticamente muestra un texto para continuar
	cout<<"Dame un entero, un flotante, un char y una cadena sin espacios: ";
	fflush(stdin);
	scanf("%d %f %c %s",&entera,&flotante,&letra,palabra);//la s determina una cadena sin espacios
	puts("Impresion de los valores\n");
	cout<<entera<<"\n";
	cout<<flotante<<"\n";
	putchar(letra);
	putchar('\n');
	puts(palabra);
	putchar('\n');
	cout<<fixed;
	cout.precision(4);
	cout<<"Impresion con precision.\n El valor flotante a 4 decimales: "<<flotante<<"\n";
	cout.precision(2);
	cout<<"Con 2 decimales: "<<flotante<<endl;
	cout.precision(6);
	cout<<"Con 6 decimales: "<<flotante<<endl;
	cout.unsetf(ios::fixed);
	cout<<"Sin formato fijo: "<<flotante<<endl;//imprime sin formato fijo
	return 0;
}