#include <stdio.h>
main(){
	unsigned int i= 0xFACA8421;
	unsigned char *p; 
	int j;
	p = (unsigned char *) &i;
	for(j=0; j<sizeof(p); j++){
		printf("A localizacao e %p\n", (p+j));
		printf("O conteudo e %u\n\n", *(p+j));
	}
	
}