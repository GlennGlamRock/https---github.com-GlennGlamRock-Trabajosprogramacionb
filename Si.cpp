//Luis Andre Contreras Alvarado 24040984
#include<stdio.h>
#include<iostream>
#include<windows.h>
using namespace std;
int main()//%c char//%d int//%f float//%s arreglar char
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char c;
	char letras[20]="Hexadecimal";
	int i;
	float f;
	i=10;
	f=123.45;
	c='x';
	printf("Impresion simple\n");
	printf("La variable char tiene un valor de %c\n varian=%d\n varfloat=%f\n cadena=%s",c,i,f,letras);
	system("pause");
	printf("Impresion sin espacios \n");
	printf("%d %f %c %s\n",i,f,c,letras);
	printf("Impresion con etiuetas\n");
	printf("Entero: %d Flotante: %f Caracter: %c Cadena: %s\n",i,f,c,letras);
	system("pause");
	printf("Dame un entro: ");
	fflush(stdin);
	scanf("%d",&i);
	puts("Dame un flotante: ");
	fflush(stdin);
	scanf("%f",&f);
	cout<<"Dame un caracter: ";
	fflush(stdin);
	//scanf("%c",8c);//No acepta caracteres especiales
	//cin>>c;//No acepta caracteres especiales
	c=getchar();//No acepta caracteres especiales
	printf("Dame una cadena: ");
	fflush(stdin);
	scanf("%[^\n]",letras);
	printf("entero: %d, flotante: %f, caracter: %c, cadena: %s\n",i,f,c,letras);
	i=12345;
	f=345.678;
	printf("Probando diferentes anchos en enteros: 3, 5 y 8 espacios\n");
	printf("%3d %5d %8d\n",i,i,i);
	printf("%3d %5d %8d\n",1,10,20);
	printf("%3d %5d %8d\n",i,i,i);
	printf("%d %d %d\n",1,10,20);
	system("pause");
	printf("Probando anchos en floats: 3, 10 y 13 espacios\n");
	printf("%3f %10f %13f\n",f,f,f);
	system("pause");
	printf("Probando anchos en exp: 3, 13 y 16 espacio\n");
	printf("%3e %13e %16e\n",f,f,f);
	system("pause");
	f=123.456;
	printf("Probando diferentes cantidades de cifras 7.0, 7.3 y 7.1\n");
	printf("%7.0f %7.3f %7.1f\n",f,f,f);
	system("pause");
	printf("Especificando solo las cifras decimales 1 decimal\n");
	printf("%.1f\n",f);
	system("pause");
	printf("Probando diferentes precisiones en cadenas: 10, 15 y 15.5 y .5\n");
	printf("%10s %15s 1%15.5s %.5s\n",letras,letras,letras,letras);
	system("pause");
	printf("Impresion con signo: %d\n",i);
	printf("Imresion con espacios al principio al final del dato y con ceros\n");
	printf("%3d %5d %8d\n",i,i,i);
	printf("%-3d %-5d %-8d\n",i,i,i);
	printf("%03d %05d %08d\n",i,i,i);//El cero significa que rellena las decimales con ceros
	system("pause");
	printf("%d en octal es %#o y en hexadecimal es %#x",i,i,i);
	
	return 0;
}