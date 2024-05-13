#include <iostream>

int main() {

    int numero1, numero2, diferenca;

    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

    diferenca = numero1 - numero2;

    std::cout << "A diferença é: " << diferenca << std::endl;

    return 0;
}
