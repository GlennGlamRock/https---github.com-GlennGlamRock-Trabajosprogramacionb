Proceso LContreras
	//Luis André Contreras Alvarado 24040984
	//G=Ganados,E=Empatados,P=Perdidos
	Definir G,E,P Como Entero;
	//Pt=Puntos total,PG=Puntos Ganados,PE=Puntos Empatados,PP=Puntos Perdidos
	Definir Pt,PG,PE,PP Como Entero;
	Definir Porcentaje Como Real;
	//T=Equipo
	Definir T como cadena;
	Escribir "Ingrese nombre de equipo";
	leer T;
	Escribir "Ahora digame la cantidad de partidos ganados";
	leer G;
	Escribir "Muy bien, ingrese la cantidad de partidos empatados";
	leer E;
	Escribir "Ingrese cantidad de partidos perdidos";
	leer P;
	PG<-G*3;
	PE<-E*1;
	PP<-P*0;
	Pt<-(PG+PE+PP);
	Porcentaje<-(PG/Pt)*100;
	Escribir "El total de partidos ganados son: ",PG," puntos.";
	Escribir "El total de puntos obtenidos son: ",Pt," puntos.";
	Escribir "El porcentaje de puntos obtenidos son: ",Redon(Porcentaje),"%.";
FinProceso
