#include <stdio.h>
#include <math.h>

 main ()
{
	float a, b, ang, c=0;
	printf("Digite o lado b: ");
	scanf("%f", & b);
	printf("Digite o lado a: ");
	scanf("%f", & a);
	printf("Digite o valor do angulo formado por b e c: ");
	scanf("%f", & ang);
	c= sqrt((pow(b,2))+(pow (a,2))-2*b*a*(cos(ang)));
	printf("%.4f",c);

}
