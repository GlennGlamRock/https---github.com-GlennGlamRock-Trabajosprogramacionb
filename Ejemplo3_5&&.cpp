//Luis Andre Contreras Alvarado 24040984
#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int uno,dos,tres,mayor;
	char nombre[20];
	gotoxy(25,2);
	cout<<"INTITUTO TECNOLOGICO DE DURANGO";
	gotoxy(28,3);
	cout<<"Fundamentos de Programación";
	gotoxy(14,4);
	cout<<"Programa que determina cual es el mayor de 3 números";
	gotoxy(10,5);
	cout<<"Dime tu nombre: ";
	gets(nombre);
	gotoxy(10,6); cout<<"Dime el primer número: "; cin>>uno;
	gotoxy(10,7); cout<<"Dime el segundo número: "; cin>>dos;
	gotoxy(10,8); cout<<"Dime el tercero número: "; cin>>tres;
	
	if(uno>dos && uno>tres){/*El  && es para una doble condición; es decir, si una no cumple la primera condición
	                          la otra hace su trabajo*/
		mayor=uno;
		
	}
	else{
		if(dos>uno && dos>tres){
			mayor=dos;
		}
		else{
			if (tres>uno && tres>dos){
				mayor=tres;
			}
			else{
			
			    mayor=-1;} //numero arbitriario
		}
	}
	gotoxy(10,10);
	if(mayor==-1){
		cout<<"Los números son iguales";
	}
	else{
	cout<<nombre<<" el mayor de los tres números es: "<<mayor;}

	return 0;
}