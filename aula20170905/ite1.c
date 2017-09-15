#include<stdio.h>
main()
{
    int n, fat=1, i;
    scanf("%d", &n);
    for(i=2;i<=n;i++)
        fat*=i;
    printf("%d\n", fat);
}
