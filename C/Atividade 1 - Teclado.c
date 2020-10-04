#include <stdio.h>

// Escreva um algoritmo para ler um valor do teclado e escrever na tela o seu antecessor.

int main(){
	
	int x;
	
	printf("Digite um numero\n");
	scanf("%d", &x);
	x--;
	printf("O antecessor e: %d\n", x);
	
}
