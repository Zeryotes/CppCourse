#include <iostream>

/* CONTEÚDO DA SEÇÃO:
** - Booleans
*/

int main(){
    bool luz_vermelha{true};
    bool luz_verde{false};

    if(luz_vermelha == true){
        std::cout << "PARE!" << std::endl;
    } else {
        std::cout << "Siga em frente!" << std::endl;
    }
    
    // Sizeof()
    std::cout << "Sizeof(bool) : " << sizeof(bool) << std::endl;

    // Imprimindo um booleano
    // 1 -> true
    // 2 -> false

    std::cout << std::endl;
    std::cout << "Luz vermelha : " << luz_vermelha << std::endl;
    std::cout << "Luz verde : " << luz_verde << std::endl;

    std::cout << std::endl;
    // Outra maneira de imprimir um booleano de maneira mais clara
    std::cout << std::boolalpha;
    std::cout << "Luz vermelha : " << luz_vermelha << std::endl;
    std::cout << "Luz verde : " << luz_verde << std::endl;
    return 0;
}