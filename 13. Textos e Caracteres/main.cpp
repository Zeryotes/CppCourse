#include <iostream>

/* CONTEÚDO DA SEÇÃO:
** - Caracteres (CHAR)
** - Textos (STRING) // Não apresentado nessa aula
*/

int main(){
    char caractere1 {'c'};
    char caractere2 {'a'};
    char caractere3 {'r'};
    char caractere4 {'r'};
    char caractere5 {'o'};

    std::cout << caractere1 << std::endl;
    std::cout << caractere2 << std::endl;
    std::cout << caractere3 << std::endl;
    std::cout << caractere4 << std::endl;
    std::cout << caractere5 << std::endl;

    // Um byte na memória : 2^8 = 256 valores diferentes (0 ~ 255)
    std::cout << std::endl;

    char valor = 65; // Código para 'A' na tabela ASCII
    std::cout << "Valor : " << valor << std::endl;
    std::cout << "Valor (int) : " << static_cast<int>(valor) << std::endl;

    return 0;
}