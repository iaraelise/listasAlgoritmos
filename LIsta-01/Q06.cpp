#include <iostream>

int main () {

    bool primo = true;
    int num;
    int contadorDivisores = 0;


    std::cout << "Digite um número: ";
    std::cin >> num;

    for(int i = 1; i <= num; i++) {
        if (num % i == 0) {
            contadorDivisores++;
        }
    }

    std::cout << std::boolalpha;

    if (contadorDivisores == 2) {
        primo = true;
        std::cout << primo << std::endl;
    }
    else {
        primo = false;
        std::cout << primo << std::endl;
    }

}