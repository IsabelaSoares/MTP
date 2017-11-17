#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct
{
  int x, y;
}ponto;

typedef struct
{
  int vertice;
  ponto Spontos[10000];
}poligono;

void area(poligono *forma, int vertice){
	int i, j,det=0, detfinal = 0;
	for(i=1; i<vertice;i++){
		det = det+ (((*forma).Spontos[i-1].x*(*forma).Spontos[i].y)-((*forma).Spontos[i-1].y*(*forma).Spontos[i].x));
	}
	detfinal = det/2;
	printf("\nA area e %d", detfinal);
}
void centroide(poligono *forma, int vertice){
	float mediax, mediay , mediafx, mediafy;
	int i;
	for(i=0; i<vertice ;i++){
		mediax = mediax + ((*forma).Spontos[i].x);
	}
	for(i=0; i<vertice ;i++){
		mediay = mediay + ((*forma).Spontos[i].y);
	}
	mediafx = mediax/vertice;
	mediafy = mediay/vertice;
	printf("\nO centroide e: %.3fx%.3f", mediafx, mediafy);
}
int main(){
	int n,i;
	poligono forma;
	printf("Insira a quantidade de vertices:\n");
	scanf("%d", &n);
	printf("\nInsira as coordenadas de cada vertice:\n");
	for(i=0; i<n; i++){
	scanf("%d%d" , &forma.Spontos[i].x, &forma.Spontos[i].y);
	}
	area(&forma, n);
	centroide(&forma,n);
	return 0;
}
