#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void grava(char * frase, int p){
	int  i;
	FILE * arquivo;
	arquivo = fopen("meutexto.txt", "w");
	if(arquivo==NULL)
	 fprintf(stderr,"ERRO");
	else{
		for(i=0; i<p-2; i++){
			fputc(frase[i], arquivo);
			}
		fclose(arquivo);	
		}
	}
int main() {
  char *frase;
  int i;
  frase = (char*) malloc(1);
  printf("Entre com a frase:(Sera cortada no caractere '.') ");
  for(i=0; ; i++){
		frase = (char*) realloc(frase, strlen(frase)+1);
		frase[i]= getchar();
		if(frase[i]== '.'){
			break;
		}
	}
	grava(frase,strlen (frase));
	printf("%s",frase);
  free(frase);
  return 0;
}