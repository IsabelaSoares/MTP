#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Media(float * vet, int N){
	int soma=0,i; 
	float media;
 	for(i = 0; i < N; i++){
 		soma = soma + vet[i];
 	}
 	media = soma/N;
	printf("\nA media e'': %.4f" , media);
	return media;
}

void DesvioP(float * vet, int N, float M){
	float quadrado, dp, d;
	int i;
	for(i = 0; i < N; i++){
 		quadrado = quadrado + pow(M-vet[i],2);
 	}
	d = quadrado/(N-1);
 	dp = sqrt(d);
	printf("\nO desvio padrao e'': %.4f" , dp);
}

void imprime(float * vet, int N) {
  int i, j;
  printf("\nO vetor fica: ");
  for(i = 0; i < N; i++)
      printf("%.2f ", vet[i]);
}

int main() {
  int i, j;
  int N;
  float M;
  float * vet;
  printf("Entre com a quantidade de numeros desejados: ");
  scanf("%d", &N);
  vet = (float*)calloc(N,sizeof(float*));
  for(i = 0; i < N; i++) { 
      printf("Elemento (%d): ", i);
      scanf("%f", &vet[i]);
  }
  M = Media(vet,N);
  DesvioP(vet,N,M);
  imprime(vet, N);
  free(vet);
  return 0;
}
