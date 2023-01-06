#include <iostream>

/* CONTEÚDO DA SEÇÃO:
** - Modificadores de Inteiros: Signed/Unsigned, short, long
*/

int main(){
    // 0~4.294.967.295
    unsigned int positivos;

    // -2.147.483.648 ~ 2.147.483.647
    signed int inteiros;

    short int pequeno; // 2 bytes
    int normal; // 4 bytes
    long int grande; // 4 ou 8 bytes
    long long grandissimo; // 8 Bytes

    int valor1 {10};
    int valor2 {-140};

    std::cout << "Valor 1: " << valor1 << std::endl;
    std::cout << "Valor 2: " << valor2 << std::endl;
    std::cout << "sizeof (valor1): " << sizeof(valor1) << std::endl;
    std::cout << "sizeof (valor2): " << sizeof(valor2) << std::endl;

    unsigned int valor3 {5};
    unsigned int valor4 {-50}; // ERRO DE COMPILAÇÃO.

    return 0;
}