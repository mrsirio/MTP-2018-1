//Marcos Barros de Oliveira Sirio
//Matrícula: 11721EBI018
#include <stdio.h>

int DecBin(int decimal, int vetor[256]){
int resto[100], guarda, i=0, j=0, base=2, num1=0;
	if(decimal < 0)
	{ num1 = decimal;
	  decimal = (-decimal) - 1;
	  guarda = decimal;		}
	else if(decimal >= 0)
	{	num1 = decimal;
		guarda = decimal;	}
	resto[0] = 1;
	for(i=0; decimal >= base; i++)
	{	resto[i] = decimal%base;	
		decimal =decimal/base;
		if(decimal < base)
		{	i++;
			resto[i] = decimal;		} 
	}	if(guarda>base){ i--;	}
	decimal = guarda;	
	guarda = 32;
	for(j=0; j<guarda; j++)
	{	if(j < (guarda-(i+1)))
		{	vetor[j] = 0;		}
		else
		{	vetor[j] = resto[i];
			i--;
		}
		if(num1 < 0)
		{	if(vetor[j] == 0){	vetor[j] = 1;		}
			else if(vetor[j] == 1){	vetor[j] = 0;			}
		}
	}
		return j; 
}

int main ()
{
	int opcao, i=0, j, k, n1, n2, n3, vetor_n[256], vetor_n1[256], vetor_c[256];

printf("\n### CALCULADORA BITWISE ### \n Digite a opcao desejada:");
printf("\n1-NOT \n2-AND \n3-OR \n4-XOR \n5-Right Shift \n6-Left Shift \n");
scanf("%d", &opcao);
				if(opcao == 7){return 0;}
		else if(opcao != 1 && opcao <= 7)
		{	printf("\nDigite os dois valores que serao operados na Calculadora Bitwise: ");
			scanf("%d %d", &n1, &n2);
			getchar();	}
		else if(opcao == 1)
		{	printf("\nDigite o valor que sera operado na Calculadora Bitwise: ");
			scanf("%d", &n1);
			getchar();
		}
			
		switch(opcao){
			case 1:
				j = DecBin(n1, vetor_n);
				printf("\nNOT %d (", n1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") : ");	}	}
				n1 = ~n1;
				j = DecBin(n1, vetor_n1);
				printf(" %d (", n1);
				for(i=0; i<j; i++){	printf("%d", vetor_n1[i]);  if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 2:
	 			j = DecBin(n1, vetor_n);
				printf("\n%d (", n1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") AND");	}	}
				j = DecBin(n2, vetor_n1);
				printf(" %d (", n2);
				for(i=0; i<j; i++){	printf("%d", vetor_n1[i]);  if(i==(j-1)){	printf(") :");	}	}
				n3 = n1 & n2;
				j= DecBin(n3, vetor_c);
				printf(" %d (" ,n3);
				for(i=0; i<j; i++){	printf("%d", vetor_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 3:
				j = DecBin(n1, vetor_n);
				printf("\n%d (", n1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") OR");	}	}
				j = DecBin(n2, vetor_n1);
				printf(" %d (", n2);
				for(i=0; i<j; i++){	printf("%d", vetor_n1[i]);  if(i==(j-1)){	printf(") :");	}	}
				n3 = n1 | n2;
				j= DecBin(n3, vetor_c);
				printf(" %d (" ,n3);
				for(i=0; i<j; i++){	printf("%d", vetor_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 4:
				j = DecBin(n1, vetor_n);
				printf("\n%d (", n1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") XOR");	}	}
				j = DecBin(n2, vetor_n1);
				printf(" %d (", n2);
				for(i=0; i<j; i++){	printf("%d", vetor_n1[i]);  if(i==(j-1)){	printf(") :");	}	}
				n3 = n1 ^ n2;
				j= DecBin(n3, vetor_c);
				printf(" %d (" ,n3);
				for(i=0; i<j; i++){	printf("%d", vetor_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 5:
				j = DecBin(n1, vetor_n);
				printf("\n%d (", n1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") >>");	}	}
				j = DecBin(n2, vetor_n1);
				printf(" %d (", n2);
				for(i=0; i<j; i++){	printf("%d", vetor_n1[i]);  if(i==(j-1)){	printf(") :");	}	}
				n3 = n1 >> n2;
				j= DecBin(n3, vetor_c);
				printf(" %d (" ,n3);
				for(i=0; i<j; i++){	printf("%d", vetor_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			case 6:
				j = DecBin(n1, vetor_n);
				printf("\n%d (", n1);
				for(i=0; i<j; i++){	printf("%d", vetor_n[i]); if(i==(j-1)){	printf(") >>");	}	}
				j = DecBin(n2, vetor_n1);
				printf(" %d (", n2);
				for(i=0; i<j; i++){	printf("%d", vetor_n1[i]);  if(i==(j-1)){	printf(") :");	}	}
				n3 = n1 << n2;
				j= DecBin(n3, vetor_c);
				printf(" %d (" ,n3);
				for(i=0; i<j; i++){	printf("%d", vetor_c[i]);   if(i==(j-1)){	printf(") ");	}	}
				printf("\n\n");
				break;
			default:
				break;
		}
	return 0;
} 
