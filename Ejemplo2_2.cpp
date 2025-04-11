//Luis Andre Contreras Alvarado 24040984
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char cad[80];
	int i,j,k;
	puts("Usando scanf con juegos de inspección");
	puts("Dame una cadena con espacios");
	scanf("%s",cad);
	cout<<cad<<"\n";
	fflush(stdin);
	puts("Dame una cadena de mayusculas y espacios");
	scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]",cad);//[A-Z]
	puts(cad);
	puts("Dame una cadena de mayusculas, minusculas,Ñ,ñ y espacios\n");
	fflush(stdin);
	scanf("%[ a-zA-ZÑñ]",cad);//si le pongo un punto o guion dentro de los corchetes el programa marcará error
	cout<<cad<<"\n";
	puts("Dame una cadena con cualquier caracter y termina con enter");
	fflush(stdin);
	scanf("%[^\n]",cad);//el sircunflejo "^" captura cualquier cosa menos el "enter"
	puts(cad);
	puts("Dame 3 numeros entero de maximo 3 cifras");
	scanf("%3d %3d %3d",&i,&j,&k);//determine la cantidad de cifras que puede tener en una sola variable de cada una
	printf("%d %d %d",i,j,k);//debe de corresponder en la cantidad de cifras que tenga aquí, sino marcará error
	printf("\a");
	return 0;
}