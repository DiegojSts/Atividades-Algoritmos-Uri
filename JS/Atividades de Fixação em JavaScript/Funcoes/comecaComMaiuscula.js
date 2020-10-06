/*
O código abaixo já tem a função comecaComMaiuscula(palavra) definida. Essa função retorna true caso a palavra passada no 
parâmetro seja iniciada por uma letra maiúscula e false caso contrário. Use um for  com um contador i para imprimir para
 cada palavra no array de palavras as seguintes frases: “Começa com maiúscula” caso a palavra comece com maiúscula e 
 “Não começa com maiúscula” caso contrário.

 Dicas:
 Utilize o for para percorrer o array [ for(var i=0; i<palavras.length; i++) ]
 Utilize o if dentro do for para descobrir se a palavra da vez começa ou não com maiúscula
 Utilize a função comecaComMaiuscula para descobrir se uma palavra do array começa ou não com maiúscula
 O código if(comecaComMaiuscula(palavra)) é perfeitamente possível, contanto que a variável palavra contenha uma string.

*/

function comecaComMaiuscula(palavra) {
    return /^[A-Z]/.test(palavra)
}

var palavras = ["Amor", "copo", "Bolacha", "biscoito"];
for (var i = 0; i < palavras.length; i++) {
    if (comecaComMaiuscula(palavras[i])) {
        console.log("Começa com maiúscula")
    } else {
        console.log("Não começa com maiúscula")

    }
}

