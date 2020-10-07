/*
No fim de semana o elevador do nosso prédio quebrou, restringindo muito o fluxo de pessoas. Considerando isso, apenas os 
moradores dos apartamentos com número par poderão usar o elevador. Escreva um código que, com base na variável moradores 
nos informe quais moradores poderão utilizar o elevador. O número do apartamento é a sua posição no array, e o nome do 
morador é o valor.

Imprima no console a lista a seguinte frase: 'O morador ' + nome do morador + ' pode usar o elevador'

Dicas:
Você pode verificar se um número é par dividindo ele por dois e verificando se o “resto” da divisão é 0 (numero % 2 == 0)
Atenção a string solicitada, é importante que tenha todos os caracteres, incluindo espaços e pontuações.
*/

var moradores = [
    "Fulano de Tal",
    "Beltrano da Cia",
    "Viajante do Tempo",
    "Morador da Lua",
    "Marciano Azul",
    "Et da Eslováquia",
    "Jedi do Lado Cinza da Força",
    "Baby Yoda Amarelo"
]

for (i = 0; i < moradores.length; i++) {
    if (i % 2 == 0) {
        console.log("O morador " + moradores[i] + " pode usar o elevador")
    }
}