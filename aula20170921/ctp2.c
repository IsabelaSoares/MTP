#include <stdio.h>
#include <ctype.h>
int main ()
{
	char palavra [500];
	int i;
	printf("Digite a frase: ");
	fgets(palavra,500,stdin);
	for(i=0;palavra [i];i++)
		palavra[i]= tolower(palavra[i]);
   	printf("%s", palavra);
   	return 0;
}
