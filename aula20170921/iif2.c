#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i;
    float finvertido, somaf = 0;
    double dinvertido, somad = 0;
    printf("Insira um valor inteiro:\n ");
    scanf("%d", &n);
    finvertido = 1.f/n;
    dinvertido = 1./n;
    for(i = 0; i < 729 ; i++){
        somaf += finvertido;
        somad += dinvertido;
    }
    printf("Soma float: %.15f \nSoma double: %.15f", somaf,somad);
    return 0;
}