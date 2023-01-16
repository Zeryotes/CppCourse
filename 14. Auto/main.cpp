#include <iostream>

/* CONTEÚDO DA SEÇÃO:
** - Palavra chave AUTO
*/

int main(){
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};

    // Sufixos modificadores de inteiro
    auto var6 {123u};
    auto var7 {123ul};
    auto var8 {123ll};

    // Sizeof variáveis
    std::cout << "var1 ocupa na memoria : " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 ocupa na memoria : " << sizeof(var2) << " bytes" <<std::endl;
    std::cout << "var3 ocupa na memoria : " << sizeof(var3) << " bytes" <<std::endl;
    std::cout << "var4 ocupa na memoria : " << sizeof(var4) << " bytes" <<std::endl;
    std::cout << "var5 ocupa na memoria : " << sizeof(var5) << " bytes" <<std::endl;
    std::cout << "var6 ocupa na memoria : " << sizeof(var6) << " bytes" <<std::endl;
    std::cout << "var7 ocupa na memoria : " << sizeof(var7) << " bytes" <<std::endl;
    std::cout << "var8 ocupa na memoria : " << sizeof(var8) << " bytes" <<std::endl;

    return 0;
}