//Luis Andre Contreras Alvarado 24040984
Proceso Practice
	Definir a Como Entero;
	Definir b Como Entero;
	Definir num Como Entero;
	Definir x Como Entero;;
	a<-5;
	b<-5;
	Escribir "5 MOD de 5.", " El residuo de la division es ",a%b;
	Escribir "Escribe un numero cualquiera para compararlo con x.";
	x<-10;
	Leer num;
	//El "Si" sirve como funcion para poder agregar más de una opción cuando se vea que puede demostrar una situacion con varios caminos y varias posibles variables.
	si x<num Entonces
		Escribir "X es menor que ",num;
	SiNo 
		//El "No" puede ayudar a determinar ciertos terminos que no sean correctos y dar una respuesta en concreto.
		si x=num Entonces
			Escribir "Son constantes iguales";
		SiNo 
			Escribir "X es mayor que ",num;
		FinSi
		
	FinSi
	Escribir "Porque X equivale a ",x;
FinProceso
