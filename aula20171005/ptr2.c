#include <stdio.h>
main(){
	int vetor[] = {0,1,2,4,8,16,1025};
	int i, j, cont=0;
	i = sizeof(vetor);
	unsigned char *p;
	p = (unsigned char *)vetor;
	for(j=0; j<i; j++){
		printf("%u ", *(p+j));
		if(!p[j])
		 cont++;
	}
	printf("\nEstao armazenados %i com bytes somente com 0's", cont);
}