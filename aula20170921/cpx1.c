#include <stdio.h>
main ()
{
    float r1, r2, i1, i2, sr=0, si=0;
	printf("Insira a parte real do priemrio numero: ");
	scanf("%f", & r1);
	printf("Insira a parte imaginaria do priemrio numero: ");
	scanf("%f", & i1);
	printf("Insira a parte real do segundo numero: ");
	scanf("%f", & r2);
	printf("Insira a parte iamginaria do segundo numero: ");
	scanf("%f", & i2);
	sr= r1+r2;
	si= i1+i2;
	printf("%.2f + %.2f i", sr,si);

}
