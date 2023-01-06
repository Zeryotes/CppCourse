#include <iostream>

/* CONTEÚDO DA SEÇÃO:
** - Tipos de dados: Inteiro
** - Tipos de inicializações: Atribuição ("="), função("()") ou com chaves ("{}").
** - Regras de nomeação de variáveis:
*/

int main(){
    // Inicialização com chaves
    // Variável pode conter lixo de memória (valores aleatórios) . GERA WARNING
    int elefante_contagem;
    int leao_contagem {}; // Inicializa em 0.
    int cachorro_contagem {10}; 
    int gatos_contagem {15};

    // Permitido inicialização com variáveis já criadas ou expressões.
    int animais_domesticados {cachorro_contagem + gatos_contagem};

    // Má inicialização
    // int new_number {numero_inexistente};

    std::cout << "Contagem de elefantes: " << elefante_contagem << std::endl;
    std::cout << "Contagem de leoes: " << leao_contagem << std::endl;
    std::cout << "Contagem de cachorros: " << cachorro_contagem << std::endl;
    std::cout << "Contagem de gatos: " << gatos_contagem << std::endl;
    std::cout << "Contagem de animais domesticos: " << animais_domesticados << std::endl;

    // Inicialização por função
    int numeroIncrivel(6);

    // Diferentecial da inicialização por função. OBS: O mesmo ocorre com a atribuição.
    // Caso seja passado um número decimal, a passagem por função faz o que é chamado de "Narrowing" (estreitamento). Ou seja, pega apenas a parte inteira do número. Na inicialização por chaves, isso não ocorre e o compilador acusa em erro. OBS.:
    int numeroDecimal(5.6);

    // Inicialização por atribuição
    int numeroNormal = 12;

    // Checando o tamanho em memória das tipos de dados com a função sizeof
    std::cout << "Sizeof int: " << sizeof(int) << std::endl;
    std::cout << "Sizeof cachorro_contagem" << sizeof(cachorro_contagem) << std::endl;

    return 0;
}