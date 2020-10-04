#include <stdio.h>
#include <math.h>
/*
Fa�a um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). 
A f�rmula para calcular o volume �: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.

Dica: Ao utilizar a f�rmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++), 
assumem que o resultado da divis�o entre dois inteiros � outro inteiro.

Entrada
O arquivo de entrada cont�m um valor de ponto flutuante (dupla precis�o), correspondente ao raio da esfera.

Sa�da
A sa�da dever� ser uma mensagem "VOLUME" conforme o exemplo fornecido abaixo, com um espa�o antes e um espa�o depois da
 igualdade. O valor dever� ser apresentado com 3 casas ap�s o ponto.

*/
 
int main() {
 
double pi = 3.14159;
double res, r;

scanf("%lf", &r); 

res= (4.0/3) * pi * (pow(r,3));

printf("VOLUME = %.3f\n", res);
    return 0;
}
