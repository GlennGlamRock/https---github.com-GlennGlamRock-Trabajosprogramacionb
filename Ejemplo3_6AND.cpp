//Luis Andre Contreras Alvarado 24040984
#include<windows.h>
#include<iostream>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	string nombre;
	int cal1,cal2,cal3,prom;
	cout<<"Dime tu nombre: ";
	cin>>nombre;
	cout<<"Dime la calificación 1: ";
    cin>>cal1;
    cout<<"Dime la calificación 2: ";
    cin>>cal2;
    cout<<"Dime la calificación 3: ";
    cin>>cal3;
    
    prom=(cal1+cal2+cal3)/3;
    cout<<nombre<<", tu promedio es: "<<prom<<", y tu calificación final es: ";
    if(prom>=90 and prom<=100){/*Aqui el And aplica lo mismo como el &&*/
    	cout<<"A";
	}
	else{
		if(prom>=80 and prom<=89){
			cout<<"B";
		}
		else{
			if(prom>=70 and prom<=79){
				cout<<"C";
			}
			else{
				if(prom>=60 and prom<=69){
					cout<<"D";
				}
				else{
					cout<<"NA";
				}
			}
		}
	}
	return 0;
}