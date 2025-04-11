//Luis Andre Contreras Alvarado 24040984
#include<iostream>
#include<windows.h>
using namespace std;

int main(){
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int limit=100;
int n1=0;
int n2=1;
cout<<"Número: "<<n1<<" y el otro: "<<n2;
cout<<"\n";
int s=n1+n2;
/*La función "While" sirve principalmente para repetir un proceso mediante una condición*/
do{ 
	cout<<s<<"\n";
	n1=n2;
	n2=s;
	s=n1+n2;
}while(s<limit);



return 0;

}