#include<stdio.h>
main()
{
    double n, fat=1, i;
    scanf("%lf", &n);
    for(i=2;i<=n;i++)
        fat*=i;
    printf("%.0lf\n", fat);
}
