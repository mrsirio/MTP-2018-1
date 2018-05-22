//Marcos Barros de Oliveira Sirio
//Matricula 11721EBI018

#include <stdio.h>
int soma(int num[], int qtd){
	int soma=0, i;
    for(i=0; i<qtd; i++){
    	soma=soma+num[i];
	}
	return soma;
}
float media(float numero, int qtd){
   float media=0;
   media=numero/qtd;
   return media;
}
int main(){
	int i=0,num[20], qtd, resultado;
	printf("\nDigite uma quantidade entre 5 e 20 numeros: ");
	scanf("%d", &qtd);
	getchar();
	do{
		printf("\nNum[%d]: ", i+1);
		scanf("%d", &num[i]);
		getchar();
		i++;
	}while(i<qtd);
resultado=soma(num,qtd);
printf("\nA media dos elementos eh: %.2f",media(resultado,qtd));
 return 0;
}
