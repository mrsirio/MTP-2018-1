//Marcos Barros de Oliveira Sirio 
//Matricula 11721EBI018

#include <stdio.h>
long int funcao_ackermann(int m,int n){
	long int x;
	if(m==0){return n+1;		
	}
	if(m>0 && n==0){return funcao_ackermann(m-1,1);
	}
	x=funcao_ackermann(m,n-1);
	if(m>0 && n>0){return funcao_ackermann(m-1,x);
	}
}
int main(){
	int m, n;
	printf("\nDigite um valor para m: ");
	scanf("%d", &m);
	getchar();
	printf("\nDigite um valor para n: ");
	scanf("%d", &n);
	getchar();
	printf("\n Valor resultante: %ld", funcao_ackermann(m,n));
return 0;
}
