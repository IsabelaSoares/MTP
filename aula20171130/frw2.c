#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void cria ( int n, char * nome ) {
    FILE * arquivo;
    int i, * vet = (int *) malloc( n*sizeof(int) );
    int soma=0, maior=0, menor=101;
    float desviop=0, quadrado=0;
    double media=0;
    arquivo = fopen(nome,"w");
    for ( i=0; i<n; i++ )
    {
        vet[i] = rand()%100;
        soma += vet[i];
        fprintf(arquivo, "%d ", vet[i]);
    }
    media = soma/n;
    for(i=0; i<n; i++){
    	quadrado += pow((media-vet[i]), 2);
    	if(vet[i]>=maior){
    		maior = vet[i];
		}
		if(vet[i]<= menor){
			menor = vet[i];
		}
	}
	desviop = sqrt(quadrado/(n-1));
	printf("\nSoma = %d",soma);
	printf("\nMedia = %lf", media);
	printf("\nDesvio padrao = %f", desviop);
	printf("\nMaior = %d", maior);
	printf("\nMenor = %d", menor);
    free(vet);
    fclose(arquivo);
}
int main () {
    srand(time(0));
    int n;
    char nome[256];
    printf("Insira o numero de dados: ");
    scanf("%d", &n);
    printf("Insira o nome do arquivo: ");
    scanf("%s", nome);
    cria(n, nome);
    return 0;
}
