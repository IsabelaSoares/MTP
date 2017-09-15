#include<stdio.h>
main()
{
    int num, a=0, i;
    scanf("%d", &num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
            a=a+i;
    }
    if(a==num)
        printf("eh perfeito");
    else
        printf("nao eh perfeito");
}
