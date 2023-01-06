#include <iostream>
#include <iomanip> // Biblioteca necessárias para manipular a precisão dos pontos flutuantes.

/* CONTEÚDO DA SEÇÃO:
** - Números Fracionários: Float, Double e Long Double
*/

int main(){
    // OBS: Lembre-se de colocar a letra para definir o tipo de ponto flutuante. f pra float e L para long double
    float numero1{1.123456789f};
    double numero2{1.123456789};
    long double numero3{1.1234567890123456789L};

    std::cout << "Sizeof float: " << sizeof(float) << std::endl;
    std::cout << "Sizeof double: " << sizeof(double) << std::endl;
    std::cout << "Sizeof long double: " << sizeof(long double) << std::endl;
    
    double numero4 {192400023};
    double numero5 {1.92400023e8}; // Podemos usar notação cientifica.
    double numero6 {1.924e8};
    double numero7 {5.6};
    double numero8 {}; // 0
    double numero9 {};

    // INFINITO
    double result {numero7 / numero8};


    std::cout << std::setprecision(20);
    std::cout << "Numero 1 eh: " << numero1 << std::endl; // 7 dígitos
    std::cout << "Numero 2 eh: " << numero2 << std::endl; // +-15 dígitos
    std::cout << "Numero 3 eh: " << numero3 << std::endl; // +15 dígitos
    std::cout << "Numero 4 eh: " << numero4 << std::endl;
    std::cout << "Numero 5 eh: " << numero5 << std::endl;
    std::cout << "Numero 6 eh: " << numero6 << std::endl;

    return 0;
}