#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main(){
	Matriz A, B;
	double d;
	int l;
	printf("Insira a ordem da matriz:");
	scanf("%d", &l);
	A = criarMatriz(l,l);
	B = criarMatriz(l,l);
	preencherMatriz(A);
	d = determinante(A);
	if(d==0){
		printf("\nNao e' inversivel.\n");
	}
	else{
		B = inversa (A);
		imprimirMatriz(B);
	}
	destruirMatriz(A);
	destruirMatriz(B);
	return 0;
}