#include <stdio.h>

//Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicando
//se este n�mero � par ou �mpar, e se � positivo ou negativo.

int main (){
	
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf("%i", &num);
	
	if(num<0){
		printf("O numero e negativo\n");
		
	}else{
		
		printf("O numero e positivo\n");
	}
	
	if(num%2==0){
		printf("O numero e par\n");
	}else{
		
		printf("O numero nao e par\n");
	}
	
	
	
	
	
}
