#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int numero, dado1, dado2, dado3, soma;
    srand(time(NULL));
	dado1=rand()%10;
	dado2=rand()%10;
	dado3=rand()%10;
    soma=dado1+dado2+dado3;
    printf("Numeros sorteados: %d %d %d\n", dado1, dado2, dado3);
    printf("Soma: %d\n", soma);
    if(soma==11||soma==7)
    	printf("ganhou\n");
    else
    	printf("perdeu\n");
    return 0;
}
