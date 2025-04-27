#include <iostream>

int main () {

    const double PI = 3.14159;
    double diametro;
    
    std::cout << "Digite o diametro com 5 casas decimais:" << std::endl;
    std::cin >> diametro;

    double raio = diametro / 2;

    double area = PI * (raio * raio);

    std::cout << area << std::endl;

}