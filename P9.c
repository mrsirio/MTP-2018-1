//Marcos Barros de Oliveira Sirio
//Matricula: 11721EBI018
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct dimensao
{
	float largura;
	float profundidade;
	float altura;
};

struct prod
{
	char nome[64];
	float preco;
	struct dimensao end;
};
void cadastro(struct prod vet_prod[], int i){
	printf("\nDigite o nome:");
	fgets(vet_prod[i].nome, 64, stdin);
	printf("\nDigite o preco:");
	scanf("%f", &vet_prod[i].preco);
	getchar();
	printf("\nDigite a largura:");
	scanf("%f", &vet_prod[i].end.largura);
	getchar();
	printf("\nDigite a profundidade:");
	scanf("%f", &vet_prod[i].end.profundidade);
	getchar();
	printf("\nDigite a altura:");
	scanf("%f", &vet_prod[i].end.altura);
	getchar();
}
void pesquisar(struct prod vet_prod[], int i){
	char condicional[64];
	strcpy(condicional, " ");
	if(strcmp(condicional, vet_prod[i].nome) == 0){
		printf("\nO produto nao esta cadastrado!");
	}
	else{
		printf("\n %s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm",vet_prod[i].nome, vet_prod[i].preco, vet_prod[i].end.largura, vet_prod[i].end.profundidade, vet_prod[i].end.altura);
	}
}
int main()
{
	struct prod vet_prod[2];
	int opcao, prod, num_prod = 0;
	strcpy(vet_prod[0].nome, " ");
	strcpy(vet_prod[1].nome, " ");
	do{
	printf("\n\n1 - Cadastro\n2 - Consulta\n3 - Sair\n\nDigite uma opcao: ");
	scanf("%d", &opcao);
	getchar();  
	switch(opcao)
	{
		case 1: 
			printf("\nEscolha o prod 1 ou 2:");
			scanf("%d", &prod);
			getchar();
			switch(prod){
				case 1:
					num_prod = prod -1;
					cadastro(vet_prod, num_prod);
					printf("\nproduto 1 cadastrado ");
					num_prod = 0;
					break;
				case 2:
					num_prod = prod -1;
					cadastro(vet_prod, num_prod);
					printf("\nproduto 2 cadastrado ");
					num_prod = 0;
					break;
				default:
					break;
			}
			break;
		case 2:	
			printf("\nEscolha o produto 1 ou 2:");
			scanf("%d", &prod);
			getchar();
			switch(prod){
				case 1:
					num_prod = prod -1;
					pesquisar(vet_prod, num_prod);
					num_prod = 0;
					break;
				case 2:
					num_prod = prod -1;
					pesquisar(vet_prod, num_prod);
					num_prod = 0;
					break;
				default:
					break;
			}
			break;
		case 3:
			return 0;
		default: 
			break;
	}	
	}while(opcao != 4);
	return 0;}
