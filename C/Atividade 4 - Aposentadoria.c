#include <stdio.h>
    
    // Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para estar em condições: 
    // - Ter no minimo 65 anos / Ter trabalhado no minimo 30 / Ter no minimo 60 anos e ter trabalhado 25 / Feito isso printar se tem direito ou não.
    
int main(){
	int x, y, z, Z, Y;
	
	printf("Informe o seu codigo\n");
	scanf("%d", &x);
	printf("Informe o ano de nascimento\n");
	scanf("%d", &y);
	printf("Informe ano de ingresso na empresa\n");
	scanf("%d", &z);
	Y=2019-y;
	Z=2019-z;
	printf("A idade do empregado e: %d\n", Y);
	if(Y>=65){
		    printf("Requer Aposentadoria - Idade: %d\n", Y);
	}if(Y<65){
		    printf("Nao requer - Idade: %d\n", Y);
	}if(Z>=30){
		    printf("Requer Aposentadoria - Tempo de trabalho: %d\n", Z);
	}if(Z<30){
		    printf("Nao requer - Tempo de trabalho: %d\n", Z);
	}
}
	
		


	
	
	
