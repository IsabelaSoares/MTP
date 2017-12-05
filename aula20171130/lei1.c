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
char * iniciaTexto(){
	char * texto = (char *) malloc(sizeof(char) );
	texto[0] = '\0';
	return texto;
}
char * ler(){
    FILE * arquivo;
    char * texto = iniciaTexto();
	char * aux;
	int c, tamanho = 0;
	arquivo = fopen("meutexto.txt", "r");
	do
	{
		c = fgetc(arquivo);
		if (c != EOF )
		{
			aux = (char *) realloc(texto, tamanho+1);
			if ( aux != NULL )
			{
				texto = aux;
				texto[tamanho] = c;
				tamanho++;
				texto[tamanho] = '\0';
			}
			else
				printf("**Error! Out of memory!**\n  ");
		}
	}while(c != EOF);
	fclose(arquivo);
	return texto;
}
int main() {
	char *frase;
	int i;
	frase = (char*) malloc(1);
	frase = ler();
	printf(" '%s' e' a frase ja armazenada.\n",frase);
	printf("Entre com a nova frase:(Sera cortada no caractere '.') ");
	for(i=0; ; i++){
		frase = (char*) realloc(frase, strlen(frase)+1);
		frase[i]= getchar();
		if(frase[i]== '.'){
			break;
		}
	}
	grava(frase,strlen (frase));
	printf(" %s \n E' a frase armazenada.",frase);
	free(frase);
  return 0;
}
