//Marcos Barros de Oliveira Sírio
//Matrícula: 11721EBI018

#include <stdio.h>

void BinDec(){
   int i=0,j=0,k, mult=1, bin[256], soma=0;
	char binario[256];
	printf("\nDigite um numero a ser convertido: ");
	scanf("%s", &binario);
	for(i=0; binario[i]!='\0'; i++);
	i--;
	k=i;
	for(i; i>=0; i--){
		if(binario[i]=='0'){bin[i]=0;}
		else if(binario[i]=='1'){bin[i]=1;}
		}
	i=k;

	for(i;i>=0; i--){
		for(k=0; k<j; k++){mult=mult*2;}
		soma=soma + bin[i]*mult;
		mult=1;
		j++;
}
    printf("\nO binario %s em decimal e: %d \n\n\n", binario,soma);
}


void BinHex(){
	int i=0,j=0,k, mult=1, bin[256], soma=0;
	char binario[256];
	printf("\nDigite um numero a ser convertido: ");
	scanf("%s", &binario);
	for(i=0; binario[i]!='\0'; i++);
	i--;
	k=i;
	for(i; i>=0; i--){
		if(binario[i]=='0'){bin[i]=0;}
		else if(binario[i]=='1'){bin[i]=1;}
		}
	i=k;

	for(i;i>=0; i--){
		for(k=0; k<j; k++){mult=mult*2;}
		soma=soma + bin[i]*mult;
		mult=1;
		j++;
}
    printf("\nO binario %s em hexadecimal e: %X \n\n\n", binario,soma);
    
}
	    
void HexDec(){
 int hexadecimal;
    printf("\nDigite um numero a ser convertido: ");
        scanf("%x" ,&hexadecimal);
        printf("O hexadecimal %x em decimal e: %d" ,hexadecimal);
    
}	

void HexBin(){
int hexadecimal,i,q[80],r[80];
i=0;
printf("Digite o numero a ser convertido: ");
scanf("%d", &hexadecimal);
printf("%d em binarios: ",hexadecimal);

  while (hexadecimal != 1){
   q[i]= hexadecimal / 2;
   r[i] = hexadecimal % 2;
   hexadecimal=q[i];
   i++;
   }
i--;

  while (i>=0){
     if (q[i] == 1) printf("1%d",r[i]);
          else printf("%x",r[i]);
   i--;
   }
printf("\n");
}

void DecBin(){
int decimal,i,q[80],r[80];
i=0;
printf("\nDigite um numero a ser convertido:\n");
scanf("%d", &decimal);
printf("%d em binarios: ",decimal);

  while (decimal != 1){
   q[i]= decimal / 2;
   r[i] = decimal % 2;
   decimal=q[i];
   i++;
   }
i--;

  while (i>=0){
     if (q[i] == 1) printf("1%d",r[i]);
          else printf("%d",r[i]);
   i--;
   }
printf("\n");
}

void DecHex(){
	 int decimal;
    printf("\n Informe um numero em decimal: ");
        scanf("%d" ,&decimal);
        printf("O decimal %d em hexadecimal e: %x" , decimal, decimal);
   
}

void OctDec(){
	 int octal;
    printf("\n Informe um numero em octal: ");
        scanf("%o" ,&octal);
        printf("O octal %o em hexadecimal e: %x" , octal, octal);
    
}

void DecOct(){
int decimal;
    printf("\nDigite um numero a ser convertido: ");
        scanf("%d" ,&decimal);
        printf("O hexadecimal %d em octal e: %o" ,decimal,decimal);
    
}

int main(){
	int opcao;
	printf("\nVoce deseja conversao entre: \n1-Binario para Decimal \n2-Binario para Hexadecimal \n3-Hexadecimal para Decimal \n4-Hexadecimal para Binario \n5-Decimal para Binario \n6-Decimal para Hexadecimal \n7-Octal para Decimal \n8-Decimal para Octal\n");
	scanf("%d", &opcao);
	switch(opcao){
		case 1: BinDec();
			break;
		case 2: BinHex();
			break;
		case 3: HexDec();
			break;
		case 4: HexBin();
			break;
		case 5: DecBin();
			break;
		case 6: DecHex();
			break;
		case 7: OctDec();
			break;
		case 8: DecOct();
			break;
		default: printf("\n\nOpção Inválida!");
	}
return 0;
}
