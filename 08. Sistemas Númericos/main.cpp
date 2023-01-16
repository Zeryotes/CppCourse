#include <iostream>

int main(){
    int numero1 = 15; // Decimal
    int numero2 = 017; // Octal
    int numero3 = 0x0F; // Hexadecimal
    int numero4 = 0b00001111; // Binário

    std::cout << "Numero 1: " << numero1 << std::endl;
    std::cout << "Numero 2: " << numero2 << std::endl;
    std::cout << "Numero 3: " << numero3 << std::endl;
    std::cout << "Numero 4: " << numero4 << std::endl;
    
    return 0;
}