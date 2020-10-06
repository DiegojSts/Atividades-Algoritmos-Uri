/*
Temos um array em uma variável chamada baralho e precisamos de um script que procure a carta “Rei” entre as cartas do 
baralho. Assim que encontrar o “Rei” pare o loop utilizando break  e exiba um console.log a seguinte frase:
Encontrei o Rei!

Dicas:
Utilize .length para trazer o tamanho do array.
Utilize o comando break para interromper a execução do loop.
*/
var baralho = ["Ás", "Dama", "Rei", "Valete"]

//Seu código aqui

for (i = 0; i < baralho.length; i++) {
    if (baralho[i] == "Rei") {
        console.log("Encontrei o Rei!")
        break
    }
}