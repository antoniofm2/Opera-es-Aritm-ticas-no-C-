#include <iostream>

int main() {

    float numero1, numero2, resultado;


    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;
    
    if (numero2 != 0) {
        
        resultado = numero1 / numero2;

        std::cout << "O resultado da divisão é: " << resultado << std::endl;
    } else {
        std::cout << "Erro: Não é possível dividir por zero." << std::endl;
    }

    return 0;
}
