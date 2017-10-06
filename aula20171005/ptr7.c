#include <stdio.h>
main(){
	int str[4];
	int i;
	for(i=0; i<4; i++){
		str[i]= 0;
	}
	int *p;
	printf("Insira um codigo:\n");
	for(i=0; i<4; i++){
		scanf("%d", &str[i]);
	}
	p = str;
	printf("%s ", p );	
}