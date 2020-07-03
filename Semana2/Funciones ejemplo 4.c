#include<stdio.h>

int f1(void);
int f2(void);
int f3(void);
int f4(void);

int K = 3;

void main(void)
{
	int I;
	for(I = 1; I <= 3; I++)
	{
		printf("\nelresultado de la funcion f1 es: %d", f1());
		printf("\nelresultado de la funcion f2 es: %d", f2());
		printf("\nelresultado de la funcion f3 es: %d", f3());
		printf("\nelresultado de la funcion f4 es: %d\n", f4());
	}
}

int f1(void)
{
K += K;
return(K);
}

int f2(void)
{
int K = 1;
K++;
return(K);	
}

int f3(void)
{
static int K = 8;
K += 2;
return(K);	
}

int f4(void)
{
int k = 5;
k = k + K;  /* El texto sugiere usar en esta linea de codigo  K = K + ::K sin alterar la variable 
local (que sea igual a la v. global) y solo antemponiendo :: en la variable global para denotarla y 
que el sistema sepa que tiene que usarla ; el compilador no reconoce :: y se cambio la variable local 
por k minuscula y usando K mayuscula para la v. global.*/
return(k);
}
