#include <stdio.h>
#include <ctype.h>
int main ()
{
	char palavra [500];
	int i, cont=0;
	printf("Digite a frase: ");
	fgets(palavra,500,stdin);
	for(i=0;palavra [i];i++)
	{	
		if(isalpha(palavra[i]))
			cont++;
    }
   	printf("%i",cont);
   	return 0;
}
