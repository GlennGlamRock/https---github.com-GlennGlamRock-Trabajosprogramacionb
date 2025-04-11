//Luis Andre Contreras Alvarado 24040984
Proceso CalcularDescuento
	Definir nombre como cadena;
	Definir precio, descuento, total_a_pagar Como Real;
	Escribir " Ingrese su nombre y precio del producto ";
	Leer nombre, precio;
	descuento<-precio*0.12;
	total_a_pagar<-precio-descuento;
	//Redondeo=Redon
	descuento<-redon(descuento*100)/100;
	total_a_pagar<-redon(total_a_pagar*100)/100;
	Escribir " Cliente: ",Mayusculas(nombre);
	Escribir " Monto del descuento: $",descuento;
	Escribir " Total a pagar: $",total_a_pagar;
	
FinProceso
