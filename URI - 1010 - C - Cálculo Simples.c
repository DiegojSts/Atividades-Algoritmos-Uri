#include <stdio.h>

/*
Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, 
o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada cont�m duas linhas de dados. Em cada linha haver� 3 valores, respectivamente 
dois inteiros e um valor com 2 casas decimais.

Sa�da
A sa�da dever� ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espa�o ap�s os 
dois pontos e um espa�o ap�s o "R$". O valor dever� ser apresentado com 2 casas ap�s o ponto.Fa�a um programa que 
leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s 

*/
 
int main() {
 
    int cod1, qtd1;
    int cod2, qtd2;
    double vl1, vl2, res;
    
    scanf("%d %d %lf", &cod1, &qtd1, &vl1);
    scanf("%d %d %lf", &cod2, &qtd2, &vl2);
    
    res = (qtd1 * vl1) + (qtd2 * vl2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", res);
    
    return 0;
}
