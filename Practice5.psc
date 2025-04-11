//Luis Andre Contreras Alvarado 24040984
Proceso Practice5
	//Ejercicio 5
	Definir n,c Como Cadena;
	//Estas variables las puse como cadena ya que entra en definicion de poder ser alfanuméricos
	Escribir "Ingresa tu nombre";
	Leer n;
	Escribir "Ingresa tu contraseña";
	leer c;
	//Siempre recordad que cuando metas una palabra a una variable especificar siempre las comillas
	si (n="Luis") y (c="ZetaXY") Entonces
		Escribir "Has entrado al sistema <3 .";
	SiNo
		Escribir "ERROR: Nombre de usuario o contraseña incorrectos.";
	FinSi
	//Ejercicio 6
	Esperar 1 Segundos;
	Definir x como cadena;
	Escribir "Escribe una letra";
	leer x;
	Escribir "Un segundo...";
	Esperar 3 Segundos;
	si x=Mayusculas(x) Entonces
		Escribir "Letra mayuscula acertada";
	SiNo
		Escribir "Letra minuscula detectada";
	FinSi
	//Ejercicio 17
	Definir num Como Entero;
	Definir CO como cadena;
	Escribir "Introduzca número del dado";
	leer num;
	Segun num Hacer
		1:CO<-"seis";
		2:CO<-"cinco";
		3:CO<-"cuatro";
		4:CO<-"tres";
		5:CO<-"dos";
		6:CO<-"uno";
		De Otro Modo:
			Escribir "ERROR: Número incorrecto";
	FinSegun
	Escribir "La cara opuesta de ",num," es ",CO;
FinProceso
