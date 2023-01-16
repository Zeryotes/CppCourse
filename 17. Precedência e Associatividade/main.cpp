#include <iostream>

/* CONTEÚDO DA SEÇÃO:
** - Precedência
** - Associatividade
*/

int main(){
    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    // Exemplo 1
    int resultado = a + b * c - d / e - f + g;
    std::cout << "Resultado Exemplo 1: " << resultado << std::endl;

    // Exemplo 2
    resultado = a / b * c + d - e + f;
    std::cout << "Resultado Exemplo 2 : " << resultado << std::endl;

    // Exemplo 3
    int resultado = a + (b * c) - (d / e) - f + g;
    std::cout << "Resultado Exemplo 3: " << resultado << std::endl;

    // Exemplo 4
    int resultado = (a + b) * c - d / e - f + g;
    std::cout << "Resultado Exemplo 4: " << resultado << std::endl;

    return 0;
}