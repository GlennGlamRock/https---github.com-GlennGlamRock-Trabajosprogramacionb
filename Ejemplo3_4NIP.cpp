//Luis Andre Contreras Alvarado 24040984
#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int nip=24040984;
	int intento=0;
	cout<<"                      Teclea tu NIP: \n";
	cin>>intento;
	
	if(intento==nip){
		printf("**Bienvendio**");
	}
	else{
		printf("**NIP Incorrecto. Vuelve a intentarlo mas tarde");
	}
	if(intento>nip){
		cout<<"Nip demasiado alto";
	}
	else{
		cout<<"Nip demasiado bajo";
	}
	return 0;
}