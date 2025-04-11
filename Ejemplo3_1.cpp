//Luis Andre Contreras Alvarado 24040984
#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout<<"Hola esta es una prueba de limpieza de pantalla."<<endl;
	system("pause");
	system("cls");//Esto significa limpiar la pantalla
	/*Básicamente elimina todo texto generado en pantalla de la consola*/
	system("pause");
	cout<<"La pantalla se ha limpiado."<<"\n";
	//investigar las funciones: Void, gotoxy y COORD
	
	return 0;
	
}