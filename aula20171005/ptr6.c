#include <stdio.h>
main(){
	char str[16];
	int i;
	for(i=0; i<16; i++){
		str[i]= 0;
	}
	int *p;
	printf("Insira uma frase:\n");
	fgets(str, 16, stdin);
	p = (int *)str;
	for(i=0; i<sizeof(str)/sizeof(int); i++){
		printf("%i ", *(p+i) );
	}
	printf(" (hex) ");
	for(i=0; i<sizeof(str)/sizeof(int); i++){
		printf("%x ", *(p+i));
	}
}