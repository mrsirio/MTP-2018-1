#include <stdio.h>
#include <stdlib.h>

void gerar_num(float * vetor, int tam) {
	int i;  
	for(i = 0; i < tam; i++) 
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;}

float soma_vet(float vet[], int n){
	 if (n == 0) return 0;
   else {
      float s;
      s = soma_vet (vet, n-1);
      if (vet[n-1] > 0) s += vet[n-1];
      return (s);}}

float mult(float vet[], int n){
	int i;
	float mult = 1.0f;
	for(i=0; i<n; i++){
		mult = mult*vet[i];}
	return mult;
}

int main(){
	srand(123456);
	int opcao, n=100;
	float num[100];
	gerar_num(num, n);
	printf("\nDigite:\n1-Soma \n2 - Produto");
	printf("\nDigite a opcao: ");
	scanf("%d", &opcao);	
	getchar();
	switch(opcao){
		case 1:
			printf("\nSoma: %f", soma_vet(num, n));
			break;
		case 2:
			printf("\nProduto: %f", mult(num,n));
			break;
		default:
			break;}
	return 0;}
