#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
	int soma, n;
	n = rand()%6 + 1;
	printf("\n%d\n", n);
	soma = soma + n;
	if(soma<=23 && soma>=18)
		return 0;
	else{
		return 1;
	}
	
}

int main() {
    srand(time(0));
    char c;
    int m, i = 4;
    printf("Simulador de dado vs. 1.0 - Digite ENTER 5 vezes para rodar o dado, o vencedor precisa somar de 18 a 23. Se quiser sair pressione 'Q' para sair\n");
    do {
	scanf("%c", &c);
	dado();
	printf("\nPressione mais %d vezes", i);
	i--;
    } while(c != 'q' && c != 'Q' && i>0);
 	m = dado();
 	if(m==0)
 		printf("\nVoce ganhou!!!\n");
 	else
 		printf("\nVoce perdeu :(");
    printf("\nObrigado pela preferencia!\n");
    return EXIT_SUCCESS;
}