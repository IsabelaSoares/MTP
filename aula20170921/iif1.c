#include <stdio.h>
#include <time.h>
main ()
{
	srand(time(0));
	float p, r;
	int i, cont=0;
	printf("Insira um numero de 0 a 1 :\n");
	scanf("%f", &p);
	for(i =0; i<1000; i++)
	{
		r = rand()%100;
		r = r/100;
		if(r<p)
			cont++;
	}
	printf("\nA quantidade de vezes e: %i", cont);
	return 0;
}
