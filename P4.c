//Marcos Barros de Oliveira Sírio
//Matrícula: 11721EBI018

#include <stdio.h>

int main(){
	char string[100];
	int i, j=0, string2[100];
	printf("\nDigite uma sequencia: ");
	scanf("%s", string);
	getchar();
	printf("\nSequencia so com numeros: ");
	for(i=0; string[i]!='\0'; i++){
		if(string[i] >= 48 && string[i]<= 57)
		{	string2[i]= string[i] - 48;
			i++;	}
			}
	j=0;
	printf("Valor retornado = ");
	do{	printf("%d", string2[j]);
		j++; }while(j<i);
	printf("\n\n\n");
  return 0;
}
