#include <stdio.h>
#include <math.h>

 main ()
{
	float a, b, l=0;
	printf("Digite um numero: ");
	scanf("%f", & a);
	printf("Digite a base: ");
	scanf("%f", & b);
	l= (log(a))/(log (b));
	printf("%.4f",l);

}
