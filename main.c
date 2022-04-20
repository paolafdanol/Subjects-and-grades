#include <stdio.h>
#include <stdlib.h>

typedef int e;
typedef char c;

int main(){
	c mat[30][30];
	e cal[6];
	e i;
	
	for(i=0; i<5; i++){
		printf("Ingrese la materia: \n");
		scanf(" %[^\n]", &mat[i]);
		printf("Ingrese su calificacion: \n");
		scanf("%i", &cal[i]);
		printf("\n\n");
	}
	
	for(i=0; i<5;i++){
		printf("Materia: %s \n", mat[i]);
		printf("Caificacion: %i \n\n", cal[i]);
	}
	return 0;
}
