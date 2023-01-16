#include <iostream>

/* CONTEÚDO DA SEÇÃO:
** - Adição             +
** - Subtração          -
** - Multiplicação      *
** - Divisão Inteira    /
** - Modulo (resto)     %
*/

int main(){
    // Adição
    std::cout << "--- ADICAO ---" << std::endl;
    int num1{2};
    int num2{4};

    int resultado = num1 + num2;
    std::cout << "Resultado : " << resultado << std::endl;
    std::cout << std::endl;

    // Subtração
    std::cout << "--- SUBTRACAO ---" << std::endl;
    resultado = num2 - num1;
    std::cout << "Resultado : " << resultado << std::endl;

    resultado = num1 - num2;
    std::cout << "Resultado negativo : " << resultado << std::endl;
    std::cout << std::endl;

    // Multiplicação
    std::cout << "--- MULTIPLICACAO ---" << std::endl;
    resultado = num1 * num2;
    std::cout << "Resultado : " << resultado << std::endl;
    std::cout << std::endl;

    // Divisão Inteira
    std::cout << "--- DIVISAO ---" << std::endl;
    resultado = num2 / num1;
    std::cout << "Resultado : " << resultado << std::endl;
    std::cout << std::endl;

    // Resto da divisão
    std::cout << "--- RESTO ---" << std::endl;
    num2 = 13;
    resultado = num2 / num1; // 13 % 2
    std::cout << "Resultado : " << resultado << std::endl;
    std::cout << std::endl;

    return 0;
}