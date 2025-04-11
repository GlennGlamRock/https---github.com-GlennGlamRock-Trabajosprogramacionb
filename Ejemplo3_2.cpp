//Luis Andre Contreras Alvarado 24040984
#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy (int x, int y){//Este parámetro seguira numeros enteros con coordenadas, para eso se usa el "gotoxy"
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);//Este ayuda a identificar 
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	cout<<"Hola, esta es una prueba de la funcion gotoxy."<<endl;
	gotoxy(1,1);//Mueve el cursor a la columna 1, renglón 1 a un acostado de la pantalla de la consola
	
	cout<<"Este letrero comienza en la posición (1,1).";
	gotoxy(30,2);//Mueve el cursor a la columna 30, renglon 2
	
	cout<<"Este letrero comienza en la posición (1,20).";
	system("pause");
	system("cls");
	
	cout<<"                   Impresión en las 4 esquinas";
	gotoxy(0,0);
	cout<<"*";
	gotoxy(80,0);
	cout<<"*";
	gotoxy(0,19);
	cout<<"*";
	gotoxy(80,19);
	cout<<"*";
	
	return 0;
}