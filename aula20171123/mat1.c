#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	int l, i,j;
	Matriz A, B;
	printf("Insira a ordem da matriz:");
	scanf("%d", &l);
	A =criarMatriz(l,l);
	B =criarMatriz(l,l);
	preencherMatriz(A);
	B = adjunta(A);
	imprimirMatriz(B);
	destruirMatriz(A);
	destruirMatriz(B);
	return 0;	
}