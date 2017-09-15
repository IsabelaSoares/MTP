#include<stdio.h>
main()
{
    char palavra[256];
    int i, tam=0;
    scanf("%s", palavra);
    for(i=0;palavra[i]!='\0';i++)
        tam++;
    printf("%d\n", tam);
}
