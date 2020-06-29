#include<stdio.h>
#include<string.h>

void imp_rev(char s[50]);
int main()
{
	char nombre[50];
	printf("Escribe una cadena: \n");
	scanf("%s", &nombre);
	imp_rev(nombre);
	return 0;
}
void imp_rev(char s[50])
{
	int T;
	T = strlen(s);
	for( T - 1; T >= 0; T--)
	     printf("%c",s[T]);
}
