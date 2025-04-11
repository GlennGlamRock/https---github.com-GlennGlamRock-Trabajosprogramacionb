//Luis Andre Contreras Alvarado 24040984
Proceso Porcentaje_de_personas
	Definir cuantos,h,m Como Entero;
	Definir pcth,pctm Como Real;
	Escribir "Cuantas personas asisten?";
	Leer cuantos;
	Escribir "Cuantos hombres asisten?";
	Leer h;
	Escribir "Cuantas mujeres asisten?";
	Leer m;
	pcth<-h*100/cuantos;
	pctm<-m*100/cuantos;
	Escribir "El pct de hombres es ",pcth,"%";
	Escribir "El pct de mujeres es ",pctm,"%";
	Escribir "Suma de pct es ",pcth+pctm,"%";
	
FinProceso
