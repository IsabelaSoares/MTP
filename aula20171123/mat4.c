#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main(){
	Matriz A, B, C;
	double d;
	int la, cb,c;
	printf("Insira a linha da matriz A:");
	scanf("%d", &la);
	printf("Insira a coluna da matriz B:");
	scanf("%d", &cb);
	printf("Insira a coluna de A que e igual a linha de B:");
	scanf("%d", &c);
	A = criarMatriz(la,c);
	B = criarMatriz(c,cb);
	C = criarMatriz(la,cb);
	printf("Preencha a matriz A:");
	preencherMatriz(A);
	printf("Preencha a matriz B:");
	preencherMatriz(B);
	C= multiplicaMat(A,B);
	imprimirMatriz(C); 
	destruirMatriz(A);
	destruirMatriz(B);
	destruirMatriz(C);
	return 0;
}