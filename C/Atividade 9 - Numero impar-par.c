#include <stdio.h>

//Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando
//se este número é par ou ímpar, e se é positivo ou negativo.

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
