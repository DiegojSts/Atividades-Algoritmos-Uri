/*
Crie um sistema para calcular a comissão dos vendedores de uma loja. Crie uma função que tenha dois argumentos: 
preço e porcentagem de comissão.

Dicas:
Multiplique preço por porcentagem e divida por 100 para obter o resultado.
*/

function comissao(preco, porcentagem) {
    var calculoComissao = preco * (porcentagem / 100)
    return calculoComissao
}