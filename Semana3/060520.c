#include<stdio.h>
char name[30];
long mat;
int main(){
	FILE *ofp, *ifp;
	ifp=fopen("entrada.doc","r");
	fscanf(ifp,"%s%ld",&name,&mat);
	printf("\nNombre: %s",name);
	printf("\nMatricula: %ld", mat);
	ofp=fopen("salida.doc","w");
	fprintf(ofp,"%ld%s", mat, name);
	fclose(ifp); fclose(ofp);
	return 1;
}
