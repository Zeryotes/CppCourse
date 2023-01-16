#include <iostream>

/* CONTEÚDO DA SEÇÃO:
** - Atribuições
*/

int main(){
    int var1 {123}; // Declaração e inicialização
    std::cout << "var1 : " << var1 << std::endl;

    var1 = 55; // Atribuição
    std::cout << "var1 : " << var1 << std::endl; 

    std::cout << std::endl;

    double var2{44.55}; // Declaração e inicialização
    std::cout << "var2 : " << var2 << std::endl;

    var2 = 90.99; // Declaração e inicialização
    std::cout << "var2 : " << var2 << std::endl;

    std::cout << std::endl;

    bool estado {false}; // Declaração e inicialização
    std::cout << std::boolalpha;
    std::cout << "Estado : " << estado << std::endl;
    
    estado = true; // Atribuição
    std::cout << "Estado : " << estado << std::endl;

    std::cout << std::endl;
    
    // Tipo AUTO
    auto var3 {333u}; // Declaração e inicialização de um tipo deduzido

    var3 = -22; // Atribuindo um valor negativo. PERIGOSO! Pois o compilador pode armazenar um valor lixo que não condiz com o que deve ser usado.

    std::cout << "var3 : " << var3 << std::endl;

    return 0;
}