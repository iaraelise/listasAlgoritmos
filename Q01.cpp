#include <iostream>

int main() {
    
    int num_01;
    int num_02;
    int soma;

    std::cout << "Digite dois números: ";

    std::cin >> num_01;
    std::cin >> num_02;

    soma = num_01 + num_02;

    std::cout<<soma<<std::endl;
}