#include <stdio.h>
main(){
	int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
	int i, j, cont=0;
	i = sizeof(vetor);
	unsigned char *p;
	p = (unsigned char *)vetor;
	for(j=0; j<i; j++){
		printf("%u ", *(p+j));
		if(p[j]!=0)
		 cont++;
	}
	printf("\nEstao armazenados %i com bits com pelo menos um numero 1.", cont);
}