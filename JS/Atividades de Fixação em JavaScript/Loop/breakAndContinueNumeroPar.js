/*
Precisamos imprimir somente os números pares de 0 à 20. Mas temos alguns requisitos, você precisa utilizar, o loop for, 
o comando continue e o numero deve ser o contador do loop! Vamos lá?

Dicas:
Utilize o contador do loop para imprimir a sequencia de números.
*/

for (i = 0; i <= 20; i++) {
    if (i % 2 != 0) {
        continue
    }
    console.log(i)
}