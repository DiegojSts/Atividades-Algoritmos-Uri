#include <stdio.h>

// Admitindo que uma data é lida pelo algoritmo numa variável inteira, e não em uma variavel data. 
// Crie um algoritmo que leia a data no formato: DDMMAA e imprima AAMMDD.


int main(){
	int dia, mes, ano;
	printf("Indique apenas com os dois ultimos algarismos\n");
    printf("Indique o dia\n");
    scanf("%i", &dia);
    printf("Indique o mes\n");
    scanf("%i", &mes);
    printf("Indique o ano\n");
    scanf("%i", &ano);
    printf("%i/%i/%i\n - DDMMAA\n", dia, mes, ano);
    printf("%i/%i/%i\n - AAMMDD\n", ano, mes, dia);
    

}
	
	
	
	
	
