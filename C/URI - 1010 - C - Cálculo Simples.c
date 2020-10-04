#include <stdio.h>

/*
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, 
o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente 
dois inteiros e um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os 
dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.Faça um programa que 
leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês 

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
