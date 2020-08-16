#include <stdio.h>

//Converter Celsius para Farenheit F = (9*C+160)/5
// C --> F


int main(){


	
	float C, F, res;
	
	printf("Informe o Celsius: ");
	scanf("%f", &C);
	
	
	res= (9*C+160)/5;
	printf("Farenheits: %.2f", res);
	
	
	
}
