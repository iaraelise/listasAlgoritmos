#include <iostream>

int main () {

    int num;
    int contadorDivisores = 0;

    std::cout << "Digite um número: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            contadorDivisores++;
        }
    }

    std::cout << contadorDivisores << std::endl;

}