#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main(){
    Matriz A, I, B, R;
    int d;
    printf("Insira a ordem da Matriz principal:\n");
    scanf("%d", &d);
    A = criarMatriz(d, d);
    preencherMatriz(A);
    B = criarMatriz(d, 1);
    preencherMatriz(B);
    if(determinante(A)!=0){
		I = inversa(A);
    	R = multiplicaMat(I,B);
    }
    else{
    	printf("\nA matriz A nao e inversivel.");
    }
    imprimirSis(R);
    destruirMatriz(A);
    destruirMatriz(B);
    destruirMatriz(I);
    destruirMatriz(R);
    return 0;
}