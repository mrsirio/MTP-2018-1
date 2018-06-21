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
		if('0'<=string[i] && string[i]<='9'){
			printf("%c", string[i]);
			string2[j]=string[i];
			j++;}
		}
	printf("\n\n\n");
  return 0;
}
