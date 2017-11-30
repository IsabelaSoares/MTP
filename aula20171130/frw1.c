#include <stdio.h>
int insere(){
	system("cls");
	FILE * arquivo;
	arquivo = fopen("info.txt", "w");
	int idade;
	char nome[356];
	float altura;
	printf("Insira o primeiro nome:");
	scanf("%s", &nome);
	printf("Insira a idade:");
	fscanf(stdin,"%d", &idade);
	printf("Insira a altura:");
	fscanf(stdin,"%f", &altura);
	fprintf(arquivo,"%s\t%d\t%f",nome,idade,altura);
	fclose(arquivo);
	return 0;
}
int le(){
	FILE * arquivo;
	int idade;
	char nome[356];
	float altura;
	arquivo = fopen("info.txt", "r");
	fscanf(arquivo,"%s\t%d\t%f", &nome, &idade, &altura);
	fclose(arquivo);
	fprintf(stdout,"%s",nome);
	fprintf (stdout, "\t%d",idade);
	fprintf(stdout, "\t%.3f",altura);
	system("pause");
	return 0;
}

int main(){
	int op;
	do{
		system("cls");
		printf("Insira 1 para inserir o texto, 2 para ler, e 3 para sair:");
		scanf("%d", &op);
		switch (op){
			case 1:{
				insere();
				break;
			}
			case 2:{
				le();
				break;
			}
				
		}
	}while(op!=3);
	return 0;	
}
