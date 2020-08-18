#include <stdio.h>
#include <math.h>
/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, 
sempre com mensagem correspondente e um espaço entre os dois pontos e o valor.
 O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
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
