/*
Escreva uma função chamada menorNumero. Ela deve receber dois números como parâmetro e retornar o menor entre eles. 
Caso os números sejam iguais, basta que se retorne qualquer um deles.

Dicas:
A sua função deve ser definida (preparada) para receber dois parâmetros. Você pode chamar esses parâmetros de a e b, 
por exemplo.

Você precisará de um if para descobrir qual é o menor dos números
*/

function menorNumero(numA, numB) {
    if (numA < numB) {
        return numA
    } else {
        return numB
    }
}

console.log(menorNumero(10, 20))