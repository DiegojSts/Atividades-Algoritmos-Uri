#include <stdio.h>
#include <math.h>
/*
Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. 
Utilize a f�rmula:

Obs.: a f�rmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto � necess�rio para chegar no resultado esperado.

Entrada
O arquivo de entrada cont�m tr�s valores inteiros.

Sa�da
Imprima o maior dos tr�s valores seguido por um espa�o e a mensagem "eh o maior".

*/
 
int main() {
 
    int a, b, c, MaiorAB, MaiorABC;
    
    scanf("%d %d %d", &a, &b, &c);
    
    MaiorAB = (a + b + abs(a-b)) /2;
    
    MaiorABC = (MaiorAB + c + abs(MaiorAB-c))/2;
    
    printf("%d eh o maior\n", MaiorABC);
 
    return 0;
}
