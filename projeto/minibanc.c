#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
typedef struct{
	char nome[300];
	int idade;
	char rg[20];
	char cpf[20];
	char usuario[100];
	char senha[100];
}cadastro;
typedef struct{
	float saldo;
	int insere;
	int retira;
	float valorinserido;
	float valorretirado;
}ext;
void criarconta(){
    system("cls");
	cadastro cliente;
	char conta[300], registro[300];
	FILE * arquivo;
	printf("\tCadastro\nIdade:");
	scanf("%d", &cliente.idade);
	if(cliente.idade>=18){
		printf("Primeiro nome: ");
		scanf("%s",cliente.nome);
		strcpy(registro, cliente.nome);
		strcat(registro, ".txt");
		arquivo = fopen(registro, "w");
		printf("RG (identidade): ");
		scanf("%s", &cliente.rg);
		printf("CPF:");
		scanf("%s", &cliente.cpf);
		printf("Nome de usuario: ");
		scanf("%s", &cliente.usuario);
		printf("Senha: ");
		scanf("%s", &cliente.senha);
		fprintf(arquivo,"%s\t%d\t%s\t%s\t%s\t%s",cliente.nome,cliente.idade,cliente.rg, cliente.cpf, cliente.usuario, cliente.senha);
	}
	else{
		printf("\nIDADE INVALIDA!\n");
		system("pause");
		return;
	}
	fclose (arquivo);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "w");
	fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", 0.00, 0, 0.00, 0, 0.00);
	fclose (arquivo);
}
void mostrarconta(){
    system("cls");
	FILE * arquivo;
	cadastro cliente;
	char registro[300];
	printf("\nDigite o nome do cliente: ");
	scanf("%s",cliente.nome);
	strcpy(registro, cliente.nome);
	strcat(registro, ".txt");
	arquivo = fopen(registro, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao encontrado!\n");
		system("pause");
		return;
	}
	fscanf(arquivo,"%s\t%d\t%s\t%s\t%s\t%s",&cliente.nome,&cliente.idade,&cliente.rg, &cliente.cpf, &cliente.usuario, &cliente.senha);
	fclose(arquivo);
	fprintf(stdout,"NOME: %s",cliente.nome);
	fprintf (stdout, "\nIDADE: %d",cliente.idade);
	fprintf(stdout, "\nRG: %s",cliente.rg);
	fprintf(stdout,"\nCPF: %s",cliente.cpf);
	fprintf (stdout, "\nUSUARIO: %s\n\n\n\n",cliente.usuario);
	system("pause");
	return;
}
void mostrarsaldo(){
    system("cls");
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	printf("\nDigite o nome do cliente: ");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao encontrado!\n");
		system("pause");
		return;
	}
	fscanf(arquivo,"%f",&valor.saldo);
	fclose(arquivo);
	printf("\nSeu saldo atual eh: R$%.2f\n\n\n\n",valor.saldo);
	system("pause");
	return;
}
void inserirmoney(){
    system("cls");
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	float dindin;
	printf("\nDigite o nome do cliente: ");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao encontrado!\n");
		system("pause");
		return;
	}
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.valorinserido, &valor.retira, &valor.valorretirado);
	fclose(arquivo);
	printf("\nQual valor a ser depositado? ");
	scanf("%f", &dindin);
	valor.saldo = valor.saldo + dindin;
	valor.insere ++;
	valor.valorinserido = valor.valorinserido + dindin;
	arquivo = fopen(conta, "w");
	fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", valor.saldo, valor.insere, valor.valorinserido, valor.retira, valor.valorretirado);
	fclose (arquivo);
	printf("\nOperacao efetuada com sucesso.\n\n\n\n\n");
	system("pause");
	return;
}
void retirarmoney(){
    system("cls");
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	float dindin;
	printf("\nDigite o nome do cliente: ");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao encontrado!\n\n\n\n\n");
		system("pause");
		return;
	}
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.valorinserido, &valor.retira, &valor.valorretirado);
	fclose(arquivo);
	printf("\nQual valor a ser sacado?");
	scanf("%f", &dindin);
	if(dindin>valor.saldo){
		printf("\nOperacao nao efetuada\nMOTIVO: Saldo insuficiente.\n\n\n\n");
	}
	else if(dindin==valor.saldo){
		valor.retira ++;
		printf("\nATENCAO SALDO IGUAL AO SAQUE. Saldo zerado\n");
		arquivo = fopen(conta, "w");
		valor.valorretirado = valor.valorretirado + dindin;
		fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", 0.00, valor.insere, valor.valorinserido, valor.retira, valor.valorretirado);
		fclose (arquivo);
	}
	else{
		valor.retira ++;
		valor.saldo = valor.saldo - dindin;
		valor.valorretirado = valor.valorretirado + dindin;
		arquivo = fopen(conta, "w");
		fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", valor.saldo, valor.insere, valor.valorinserido, valor.retira, valor.valorretirado);
		fclose (arquivo);
		printf("\nOperacao efetuada com sucesso.\n\n\n\n\n");
	}
	system("pause");
	return;

}
void extrato(){
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	system("cls");
	printf("\nDigite o nome do cliente: ");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao encontrado!\n");
		system("pause");
		return;
	}
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.valorinserido, &valor.retira, &valor.valorretirado);
	fclose(arquivo);
	system("cls");
	printf("\nEm %d operacoes foi inserido o total de R$%.2f\n",valor.insere,valor.valorinserido);
	printf("\nEm %d operacoes foi retirado o total de R$%.2f\n",valor.retira,valor.valorretirado);
	printf("                                     __________\n");
	printf("\nSeu saldo atual eh:                     $%.2f\n\n\n",valor.saldo);
	system("pause");
	return;
}
void removerconta(){
    system("cls");
	FILE * arquivo;
	cadastro cliente;
	char conta[300], registro[300];
	printf("\nDigite o nome do cliente: ");
	scanf("%s",cliente.nome);
	strcpy(registro, cliente.nome);
	strcat(registro, ".txt");
	remove(registro);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	remove(conta);
	printf("\n\n\nFicamos triste por sua decisao :(");
	printf("\nOperacao efetuada com sucesso.\n\n\n\n");
	system("pause");
}
int main(){
    system("color 74");
	int op;
	do{
		system("cls");
		printf("\tBem-vindo ao Minibank!");
		printf("\nEscolha uma opcao:\n");
		printf("\n1- Criar conta:");
		printf("\n2- Exibir informacoes sobre a conta:");
		printf("\n3- Exibir saldo na tela:");
		printf("\n4- Depositar dinheiro:");
		printf("\n5- Sacar dinheiro:");
		printf("\n6- Extrato de operacoes:");
		printf("\n7- Remocao de conta:");
		printf("\n8- Sair.\n\n");
		scanf("%d", &op);
		switch(op){
			case 1:
				criarconta();
				break;
			case 2:
				mostrarconta();
				break;
			case 3:
				mostrarsaldo();
				break;
			case 4:
				inserirmoney();
				break;
			case 5:
				retirarmoney();
				break;
			case 6:
				extrato();
				break;
			case 7:
				removerconta();
				break;
            case 8:
				break;
			default:
				printf("\nOpcao nao existente!\n");
				system("pause");
		}
	}while(op!=8);
}
