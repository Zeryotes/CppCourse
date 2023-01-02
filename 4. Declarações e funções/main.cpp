#include <iostream>

/* CONTEÚDO DA SEÇÃO:
** - Variáveis: Uma noção básica, apenas para falar sobre funções.
** - Declarações: Qualquer linha de código que termina com ";" é uma declaração.
** - Funções: Uma maneira de reutilizar código de forma eficiente.
** - Sequência do código: TOP to BOTTOM (TOP-DOWN).
*/

/* Isso é uma função.
** Função possui: TIPO, NOME, PARÂMETROS, CORPO e RETORNO.
** TIPO: É o que define o tipo de dado que a função retorna. A primeira parte da função
** NOME: É como a função será chamada no código. Precisa ser único.
** PARÂMETROS: São informações que a função precisa pra realizar as ações no seu CORPO de forma a processar o que se espera.
** CORPO: É o que acontece dentro da função.
** RETORNO: É o resultado do que será processado dentro do corpo da função para a parte do código em que chamou a função.
*/
int somarNumeros(int primeiro_parametro, int segundo_parametro){
    int resultado = primeiro_parametro + segundo_parametro;
    return resultado;
}

// DESAFIO - Multiplicar dois números por função
int multiplicarNumeros(int primeiro_parametro, int segundo_parametro){
    int resultado = primeiro_parametro * segundo_parametro;
    return resultado;
}

int main(){
    // DECLARAÇÕES: Basicamente toda linha de código que termina com ";" é uma declaração.
    int primeiro_numero {3}; // Declaração
    int segundo_numero {10};

    std::cout << "Primeiro numero: " << primeiro_numero << std::endl;
    std::cout << "Segundo numero: " << segundo_numero << std::endl;

    int soma = primeiro_numero + segundo_numero;
    std::cout << "Soma (por variavel): " << soma << std::endl;

    soma = somarNumeros(20, 30);
    std::cout << "Soma (por funcao): " << soma << std::endl;
    
    // Funções podem ser reutilizadas facilmente.
    soma = somarNumeros(2, 12);
    std::cout << "Soma 2 (por funcao): " << soma << std::endl;

    // Pode-se usar funções dentro do std::cout.
    std::cout << "Soma 3 (por funcao): " << somarNumeros(72, 12) << std::endl;

    // Print do DESAFIO
    std::cout << "Multiplicacao: " << multiplicarNumeros(2, 5) << std::endl;

    return 0;
}