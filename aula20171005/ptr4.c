#include <stdio.h>
main(){
	int *p, *s, *t;
	int a, b, soma; 
	printf("Insira dois numeros de sua escolha:\n");
	scanf("%i%i", &a, &b);
	soma = a+b;
	p = &a;
	s = &b;
	t = &soma;
	printf("\nO primeiro numero %i esta armazenado em 0x%p.\n", a, p);
	printf("\nO segundo numero %i esta armazenado em 0x%p.\n", b, s);
	printf("\nA soma %i esta armazenada em 0x%p.\n", soma, t);
	}