#include <stdio.h>

// Calcular 100 primeiros numeros naturais

int main(){
	
	int x, y, z;
	y=0;
	z=1;
	
	do{
		printf("soma %i\n", y);
		y=y+z;
		z++;
		
	}while(z<=101);
	
}
