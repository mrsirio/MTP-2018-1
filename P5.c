//Marcos Barros de Oliveira Sirii
//Matricula: 11721EBI018
#include <stdio.h>

int main()
{	char string[256], *p;
	int i=0, texto[256], opcao, contador,*pts;
	printf("Voce deseja: \n1 - Criptografar \n2 - Descriptografar \n");
	scanf("%d", &opcao);
	getchar();
	switch(opcao){
		case 1:
			for(i=0; i<256; i++){ string[i] = '\0'; }
			printf("Digite um texto: ");
			fgets(string, 256, stdin);
			for(contador=0; string[contador] != '\0'; contador++);	
			pts = (int*)string;
			printf("\nFrase criptografada: \n");
			for(i=0; i<contador; i++){	
				if(*(pts+i) != 0 ){
					printf("%i ", *(pts+i));}
					} 
			break;
		case 2:
			p = (char*)texto;
			i=0; contador=0;
			printf("\nDigite uma sequencia de numeros e para encerrar digite 0: \n");
			do{
				scanf("%d", &contador);
	 			getchar();
				texto[i] = contador;
				i++;
			}while(contador != 0);
			p = (char*)&texto;
			printf("\nMensagem descriptografada: \n");
			for(i=0; i<sizeof(texto) && *(p+i) != 0; i++){
				printf("%c", *(p+i));}
			break;
		default:
			break;
	}
	return 0;
  }
