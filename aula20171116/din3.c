#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	for(i=0; frase[i] ; i++){
		frase[i] = toupper(frase[i]);
	}
	printf("%s",frase);
  free(frase);
  return 0;
}
