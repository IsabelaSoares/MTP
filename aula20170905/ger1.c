#include<stdio.h>
main()
{
    int num, a=0, i;
    scanf("%d", &num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            a=1;
    }
    if(a==0)
        printf("primo\n");
    if(a==1)
        printf("nao eh primo\n");
}
