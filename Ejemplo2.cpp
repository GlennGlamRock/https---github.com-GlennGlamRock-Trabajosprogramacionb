//Luis Andre Contreras Alvarado 24040984
#include<stdio.h>
#include<conio.h>
int main()
{
	char cad[80];
	char c;
	puts("dame una cadena ");
	gets(cad);
	puts("Ejemplo de impresion con puts: ");
	puts(cad);
	printf("Ejemplo de impresion con printf ");
	printf(cad);
	printf("\nPresiona una tecla y continua automaticamente ");
	c=getche();
	puts("\n");
	putchar(c);
	puts("\n");
	printf("Presiona una tecla y luego enter: ");
	c=getchar();
	putchar(c);
	printf("\nPresiona una tecla y continua automaticamente ");
	fflush(stdin);
	c=getch();
	printf("\n");
	putchar(c);
	return 0;
}