//Luis Andre Contreras Alvarado 24040984
#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);	
	int cal;
	cout<<"Dime una calificación ";
	cin>>cal;
	if(cal>=70){
		cout<<"Aprobatoria\n";
	}
	else{
		cout<<"No Aprobatoria\n";
	}
	system("pause");
	system("cls");
	
	cout<<"Dime otro calificación: ";
	cin>>cal;
	if (cal>=70){
		cout<<"Suficiente\n";
	}
	else{
		cout<<"No Suficiente\n";
	}
	system("pause");
	system("cls");
	
	cout<<"Dime una calificación: (Evaluando con ?) ";
	cin>>cal;
	if(cal>=70){
		printf("La calificación obtenida es: ");
		cout<<"Suficiente\n";
	}
	else{
		printf("La calificación obtenida es: ");
		cout<<"No Suficiente\n";
	}
	
	
	return 0;
}