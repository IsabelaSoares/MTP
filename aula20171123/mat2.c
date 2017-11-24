#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main(){
	Matriz A;
	double det;
	int l;
	printf("Insira a ordem da matriz:");
	scanf("%d", &l);
	A = criarMatriz(l,l);
	preencherMatriz(A);
	det = determinante(A);
	printf("A determinante e: %lf", det);
	destruirMatriz(A);
	return 0;
}