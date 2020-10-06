/*
Será que posso ir ao banco?

Precisamos criar um código que ajude os usuários a saber se pode ir ao banco. Sabemos que o banco está aberto em todos 
os os dias da semana, exceto em  finais de semana. Caso o usuário possa ir ao banco você deve exibir com console.log 
a seguinte mensagem: “Você pode ir ao banco”, caso contrário, ‘O banco está fechado, tente outro dia’

Para esse exercício leve em consideração as seguintes informações:

- Dias da semana pro sistema: segunda, terca, quarta, quinta, sexta, sabado e domingo.
- Você terá a seguinte variável no código: diaSemana
- Para esse exercício você deve usar na condição do if o operador && para juntar as condições lógicas junto ao operador diferente de(!=).

Dicas:
Utilize somente um if para resolver esse exercício
Para verificar se uma variável booleana é falsa basta usar o simbolo de negação antes de chamar o nome da variável.
Talvez seja mais fácil isolar o final de semana, do que testar dia a dia da semana!
*/
var diaSemana = 'sabado'

// Seu código aqui
if (diaSemana != 'sabado' && diaSemana != 'domingo') {
    console.log("Você pode ir ao banco")
} else {
    console.log("O banco está fechado, tente outro dia")
}