#include <stdio.h>
int main ()
{
 int b, p, result=1, i;
 printf("Insira o valor da base: ");
 scanf("%d",& b);
 printf("Insira o valor da potencia: ");
 scanf("%d",& p);
 for(i=0; i<p; i++)
  result= result*b;
 printf("%d", result);
 return 0;
}
