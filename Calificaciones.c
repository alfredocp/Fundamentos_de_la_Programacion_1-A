#include<stdio.h>//libreria de E/S
/*
programa para saber calificaciones
*/
int calificacion;
int main()

{//inicio main
printf("Introduzca tu calificacion:  \n");
	scanf("%d",&calificacion);
	if (calificacion>=7)
	{
		printf("Aprovado");
	}
	else
{
	printf("Reprovado");

}
}//fin main
