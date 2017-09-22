#include <stdio.h>
#include <complex.h>
main ()
{
    float r1, i1;
    double complex z, rf;
	printf("Insira a parte real: ");
	scanf("%f", & r1);
	printf("Insira a parte imaginaria: ");
	scanf("%f", & i1);
	z= r1+ i1 *I;
	rf= (conj(z)*z);
	printf("%lf + %lf*I", creal(rf), cimag(rf));

}
