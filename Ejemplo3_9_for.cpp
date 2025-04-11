//Luis Andre Contreras Alvarado 24040984
#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,y;
	float z;
	/*
	for(x=1;x<=100;x++){//x=x+c
		cout<<x<<", ";
	}
	cout<<"\n";
	system("pause");
	
	for(x=100;x!=-5;x-=5){//x=x-c
		z=sqrt(x);
		cout<<"La raíz cuadrada de "<<x<<" es "<<z<<"\n";;
	}
	cout<<"\n";
	system("pause");
	
	x=10;
	for(y=10;y!=x;++y){
		cout<<y<<" Dentro del ciclo (nunca entra)\n";
	}
	cout<<y<<" Fuera del ciclo\n";
	system("pause");
	
	for(x=0,y=0;x+y<10;++x){
		cout<<"Dame el valor de y: ";
		cin>>y;
		cout<<x<<"+"<<y<<"="<<x+y<<" El diclo continúa mientras la suma sea <10\n";
	}
	cout<<x<<"+"<<y<<"="<<x+y<<" Fuera del ciclo\n";
	system("pause");
	system("cls");
	
	for(x=0;x!=123;){
		cout<<"Dame el valor de x, 123 para terminar el ciclo: ";
		cin>>x
	}
	system("pause");
	
	x=1;
	for(;x<=10;){
		printf("%d\n,x")
		++x;
	}
	system("pause");
	
	for(;;){
		printf("101101000010111010010");
    }//Esto es un ciclo infinito
    
    
    cout<<"Hola mundo\n";
    for(x=0;x<1000;x++);//Es un ciclo que concluye hasta aquí
         cout<<"Hola mundo después de unos cuantos segundos";//No es parte del ciclo

   int tabla;
   cout<<"Dime cual tabla quieres generar: ";
   cin>>tabla;
   for(x=1;x<11;x++){
   	cout<<tabla<<" X "<<x<<" = "<<tabla*x<<"\n";
   }
   for(x=1;x<11;x++){
   	printf("%2d X %d = %3d\n",tabla,x,tabla*x);
   }
   */
   
   int cuantos,suma;
   float promedio;
   cuantos=0;
   suma=0;
   for(x=1;x!=-1;){
   	cout<<"Dame un número, -1 para terminar: ";
   	cin>>x;
   	cuantos++;
   	suma=suma+x;
   }
   suma++;
   cuantos=cuantos-1;
   promedio=suma/cuantos;
   cout<<"Fueron "<<cuantos<<" numeros\n";
   cout<<"La sumatoria es="<<suma<<"\n";
   cout<<"El promedio es="<<promedio<<"\n";
   
   
    
	return 0;
}