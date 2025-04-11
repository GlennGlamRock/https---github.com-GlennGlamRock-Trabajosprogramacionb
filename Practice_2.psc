//Luis Andre Contreras Alvarado 24040984
Proceso Practice_2
	Definir num Como Entero;
	Escribir 'Escribe un número cualquiera';
	Leer num;
	//La funcion MOD tambien se puede representar como % y sirve para poder darte un valor del residuo de una division y verificarte que es
	Si num MOD 2=0 Entonces
		Escribir 'El número ', num, ' es par.';
	SiNo
		Escribir 'El número ', num, ' es impar.';
	FinSi
	//La funcion Si es muy importante ya que con ella puedes hacer varias lineas posibles que pueden suceder en un dicho problema
	Definir a, b Como Entero;
	Esperar 1 Segundos;
	Escribir 'Escribe dos números cualquiera';
	Leer a, b;
	Si a>b Entonces
		Escribir 'El número ', a, ' es mayor que ', b;
	SiNo
		Si a<b Entonces
			Escribir 'El número ', b, ' es mayor que ', a;
		SiNo
			Escribir 'Los números ', a, ' y ', b, ' son iguales';
		FinSi
	FinSi
	Esperar 1 Segundos;
	Definir z, x, c, mayor, menor Como Entero;
	Escribir 'Escribe tres números cualquiera';
	Leer z, x, c;
	mayor <- z;
	menor <- z;
	Si x>mayor Entonces
		mayor <- x;
	FinSi
	Si c>mayor Entonces
		mayor <- c;
	FinSi
	Si x<menor Entonces
		menor <- x;
	FinSi
	Si c<menor Entonces
		menor <- c;
	FinSi
	Escribir 'El número mayor es: ', mayor;
	Escribir 'El número menor es: ', menor;
	//La funcion esperar por como dice literalmente hace esperar el algoritmo un periodo de segundos para poder procesar un poco mas comodo el diagrama de flujo
	Esperar 1 Segundos;
	//No olvidar definir cualquier variable que tengas
	Definir q, i, suma Como Entero;
	Escribir 'Escribe un número positivo';
	Leer q;
	suma <- 0;
	//El Para es el inicio de una repeticion de una variable con otra, ya sea para sumar o multiplicar, etc.
	//El Hasta es la especificacion de hasta donde parar mediante una variable dada
	//Y por ultimo el hacer es propiamente para poder explicar lo que quieres que haga, ya sea por una de las opciones de lo anterior
	Para i<-1 Hasta q Hacer
		suma <- suma+i;
	FinPara
	Escribir 'La suma de todos los números enteros desde 1 hasta ', q, ' es: ', suma;
FinProceso
