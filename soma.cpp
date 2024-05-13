#include <iostream>

int main() {

    int numero1, numero2, soma;

    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

    soma = numero1 + numero2;

    std::cout << "A soma é: " << soma << std::endl;

    return 0;
}
