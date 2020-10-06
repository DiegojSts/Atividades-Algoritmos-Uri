/*
Temos no código abaixo uma função que já foi definida. Ela se chama validaCPF.

Ela definida para receber um parâmetro que representa um possível CPF. Tudo que ela faz se resume em um único objetivo: 
Retornar true caso o parâmetro seja um CPF válido ou false caso contrário. Eis aqui algo legal sobre funções: tudo que
 você precisa para utilizá-las é saber o que ela faz. Você não precisa saber o como ela faz.

Execute utilize a função validaCPF para imprimir “CPF válido” caso o “576.524.020-85” seja um cpf válido. Caso contrário,
 imprima “CPF inválido”

 Dicas:
 Lembre de passar o “576.524.020-85” entre aspas
 Utilize o if para verificar se o retorno da função validaCPF(“576.524.020-85”)
 Verifique cuidadosamente se o que o seu console.log imprime confere exatamente com o descrito no enunciado.
  Prefira copiar a mensagem do enunciado e colar no seu código.

*/

// Seu código vem aqui. Lembre-se: a função validaCPF já está definida.
if (validaCPF("576.524.020-85")) {
    console.log("CPF válido")
} else {
    console.log("CPF inválido")
}