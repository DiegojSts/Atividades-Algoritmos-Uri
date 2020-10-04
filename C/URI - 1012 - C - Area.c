#include <stdio.h>
#include <math.h>
/*
Escreva um programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcule e mostre:
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
b) a �rea do c�rculo de raio C. (pi = 3.14159)
c) a �rea do trap�zio que tem A e B por bases e C por altura.
d) a �rea do quadrado que tem lado B.
e) a �rea do ret�ngulo que tem lados A e B.

Entrada
O arquivo de entrada cont�m tr�s valores com um d�gito ap�s o ponto decimal.

Sa�da
O arquivo de sa�da dever� conter 5 linhas de dados. Cada linha corresponde a uma das �reas descritas acima, 
sempre com mensagem correspondente e um espa�o entre os dois pontos e o valor.
 O valor calculado deve ser apresentado com 3 d�gitos ap�s o ponto decimal.
*/
 
int main() {
 
   double A, B, C, tr, circ, trap, qd, ret;

scanf("%lf %lf %lf", &A, &B, &C);

tr = (A * C)/2;
circ = 3.14159 * pow(C,2);
trap = (A + B) / 2 * C;
qd = pow(B,2);
ret = A * B;


printf("TRIANGULO: %.3f\n", tr);
printf("CIRCULO: %.3f\n", circ);
printf("TRAPEZIO: %.3f\n", trap);
printf("QUADRADO: %.3f\n", qd);
printf("RETANGULO: %.3f\n", ret);
 
 return 0;
}
