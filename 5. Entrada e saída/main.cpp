#include <iostream>
#include <string> // Biblioteca necessária para usar o tipo de dado String

/* CONTEÚDO DA SEÇÃO:
** - Entrada (input): std::cout, std::cerr e std::clog;
** - Saída (output): std::cin e std::getline;
*/

int main(){
    // std::cout: Imprime coisas no console
    std::cout << "Hello World" << std::endl;
    std::cout << "O numero eh: " << 12 << std::endl;

    int age {21};
    std::cout << "A idade eh: " << age << std::endl;

    // ERROR
    std::cerr << "std::cerr output: Algo deu errado" << std::endl;

    // Messagem de LOG
    std::clog << " std::clog output: Essa eh uma mensagem de log" << std::endl;

    

    std::cout << std::endl << "-----------------------" << std::endl;
    // std::cin: Coleta dados
    int age1;
    std::string nome;

    std::cout << "Por favor, digite seu nome: " << std::endl;
    std::cin >> nome;

    std::cout << "Por favor, digite sua idade: " << std::endl;
    std::cin >> age1;

    /*  Uma outra maneira de coletar dado, de maneira mais compacta.
        std::cout << "Digite seu nome e idade: " << std::endl;
        std::cin >> nome >> age;
    */

    std::cout << "Ola " << nome << ", voce tem " << age1 << " anos!" << std::endl;



    // Capturando dados com espaços.
    std::string nome_completo;
    int age2;

    std::cout << std::endl << "-----------------------" << std::endl;
    std::cout << "Por favor, digite seu nome completo e sua idade " << std::endl;
    
    std::getline(std::cin, nome_completo);

    std::cin >> age2;

    std::cout << "Ola " << nome_completo << ", voce tem " << age2 << " anos!" << std::endl;



    return 0;
}