#include <iostream>

/* CONTEÚDO DA SEÇÃO:
** - Erros e alertas: Erros em tempo de compilação, Erros em tempo de execução e alertas.
*/

int main(){
    std::cout << "Hello World" << std::endl;

    /* ERROS EM TEMPO DE COMPILAÇÃO:
        Algo na sintaxe do código que impede a interpretação correta do compilador. O executável não será criado.
        Exemplo: Esquecer um fechamento de código ";" no final da linha.
    */
//    std::cout << "Hello World" << std::endl

    /* ERROS EM TEMPO DE EXECUÇÃO:
        Erro que ocorre na execução do programa. Um erro lógico que impede o funcionamento correto do programa. Pode causar "crash" do programa.
        Exemplo: Em uma interface de usuário que era pra ser VERDE está CINZA devido a um erro.
    */
//    int valor = 7/0;
//    std::cout << "Valor: " << valor << std::endl;

    /* ALERTAS:
        São problemas que são pequenos demais para impedir a compilação do programa, mas podem impedir que o programa funcione como esperado.
        Exemplo: Divisão de um número por 0.
    */
    return 0;
}