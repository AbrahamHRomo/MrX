#include<stdio.h>

/*Conflico de variables con el mismo nombre*/

void f1(void);    /* Prototipo de la funcion*/
int k = 5;        /*Variable Global*/

void main(void)
{	
	int I;
	for (I = 1; I <= 3; I++)
	     f1();
}

void f1(void)
/*La funcion utiliza tanto la variable local I como la variable global I. */
{
	int K = 2;
	K += K;      /*Variable local en mayuscula. La idea era que fuera exactamente
	 la misma variable qe la global pero el compilador no funciona de la siguiente manera*/
	/* Y seria    k += k   y no    K += K  */ 
	printf("\n\nEl valor de la variable local es: %d", K); 
	k = k + K;               /*El uso de ambas variables. */
	/* Y en la linea anterior seria   ::k = ::k + k      y no    k = k + K    .
	La idea era usar la misma variable pero para la variable global se usaria ::k para distinguirla de k ; 
	en general serian la misma literal k pero con valores diferentes la local seria usada solo con k y la global ::K*/
	printf("\nEl valor de la variable global es: %d", k);
}

