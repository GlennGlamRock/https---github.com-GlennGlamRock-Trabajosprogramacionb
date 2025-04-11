//Luis Andre Contreras Alvarado 24040984
Proceso sin_titulo
	//Ejercicio 5
	Definir C,F Como Real;
	Escribir "4.50 grados Fahrenheit a grados Celcius sería: ";
	F<-4.50;
	C<-((F-32)*5/9);
	Escribir C,"°";
	Esperar 1 Segundos;
	//Ejercicio 6
	Definir n1,n2,n3,md Como real;
	Escribir "Escribe 3 números aleatorios para calcular la media";
	Leer n1,n2,n3;
	md<-(n1+n2+n3)/3;
	Escribir "La media entre los tres números es: ",md;
	Esperar 1 Segundos;
	//Ejerciocio 7
	Definir min,hr,min_restantes Como Entero;
	Escribir "Escribe una cantidad númerica en minutos aleatoria";
	Leer min;
	hr<-min%60;
	min_restantes<-min%60;
	Escribir min," minutos son ",hr," horas y ",min_restantes," minutos.";
	Esperar 1 Segundos;
	//Ejercicio 8
	Definir sueldo_base,venta1,venta2,venta3,comision,total,sueldo_total Como Real;
	Escribir "Ingresa el sueldo base del vendedor: ";
	Leer sueldo_base;
	Escribir "Ingresa el monto de la primera venta: ";
	Leer venta1;
	Escribir "Ingresa el monto de la segunda venta: ";
	Leer venta2;
	Escribir "Ingresa el monto de la tercera venta: ";
	Leer venta3;
	comision<-0.10;
	total<-(venta1+venta2+venta3)*comision;
	sueldo_total<-sueldo_base+total;
	Escribir "El total de comision viene siendo de: ",total," y su sueldo total contando con su comision es: ",sueldo_total;
FinProceso

