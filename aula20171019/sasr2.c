#include <stdio.h>
int main(){
	int x,i;
	do{
	printf("Digite 1 para impares e 2 para pares");
	scanf("%d",&x);
	if(x==1){
		for(i=0;i<21;i++){
			if(i%2 != 0){
				printf("%d,",i);
	}}}
	if(x==2){
		for(i=0;i<21;i++){
			if(i%2 == 0){
				printf("%d,",i);
	}}}
}while(x != 1 && x != 2);		
	return 0;
}

