#include <stdio.h>
#include <ctype.h>
#include <math.h>

 main ()
{
	float xa, xb, ya, yb, d=0;
	printf("Digite a coordenada x1: ");
	scanf("%f", & xa);
	printf("Digite a coordenada y1: ");
	scanf("%f", & ya);
	printf("Digite a coordenada x2: ");
	scanf("%f", & xb);
	printf("Digite a coordenada y2: ");
	scanf("%f", & yb);
	d= sqrt((pow(xb-xa,2))+(pow(yb-ya,2)));
	printf("%f",d);

}
