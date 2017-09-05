#include <stdio.h>

 main ()
{
	float a,b,c,d,e,m;
    do{
		printf ("Insira a nota a: ");
		scanf ("%f",&a);
	} while( a<0||a>10);
	do{
		printf ("Insira a nota b: ");
		scanf ("%f",&b);
	}while( b<0||b>10);
	do{
	
		printf ("Insira a nota c: ");
		scanf ("%f",&c);
	}while( c<0||c>10);
	do{
		printf ("Insira a nota d: ");
		scanf ("%f",&d);
	}while( d<0||d>10);
	do{
	    printf ("Insira a nota e: ");
		scanf ("%f",&e);
	}while( e<0||e>10);
		
	 m= (2*a+2*b+2*c+3*d+5*e)/14;
	 printf("O valor da media eh: %f",m);
	
}
