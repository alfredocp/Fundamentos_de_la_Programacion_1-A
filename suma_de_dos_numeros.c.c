#include<stdio.h>//libreria de E/S
/*
Suma de dos numeros
*/
int resultado;
int n1;
int n2;
int main () 
{//iniciomain
	 printf("Dame un número");
	    scanf("%d", &n1);
	    printf("Dame otro número");
	    scanf("%d", &n2);
	resultado= n1+n2;
	printf("El resultado es:%d", resultado);
}//finmain
