#include <stdio.h>

/*
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferen�a do produto de A e B pelo produto 
de C e D segundo a f�rmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada cont�m 4 valores inteiros.

Sa�da
Imprima a mensagem DIFERENCA com todas as letras mai�sculas, conforme exemplo abaixo, c
om um espa�o em branco antes e depois da igualdade..


*/
 
int main() {
 
  int A, B, C, D, DIFERENCA;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    DIFERENCA = (A * B - C * D);
    
    printf("DIFERENCA = %d\n", DIFERENCA);
 
    return 0;
}
