//Luis Andre Contreras Alvarado 24040984
#include<stdio.h>
#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);//Controla la salida
	SetConsoleCP(CP_UTF8);//Controla la entrada
	int x=10, y=3;
	int z = 10;
	int *dirz = &z;//Declara puntero (int*) y le asigna el contenido de la direccion de z
	cout<<x<<"+"<<y<<"="<<x+y<<"\n";
	cout<<x<<"-"<<y<<"="<<x-y<<"\n";
	cout<<x<<"*"<<y<<"="<<x*y<<"\n";
	cout<<x<<"/"<<y<<"="<<x/y<<"\n";
	cout<<x<<" residuo% "<<y<<"="<<x%y<<"\n";
	cout<<x<<" incrementado "<<++x<<" o bien "<<x+1<<"\n";
	cout<<x--<<" decrementado\n";
	printf("Dame un numero entero para saber si es + o -: ");
	cin>>x;
	x>0?cout<<"positivo ":cout<<" negativo";
	cout<<"\nDame un numero entero para saber si es +,- o 0: ";
	cin>>x;
	x>0?cout<<"positivo ":x<0?cout<<" negativo ":cout<<"es cero";//doble pregunta para considerar el cero
	
	x=0;
	cout<<"\nx="<<x<<"\n";
	cout<<"x++ = "<<x++<<"\n";
	cout<<"x="<<x<<"\n";
	cout<<"++x = "<<++x;
	cout<<"\nx="<<x<<"\n";
	cout<<"y="<<y<<". La direccion de y es "<<&y<<"\n";
	
	//Imprimir el valor de y, y la direccion almacenada en x
	cout << "El valor de z: " << z << endl;  //imprime el valor de y
	cout << "La direccion de z (&z) es: " << &z << endl;  //imprime la direccion de y
	cout<<"El contenido en *dirz: "<<*dirz<<endl;
	return 0;
}