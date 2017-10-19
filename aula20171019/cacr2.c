#include <stdio.h>
#include <math.h>
int delta(int a, int b, int c){
	int d = (pow(b,2))-(4*a*c);
	return d;
}
float raiz(int d, int a, int b, int c){
	float raiz1, raiz2;
	if(d==0){
		raiz1 = -b/(2*a);
		raiz2 = -b/(2*a);
		printf("\nAs raizes sao: %.2f e %.2f", raiz1, raiz2);
	}
	else if(d<0){
		printf("\nAs raizes nao sao reais");
	}
	else{
		raiz1 = (sqrt(d)-b)/(2*a);
		raiz2 = (-(sqrt(d))-b)/(2*a);
		printf("\nAs raizes sao: %.2f e %.2f", raiz1, raiz2);
	}
	return 0;
	
}
void main(){
	int a, b, c, x;
	printf("Insira os coeficientes 'a', 'b' e 'c':\n");
	scanf("%d %d %d", &a, &b, &c);
	x = delta(a,b,c);
	raiz(x,a,b,c);
}
