#include <stdio.h>

/******

 Escreva um algoritmo que leia X e se verique se é maior ou igual a 10,
se verdadeiro x+5, se falso x-7 e print o resultado.

*******/

int main(){
	int x;
	
	printf("Informe um numero inteiro\n");
	scanf("%d", &x);
	if(x>=10){
		x=x+5;
		printf("O Valor e: %d\n", x);
	}else if(x<10){
		x=x-7;
		printf("O Valor e: %d\n", x);
	}
}
